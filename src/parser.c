#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHstarttext = 1,
  anon_sym_BSLASHstartcomponent = 2,
  anon_sym_BSLASHstoptext = 3,
  anon_sym_BSLASHstopcomponent = 4,
  sym_text = 5,
  anon_sym_LF = 6,
  anon_sym_CR = 7,
  anon_sym_CR_LF = 8,
  anon_sym_POUND = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_PERCENT = 11,
  anon_sym_AMP = 12,
  anon_sym_CARET = 13,
  anon_sym__ = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_PIPE = 17,
  anon_sym_TILDE = 18,
  anon_sym_BSLASH = 19,
  anon_sym_BSLASHbgroup = 20,
  anon_sym_BSLASHegroup = 21,
  sym_command_block_start = 22,
  sym_command_block_stop = 23,
  anon_sym_COMMA = 24,
  anon_sym_EQ = 25,
  anon_sym_title = 26,
  sym_command_stop = 27,
  sym_paragraph_stop = 28,
  sym_document = 29,
  sym__document_content = 30,
  sym_main_start = 31,
  sym_main_stop = 32,
  sym_paragraph = 33,
  sym__paragraph_content = 34,
  sym__end_of_line = 35,
  sym_brace_group_start = 36,
  sym_brace_group_stop = 37,
  sym__brace_group_content = 38,
  sym_brace_group = 39,
  aux_sym_document_repeat1 = 40,
  aux_sym_paragraph_repeat1 = 41,
  aux_sym_brace_group_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHstarttext] = "\\starttext",
  [anon_sym_BSLASHstartcomponent] = "\\startcomponent",
  [anon_sym_BSLASHstoptext] = "\\stoptext",
  [anon_sym_BSLASHstopcomponent] = "\\stopcomponent",
  [sym_text] = "text",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_BSLASHbgroup] = "\\bgroup",
  [anon_sym_BSLASHegroup] = "\\egroup",
  [sym_command_block_start] = "command_block_start",
  [sym_command_block_stop] = "command_block_stop",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym_title] = "title",
  [sym_command_stop] = "command_stop",
  [sym_paragraph_stop] = "paragraph_stop",
  [sym_document] = "document",
  [sym__document_content] = "_document_content",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
  [sym_paragraph] = "paragraph",
  [sym__paragraph_content] = "_paragraph_content",
  [sym__end_of_line] = "_end_of_line",
  [sym_brace_group_start] = "brace_group_start",
  [sym_brace_group_stop] = "brace_group_stop",
  [sym__brace_group_content] = "_brace_group_content",
  [sym_brace_group] = "brace_group",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_brace_group_repeat1] = "brace_group_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHstarttext] = anon_sym_BSLASHstarttext,
  [anon_sym_BSLASHstartcomponent] = anon_sym_BSLASHstartcomponent,
  [anon_sym_BSLASHstoptext] = anon_sym_BSLASHstoptext,
  [anon_sym_BSLASHstopcomponent] = anon_sym_BSLASHstopcomponent,
  [sym_text] = sym_text,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_BSLASHbgroup] = anon_sym_BSLASHbgroup,
  [anon_sym_BSLASHegroup] = anon_sym_BSLASHegroup,
  [sym_command_block_start] = sym_command_block_start,
  [sym_command_block_stop] = sym_command_block_stop,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_title] = anon_sym_title,
  [sym_command_stop] = sym_command_stop,
  [sym_paragraph_stop] = sym_paragraph_stop,
  [sym_document] = sym_document,
  [sym__document_content] = sym__document_content,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
  [sym_paragraph] = sym_paragraph,
  [sym__paragraph_content] = sym__paragraph_content,
  [sym__end_of_line] = sym__end_of_line,
  [sym_brace_group_start] = sym_brace_group_start,
  [sym_brace_group_stop] = sym_brace_group_stop,
  [sym__brace_group_content] = sym__brace_group_content,
  [sym_brace_group] = sym_brace_group,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_brace_group_repeat1] = aux_sym_brace_group_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHstarttext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartcomponent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstoptext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopcomponent] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHbgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHegroup] = {
    .visible = true,
    .named = false,
  },
  [sym_command_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_command_block_stop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [sym_command_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__document_content] = {
    .visible = false,
    .named = true,
  },
  [sym_main_start] = {
    .visible = true,
    .named = true,
  },
  [sym_main_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph] = {
    .visible = true,
    .named = true,
  },
  [sym__paragraph_content] = {
    .visible = false,
    .named = true,
  },
  [sym__end_of_line] = {
    .visible = false,
    .named = true,
  },
  [sym_brace_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group_stop] = {
    .visible = true,
    .named = true,
  },
  [sym__brace_group_content] = {
    .visible = false,
    .named = true,
  },
  [sym_brace_group] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_brace_group_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '#') ADVANCE(67);
      if (lookahead == '$') ADVANCE(68);
      if (lookahead == '%') ADVANCE(69);
      if (lookahead == '&') ADVANCE(70);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '^') ADVANCE(71);
      if (lookahead == '_') ADVANCE(72);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(74);
      if (lookahead == '~') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '{') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '}') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\r') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\r') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '{') ADVANCE(62);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 4, .external_lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3, .external_lex_state = 2},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 3, .external_lex_state = 2},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4, .external_lex_state = 2},
  [20] = {.lex_state = 4, .external_lex_state = 2},
  [21] = {.lex_state = 4, .external_lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3, .external_lex_state = 2},
  [25] = {.lex_state = 0},
};

enum {
  ts_external_token_command_stop = 0,
  ts_external_token_paragraph_stop = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_command_stop] = sym_command_stop,
  [ts_external_token_paragraph_stop] = sym_paragraph_stop,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_command_stop] = true,
    [ts_external_token_paragraph_stop] = true,
  },
  [2] = {
    [ts_external_token_paragraph_stop] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_command_block_start] = ACTIONS(1),
    [sym_command_block_stop] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [sym_command_stop] = ACTIONS(1),
    [sym_paragraph_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(25),
    [sym__document_content] = STATE(2),
    [sym_main_start] = STATE(2),
    [sym_main_stop] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__paragraph_content] = STATE(13),
    [sym_brace_group_start] = STATE(5),
    [sym_brace_group] = STATE(10),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASHstarttext] = ACTIONS(5),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(5),
    [anon_sym_BSLASHstoptext] = ACTIONS(7),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_BSLASHbgroup] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(10), 1,
      sym_brace_group,
    ACTIONS(5), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(7), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(13), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(3), 5,
      sym__document_content,
      sym_main_start,
      sym_main_stop,
      sym_paragraph,
      aux_sym_document_repeat1,
  [36] = 9,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_text,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(10), 1,
      sym_brace_group,
    ACTIONS(17), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(20), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(26), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(13), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(3), 5,
      sym__document_content,
      sym_main_start,
      sym_main_stop,
      sym_paragraph,
      aux_sym_document_repeat1,
  [72] = 7,
    ACTIONS(29), 1,
      sym_text,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(8), 1,
      sym_brace_group,
    STATE(11), 1,
      sym_brace_group_stop,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(6), 2,
      sym__brace_group_content,
      aux_sym_brace_group_repeat1,
  [97] = 7,
    ACTIONS(29), 1,
      sym_text,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(8), 1,
      sym_brace_group,
    STATE(20), 1,
      sym_brace_group_stop,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(7), 2,
      sym__brace_group_content,
      aux_sym_brace_group_repeat1,
  [122] = 7,
    ACTIONS(29), 1,
      sym_text,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(8), 1,
      sym_brace_group,
    STATE(12), 1,
      sym_brace_group_stop,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(9), 2,
      sym__brace_group_content,
      aux_sym_brace_group_repeat1,
  [147] = 7,
    ACTIONS(29), 1,
      sym_text,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(8), 1,
      sym_brace_group,
    STATE(21), 1,
      sym_brace_group_stop,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(9), 2,
      sym__brace_group_content,
      aux_sym_brace_group_repeat1,
  [172] = 3,
    STATE(22), 1,
      sym__end_of_line,
    ACTIONS(37), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(35), 5,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [188] = 6,
    ACTIONS(39), 1,
      sym_text,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(8), 1,
      sym_brace_group,
    ACTIONS(42), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(9), 2,
      sym__brace_group_content,
      aux_sym_brace_group_repeat1,
  [210] = 4,
    ACTIONS(51), 1,
      sym_paragraph_stop,
    STATE(24), 1,
      sym__end_of_line,
    ACTIONS(47), 3,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(49), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [227] = 1,
    ACTIONS(53), 8,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [238] = 1,
    ACTIONS(55), 8,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [249] = 6,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(57), 1,
      sym_paragraph_stop,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(10), 1,
      sym_brace_group,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(16), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
  [270] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 7,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
  [283] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 7,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
  [296] = 6,
    ACTIONS(67), 1,
      sym_text,
    ACTIONS(73), 1,
      sym_paragraph_stop,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(10), 1,
      sym_brace_group,
    ACTIONS(70), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(16), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
  [317] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 7,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
  [330] = 1,
    ACTIONS(79), 8,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [341] = 2,
    ACTIONS(81), 1,
      sym_paragraph_stop,
    ACTIONS(79), 6,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
  [353] = 2,
    ACTIONS(83), 1,
      sym_paragraph_stop,
    ACTIONS(53), 6,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
  [365] = 2,
    ACTIONS(85), 1,
      sym_paragraph_stop,
    ACTIONS(55), 6,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
  [377] = 1,
    ACTIONS(87), 5,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [385] = 1,
    ACTIONS(89), 5,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [393] = 2,
    ACTIONS(93), 1,
      sym_paragraph_stop,
    ACTIONS(91), 3,
      sym_text,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
  [402] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 147,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 227,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 249,
  [SMALL_STATE(14)] = 270,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 330,
  [SMALL_STATE(19)] = 341,
  [SMALL_STATE(20)] = 353,
  [SMALL_STATE(21)] = 365,
  [SMALL_STATE(22)] = 377,
  [SMALL_STATE(23)] = 385,
  [SMALL_STATE(24)] = 393,
  [SMALL_STATE(25)] = 402,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__brace_group_content, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(23),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(10),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__brace_group_content, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_context_external_scanner_create(void);
void tree_sitter_context_external_scanner_destroy(void *);
bool tree_sitter_context_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_context_external_scanner_serialize(void *, char *);
void tree_sitter_context_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_context(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_context_external_scanner_create,
      tree_sitter_context_external_scanner_destroy,
      tree_sitter_context_external_scanner_scan,
      tree_sitter_context_external_scanner_serialize,
      tree_sitter_context_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
