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


static bool scan_command_stop(TSLexer *lexer) {
  
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

static void debuglookahead(char c, char* msg) {
  printf("#### %s\n", msg);
  printf("#### [Character under test: %c ]", c);
  fflush(stdout);
}

// FIXME this should be two or more consecutive EOLs  
static bool scan_paragraph_mark(TSLexer *lexer) {
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


static bool scan_text(TSLexer *lexer) {
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
