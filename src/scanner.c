#include <tree_sitter/parser.h>
#include <string.h>
#include <wctype.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)

enum TokenType {
  COMMAND_STOP,
  PARAGRAPH_MARK,
  TEXT,
};

// FIXME this scanner is not line ending agnostic

void *tree_sitter_context_external_scanner_create() { return NULL; }
void tree_sitter_context_external_scanner_destroy(void *p) {UNUSED(p);}
void tree_sitter_jcontext_external_scanner_reset(void *p) {UNUSED(p);}
unsigned tree_sitter_context_external_scanner_serialize(void *p, char *buffer) { UNUSED(p); UNUSED(buffer); return 0; }
void tree_sitter_context_external_scanner_deserialize(void *p, const char *b, unsigned n) {UNUSED(p); UNUSED(b); UNUSED(n);}

static bool isctxspecial(char c);
static void debuglookahead(char c, char* msg);

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// # UTILITY FUNCTIONS

// Check for a ConTeXt special character
static bool isctxspecial(char c) {
  switch (c) {
    case '^': return true;      
    case '#': return true;
    case '$': return true;
    case '%': return true;
    case '&': return true;
    case '_': return true;
    case '{': return true;
    case '}': return true;
    case '|': return true;
    case '~': return true;
    case '\\': return true;
  }
  return false;
}

// Helpful for tracking state
static void debuglookahead(char c, char* msg) {
  printf("#### %s\n", msg);
  printf("#### [Character under test: %c ]", c);
  fflush(stdout);
}


// TOKEN FUNCTIONS

//
static bool scan_command_stop(TSLexer *lexer) {
  // Determine if a command has ended in the source file.
  //
  // ConTeXt commands have a name, then zero or more square bracket blocks with 
  // options or settings, then one or more scopes.
  lexer->result_symbol = COMMAND_STOP;
  lexer->mark_end(lexer);
  
  while (lexer->lookahead != 0) {
  // while (!lexer->eof(lexer)) {

    // We have the start of an option block; still in command
    if (lexer->lookahead == '[') return false;
    // If we find the stop of an option block, the closing option block ends the command
    if (lexer->lookahead == ']') {lexer->mark_end(lexer); return true;}
    // We have a comment; this is not necessarily a stop
    if (lexer->lookahead == '%') return false;
    // We enter or leave a scope; the command is over
    if (lexer->lookahead == '{') {lexer->mark_end(lexer); return false;}
    if (lexer->lookahead == '}') {lexer->mark_end(lexer); return true;}
    // Found another command
    if (lexer->lookahead == '\\') {lexer->mark_end(lexer); return true;}
    // We find a numeric, the command is over
    if (iswdigit(lexer->lookahead)) {lexer->mark_end(lexer); return true;}
    
      
    if (lexer->lookahead == '\n') {
      advance(lexer);
      if (lexer->lookahead == '[') return false;
      if (lexer->lookahead == ']') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '%') return false;
      if (lexer->lookahead == '{') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '}') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '\\') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '\n') return true;
      advance(lexer);
      continue;
    } 

    advance(lexer);
  }
  
  // lexer->mark_end(lexer);
  return true;
}

 
static bool scan_paragraph_mark(TSLexer *lexer) {
  // Scan for two or more consecutive EOLs, and form a token to indicate a paragraph break.
  // FIXME the EOLs should be system agnostic.
  lexer->result_symbol = PARAGRAPH_MARK;
  lexer->mark_end(lexer);
  
  debuglookahead(lexer->lookahead, "Scanning for PARAGRAPH_MARK");
  
  while (lexer->lookahead != 0) {
    
    debuglookahead(lexer->lookahead, "PARAGRAPH_MARK-In scan loop");
    
    if (lexer->lookahead == '\n') {
      debuglookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOL");
      skip(lexer);
      if (lexer->lookahead == '0') {
        debuglookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOF");
        return false;
      }
      if (lexer->lookahead == '\n') {
        debuglookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOL, EOL");
        lexer->mark_end(lexer);
        skip(lexer);
        return true;
      } else {
        skip(lexer);
        return false;
      }
    } else {
      advance(lexer);
    }
  }
  return false;
}


static bool scan_text(TSLexer *lexer) {
  // Scan forward to form a text token, stopping before consuming:
  // - a special character
  // - EOF
  // - a sequence of two EOLs
  // FIXME the EOLs should be system agnostic.
  
  lexer->result_symbol = TEXT;
  lexer->mark_end(lexer);
  
  debuglookahead(lexer->lookahead, "Scanning for TEXT");
  
  while (lexer->lookahead != 0) {

    debuglookahead(lexer->lookahead, "TEXT - In scan loop");

    if (isctxspecial(lexer->lookahead)) {
      lexer->mark_end(lexer); 
      return true;
    }
 
    if (lexer->lookahead == '\n') {
      // ???: will setting this to skip break the token?
      advance(lexer);
      
      if (lexer->lookahead != 0) {
        lexer->mark_end(lexer);
        return true;
      }
      
      if (lexer->lookahead == '\n') {
        return true;
      }
      
      if (isctxspecial(lexer->lookahead)) {
        lexer->mark_end(lexer); 
        return true;
      }
      
    } 
    lexer->mark_end(lexer);
    advance(lexer);
  }
  lexer->mark_end(lexer);
  return true;
}


bool tree_sitter_context_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {

  UNUSED(payload);

  if (valid_symbols[COMMAND_STOP]) {
    return scan_command_stop(lexer);
  }
  
  if (valid_symbols[PARAGRAPH_MARK]) {
    return scan_paragraph_mark(lexer);
  }
  
  if (valid_symbols[TEXT]) {
    return scan_text(lexer);
  }
  
  return false;
  
}
