#include <tree_sitter/parser.h>
#include <wctype.h>

#define UNUSED(x) (void)(x)

enum TokenType {
  COMMAND_STOP,
  PARAGRAPH_STOP
};

void *tree_sitter_context_external_scanner_create() { return NULL; }
void tree_sitter_context_external_scanner_destroy(void *p) {UNUSED(p);}
void tree_sitter_jcontext_external_scanner_reset(void *p) {UNUSED(p);}
unsigned tree_sitter_context_external_scanner_serialize(void *p, char *buffer) { UNUSED(p); UNUSED(buffer); return 0; }
void tree_sitter_context_external_scanner_deserialize(void *p, const char *b, unsigned n) {UNUSED(p); UNUSED(b); UNUSED(n);}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }


static bool scan_command_stop(TSLexer *lexer) {

  /*
  Conditions for a valid COMMAND_STOP token:
  
  - We encounter two EOLs
  - ...

  */
  
  lexer->result_symbol = COMMAND_STOP;
  lexer->mark_end(lexer);

  while (lexer->lookahead != 0) {
  
    // We have the start of an option block; still in command
    if (lexer->lookahead == '[') return false;
    // If we find the stop of an option block, the closing option block ends the command
    if (lexer->lookahead == ']') {lexer->mark_end(lexer); return true;}
    // We have a comment; this is not necessarily a stop
    if (lexer->lookahead == '%') return false;
    // We enter or leave a scope; the command is over
    if (lexer->lookahead == '{') {lexer->mark_end(lexer); return true;}
    if (lexer->lookahead == '}') {lexer->mark_end(lexer); return true;}
    // We find a numeric, the command is over
    if (iswdigit(lexer->lookahead)) {lexer->mark_end(lexer); return true;}
    
      
    if (lexer->lookahead == '\n') {
      advance(lexer);
      if (lexer->lookahead == '[') return false;
      if (lexer->lookahead == ']') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '%') return false;
      if (lexer->lookahead == '{') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '}') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '\n') return true;
      advance(lexer);
      continue;
    } 
  
    
    if (iswspace(lexer->lookahead)) {
        skip(lexer);
        continue;
    }
  
    advance(lexer);
    
  }
  
  // lexer->mark_end(lexer);
  return true;
}

static bool scan_paragraph_stop(TSLexer *lexer) {
  lexer->result_symbol = PARAGRAPH_STOP;
  lexer->mark_end(lexer);
  
  while (lexer->lookahead != 0) {
    if (lexer->lookahead == '\n') {
      skip(lexer);
      if (lexer->lookahead == '\n') {
        lexer->mark_end(lexer);
        skip(lexer);
        return true;
      } else {
        skip(lexer);
        return false;
      }
    } else {
      advance(lexer);
      return false;
    }
  }
  lexer->mark_end(lexer);
  return true;
}

bool tree_sitter_context_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {

  UNUSED(payload);

  if (valid_symbols[COMMAND_STOP]) {
    return scan_command_stop(lexer);
  }
  
  if (valid_symbols[PARAGRAPH_STOP]) {
    return scan_paragraph_stop(lexer);
  }
  
  return false;
  
}
