#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  COMMAND_STOP
};

void *tree_sitter_context_external_scanner_create() { return NULL; }
void tree_sitter_context_external_scanner_destroy(void *p) {}
void tree_sitter_jcontext_external_scanner_reset(void *p) {}
unsigned tree_sitter_context_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_context_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }


static bool scan_command_stop(TSLexer *lexer) {

  /*
  Conditions for a valid COMMAND_STOP token:
  
  - We encounter two EOLs
  - We encounter something other than a open square bracket ("[")

  */
  
  lexer->result_symbol = COMMAND_STOP;
  lexer->mark_end(lexer);
  
  while (iswspace(lexer->lookahead)) {
  
    
  
    if (lexer->lookahead == '\n') {
      advance(lexer);
      if (lexer->lookahead == '[') return false;
      if (lexer->lookahead == '\n') return true;
    }
    skip(lexer);
  }
  
  if (lexer->lookahead == '[') return false;
  
  return true;
}

bool tree_sitter_context_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {

  if (valid_symbols[COMMAND_STOP]) {
    return scan_command_stop(lexer);
  }
  
  return false;
  
}
