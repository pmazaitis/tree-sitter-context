#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHstarttext = 1,
  anon_sym_BSLASHstartcomponent = 2,
  anon_sym_BSLASHstoptext = 3,
  anon_sym_BSLASHstopcomponent = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_POUND = 6,
  anon_sym_DOLLAR = 7,
  anon_sym_PERCENT = 8,
  anon_sym_AMP = 9,
  anon_sym_CARET = 10,
  anon_sym__ = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_PIPE = 14,
  anon_sym_TILDE = 15,
  anon_sym_BSLASH = 16,
  anon_sym_BSLASHegroup = 17,
  anon_sym_BSLASHbgroup = 18,
  aux_sym_math_text_token1 = 19,
  aux_sym_command_token1 = 20,
  sym_command_name = 21,
  anon_sym_LBRACK = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACK = 24,
  anon_sym_EQ = 25,
  sym_opkey = 26,
  sym_optext = 27,
  sym_text = 28,
  anon_sym_LF = 29,
  sym_document = 30,
  sym__content = 31,
  sym_main_start = 32,
  sym_main_stop = 33,
  sym_comment = 34,
  sym_escapechar = 35,
  sym_escaped = 36,
  sym_brace_group = 37,
  sym_math_group = 38,
  sym__math_content = 39,
  sym_math_text = 40,
  sym_inline_math = 41,
  sym_command = 42,
  sym_optionblock = 43,
  sym__options = 44,
  sym_opval = 45,
  sym__opcontent = 46,
  sym__newline = 47,
  aux_sym_document_repeat1 = 48,
  aux_sym_math_group_repeat1 = 49,
  aux_sym_command_repeat1 = 50,
  aux_sym_optionblock_repeat1 = 51,
  aux_sym_opval_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHstarttext] = "\\starttext",
  [anon_sym_BSLASHstartcomponent] = "\\startcomponent",
  [anon_sym_BSLASHstoptext] = "\\stoptext",
  [anon_sym_BSLASHstopcomponent] = "\\stopcomponent",
  [aux_sym_comment_token1] = "comment_token1",
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
  [anon_sym_BSLASHegroup] = "\\egroup",
  [anon_sym_BSLASHbgroup] = "\\bgroup",
  [aux_sym_math_text_token1] = "math_text_token1",
  [aux_sym_command_token1] = "command_token1",
  [sym_command_name] = "command_name",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_opkey] = "opkey",
  [sym_optext] = "optext",
  [sym_text] = "text",
  [anon_sym_LF] = "\n",
  [sym_document] = "document",
  [sym__content] = "_content",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
  [sym_comment] = "comment",
  [sym_escapechar] = "escapechar",
  [sym_escaped] = "escaped",
  [sym_brace_group] = "brace_group",
  [sym_math_group] = "math_group",
  [sym__math_content] = "_math_content",
  [sym_math_text] = "math_text",
  [sym_inline_math] = "inline_math",
  [sym_command] = "command",
  [sym_optionblock] = "optionblock",
  [sym__options] = "_options",
  [sym_opval] = "opval",
  [sym__opcontent] = "_opcontent",
  [sym__newline] = "_newline",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_math_group_repeat1] = "math_group_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_optionblock_repeat1] = "optionblock_repeat1",
  [aux_sym_opval_repeat1] = "opval_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHstarttext] = anon_sym_BSLASHstarttext,
  [anon_sym_BSLASHstartcomponent] = anon_sym_BSLASHstartcomponent,
  [anon_sym_BSLASHstoptext] = anon_sym_BSLASHstoptext,
  [anon_sym_BSLASHstopcomponent] = anon_sym_BSLASHstopcomponent,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [anon_sym_BSLASHegroup] = anon_sym_BSLASHegroup,
  [anon_sym_BSLASHbgroup] = anon_sym_BSLASHbgroup,
  [aux_sym_math_text_token1] = aux_sym_math_text_token1,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [sym_command_name] = sym_command_name,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_opkey] = sym_opkey,
  [sym_optext] = sym_optext,
  [sym_text] = sym_text,
  [anon_sym_LF] = anon_sym_LF,
  [sym_document] = sym_document,
  [sym__content] = sym__content,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
  [sym_comment] = sym_comment,
  [sym_escapechar] = sym_escapechar,
  [sym_escaped] = sym_escaped,
  [sym_brace_group] = sym_brace_group,
  [sym_math_group] = sym_math_group,
  [sym__math_content] = sym__math_content,
  [sym_math_text] = sym_math_text,
  [sym_inline_math] = sym_inline_math,
  [sym_command] = sym_command,
  [sym_optionblock] = sym_optionblock,
  [sym__options] = sym__options,
  [sym_opval] = sym_opval,
  [sym__opcontent] = sym__opcontent,
  [sym__newline] = sym__newline,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_math_group_repeat1] = aux_sym_math_group_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_optionblock_repeat1] = aux_sym_optionblock_repeat1,
  [aux_sym_opval_repeat1] = aux_sym_opval_repeat1,
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
  [aux_sym_comment_token1] = {
    .visible = false,
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
  [anon_sym_BSLASHegroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHbgroup] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_math_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_opkey] = {
    .visible = true,
    .named = true,
  },
  [sym_optext] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_escapechar] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym__math_content] = {
    .visible = false,
    .named = true,
  },
  [sym_math_text] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_optionblock] = {
    .visible = true,
    .named = true,
  },
  [sym__options] = {
    .visible = false,
    .named = true,
  },
  [sym_opval] = {
    .visible = true,
    .named = true,
  },
  [sym__opcontent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_optionblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_opval_repeat1] = {
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
      if (eof) ADVANCE(51);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(92);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(89);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(59);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(61);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '^') ADVANCE(63);
      if (lookahead == '_') ADVANCE(64);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(80);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 48:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(92);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '$') ADVANCE(60);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(92);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(58);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(17);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_math_text_token1);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_math_text_token1);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_math_text_token1);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_optext);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 49},
  [10] = {.lex_state = 49},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 50},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 49},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 49},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 49},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 49},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 9},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 9},
  [64] = {.lex_state = 9},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 9},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASHstarttext] = ACTIONS(1),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(1),
    [anon_sym_BSLASHstoptext] = ACTIONS(1),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(1),
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
    [anon_sym_BSLASHegroup] = ACTIONS(1),
    [anon_sym_BSLASHbgroup] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(119),
    [sym__content] = STATE(10),
    [sym_main_start] = STATE(10),
    [sym_main_stop] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_escaped] = STATE(10),
    [sym_brace_group] = STATE(10),
    [sym_inline_math] = STATE(10),
    [sym_command] = STATE(10),
    [sym__newline] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [anon_sym_BSLASHstarttext] = ACTIONS(3),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(3),
    [anon_sym_BSLASHstoptext] = ACTIONS(5),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_BSLASHbgroup] = ACTIONS(11),
    [sym_text] = ACTIONS(15),
    [anon_sym_LF] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(21), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(19), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(25), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(31), 2,
      sym_text,
      anon_sym_LF,
    STATE(4), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [42] = 9,
    ACTIONS(21), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(19), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(25), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(35), 2,
      sym_text,
      anon_sym_LF,
    STATE(7), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [84] = 9,
    ACTIONS(21), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(19), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(25), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(37), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(39), 2,
      sym_text,
      anon_sym_LF,
    STATE(6), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [126] = 9,
    ACTIONS(21), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(19), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(25), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(39), 2,
      sym_text,
      anon_sym_LF,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(6), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [168] = 9,
    ACTIONS(49), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(46), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(55), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(58), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(63), 2,
      sym_text,
      anon_sym_LF,
    STATE(6), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [210] = 9,
    ACTIONS(21), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(19), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(25), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(39), 2,
      sym_text,
      anon_sym_LF,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(6), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [252] = 9,
    ACTIONS(21), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_DOLLAR,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(19), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(25), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(70), 2,
      sym_text,
      anon_sym_LF,
    STATE(5), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [294] = 9,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(74), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(77), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(86), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(92), 2,
      sym_text,
      anon_sym_LF,
    STATE(9), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [335] = 9,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(5), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(97), 2,
      sym_text,
      anon_sym_LF,
    STATE(9), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [376] = 4,
    ACTIONS(101), 1,
      aux_sym_command_token1,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    STATE(11), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(99), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [402] = 4,
    ACTIONS(109), 1,
      aux_sym_command_token1,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(107), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [428] = 4,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(115), 1,
      aux_sym_command_token1,
    STATE(11), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(113), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [454] = 8,
    ACTIONS(117), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      sym_optext,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(114), 1,
      sym_opval,
    ACTIONS(119), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(21), 7,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__opcontent,
      sym__newline,
      aux_sym_opval_repeat1,
  [487] = 5,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      aux_sym_command_token1,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    STATE(17), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(107), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [514] = 5,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      aux_sym_command_token1,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(16), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(99), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [541] = 5,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      aux_sym_command_token1,
    STATE(16), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(113), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [568] = 1,
    ACTIONS(147), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [586] = 1,
    ACTIONS(149), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [604] = 7,
    ACTIONS(151), 1,
      aux_sym_comment_token1,
    ACTIONS(157), 1,
      anon_sym_BSLASH,
    ACTIONS(162), 1,
      sym_optext,
    ACTIONS(165), 1,
      anon_sym_LF,
    ACTIONS(154), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(20), 7,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__opcontent,
      sym__newline,
      aux_sym_opval_repeat1,
  [634] = 7,
    ACTIONS(117), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      sym_optext,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(119), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(20), 7,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__opcontent,
      sym__newline,
      aux_sym_opval_repeat1,
  [664] = 1,
    ACTIONS(174), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [682] = 1,
    ACTIONS(176), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [700] = 3,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_optionblock,
    ACTIONS(113), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [722] = 1,
    ACTIONS(99), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [740] = 3,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_optionblock,
    ACTIONS(178), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [762] = 2,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [781] = 2,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [800] = 4,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_optionblock,
    ACTIONS(178), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [823] = 4,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_optionblock,
    ACTIONS(113), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [846] = 2,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [865] = 2,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [884] = 2,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [903] = 3,
    ACTIONS(192), 1,
      sym_command_name,
    STATE(75), 1,
      sym_escapechar,
    ACTIONS(190), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [923] = 1,
    ACTIONS(194), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [939] = 1,
    ACTIONS(196), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [955] = 1,
    ACTIONS(198), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [971] = 1,
    ACTIONS(200), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [987] = 3,
    ACTIONS(204), 1,
      sym_command_name,
    STATE(41), 1,
      sym_escapechar,
    ACTIONS(202), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [1007] = 3,
    ACTIONS(208), 1,
      sym_command_name,
    STATE(53), 1,
      sym_escapechar,
    ACTIONS(206), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [1027] = 1,
    ACTIONS(210), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1043] = 1,
    ACTIONS(212), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1059] = 1,
    ACTIONS(214), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1075] = 1,
    ACTIONS(216), 13,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1091] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1108] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1125] = 2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(212), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1142] = 4,
    ACTIONS(224), 1,
      aux_sym_command_token1,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    STATE(48), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(99), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1163] = 4,
    ACTIONS(230), 1,
      aux_sym_command_token1,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(55), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(107), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1184] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1201] = 2,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1218] = 2,
    STATE(80), 1,
      sym_escapechar,
    ACTIONS(238), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [1235] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1252] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1269] = 4,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    ACTIONS(244), 1,
      aux_sym_command_token1,
    STATE(48), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(113), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1290] = 2,
    STATE(81), 1,
      sym_escapechar,
    ACTIONS(246), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [1307] = 2,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_text,
      anon_sym_LF,
  [1324] = 6,
    ACTIONS(250), 1,
      aux_sym_comment_token1,
    ACTIONS(253), 1,
      anon_sym_DOLLAR,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_BSLASH,
    ACTIONS(261), 1,
      aux_sym_math_text_token1,
    STATE(58), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1348] = 6,
    ACTIONS(264), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_math_text_token1,
    STATE(65), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1372] = 6,
    ACTIONS(264), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_math_text_token1,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(65), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1396] = 6,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(278), 1,
      anon_sym_DOLLAR,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      aux_sym_math_text_token1,
    STATE(58), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1420] = 6,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      aux_sym_math_text_token1,
    ACTIONS(286), 1,
      anon_sym_DOLLAR,
    STATE(58), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1444] = 6,
    ACTIONS(264), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_math_text_token1,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(60), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1468] = 6,
    ACTIONS(264), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_math_text_token1,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(59), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1492] = 6,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(292), 1,
      aux_sym_comment_token1,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      anon_sym_BSLASH,
    ACTIONS(301), 1,
      aux_sym_math_text_token1,
    STATE(65), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1516] = 1,
    ACTIONS(174), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1529] = 4,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_optionblock,
    ACTIONS(113), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1548] = 5,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      aux_sym_math_text_token1,
    STATE(61), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1569] = 1,
    ACTIONS(99), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1582] = 5,
    ACTIONS(276), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      aux_sym_math_text_token1,
    STATE(62), 6,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      aux_sym_math_group_repeat1,
  [1603] = 1,
    ACTIONS(147), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1616] = 4,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_optionblock,
    ACTIONS(178), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1635] = 1,
    ACTIONS(149), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1648] = 1,
    ACTIONS(176), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1661] = 2,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(210), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1674] = 2,
    ACTIONS(248), 1,
      anon_sym_LF,
    ACTIONS(200), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1687] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(216), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1700] = 2,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(194), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1713] = 2,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(196), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1726] = 1,
    ACTIONS(210), 5,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1734] = 1,
    ACTIONS(210), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1742] = 1,
    ACTIONS(304), 5,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1750] = 1,
    ACTIONS(306), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1758] = 1,
    ACTIONS(194), 5,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1766] = 1,
    ACTIONS(304), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1774] = 1,
    ACTIONS(216), 5,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1782] = 1,
    ACTIONS(306), 5,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1790] = 1,
    ACTIONS(308), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1798] = 1,
    ACTIONS(308), 5,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1806] = 1,
    ACTIONS(216), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1814] = 1,
    ACTIONS(194), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
  [1822] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    ACTIONS(314), 1,
      sym_opkey,
    STATE(102), 1,
      sym__options,
  [1835] = 4,
    ACTIONS(314), 1,
      sym_opkey,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym__options,
  [1848] = 4,
    ACTIONS(320), 1,
      aux_sym_command_token1,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    ACTIONS(324), 1,
      sym_opkey,
    STATE(110), 1,
      sym__options,
  [1861] = 4,
    ACTIONS(320), 1,
      aux_sym_command_token1,
    ACTIONS(324), 1,
      sym_opkey,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__options,
  [1874] = 4,
    ACTIONS(314), 1,
      sym_opkey,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__options,
  [1887] = 4,
    ACTIONS(320), 1,
      aux_sym_command_token1,
    ACTIONS(324), 1,
      sym_opkey,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__options,
  [1900] = 4,
    ACTIONS(320), 1,
      aux_sym_command_token1,
    ACTIONS(324), 1,
      sym_opkey,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__options,
  [1913] = 4,
    ACTIONS(320), 1,
      aux_sym_command_token1,
    ACTIONS(324), 1,
      sym_opkey,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__options,
  [1926] = 4,
    ACTIONS(320), 1,
      aux_sym_command_token1,
    ACTIONS(324), 1,
      sym_opkey,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__options,
  [1939] = 3,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    ACTIONS(342), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_optionblock_repeat1,
  [1949] = 3,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_optionblock_repeat1,
  [1959] = 2,
    ACTIONS(350), 1,
      anon_sym_EQ,
    ACTIONS(348), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1967] = 3,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym_optionblock_repeat1,
  [1977] = 3,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_optionblock_repeat1,
  [1987] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_optionblock_repeat1,
  [1997] = 3,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_optionblock_repeat1,
  [2007] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_optionblock_repeat1,
  [2017] = 3,
    ACTIONS(320), 1,
      aux_sym_command_token1,
    ACTIONS(324), 1,
      sym_opkey,
    STATE(110), 1,
      sym__options,
  [2027] = 1,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2032] = 2,
    ACTIONS(373), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_optionblock,
  [2039] = 1,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2044] = 2,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_optionblock,
  [2051] = 1,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2056] = 2,
    ACTIONS(381), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_optionblock,
  [2063] = 2,
    ACTIONS(314), 1,
      sym_opkey,
    STATE(112), 1,
      sym__options,
  [2070] = 1,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
  [2074] = 1,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
  [2078] = 1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [2082] = 1,
    ACTIONS(367), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 335,
  [SMALL_STATE(11)] = 376,
  [SMALL_STATE(12)] = 402,
  [SMALL_STATE(13)] = 428,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 487,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 541,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 586,
  [SMALL_STATE(20)] = 604,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 664,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 700,
  [SMALL_STATE(25)] = 722,
  [SMALL_STATE(26)] = 740,
  [SMALL_STATE(27)] = 762,
  [SMALL_STATE(28)] = 781,
  [SMALL_STATE(29)] = 800,
  [SMALL_STATE(30)] = 823,
  [SMALL_STATE(31)] = 846,
  [SMALL_STATE(32)] = 865,
  [SMALL_STATE(33)] = 884,
  [SMALL_STATE(34)] = 903,
  [SMALL_STATE(35)] = 923,
  [SMALL_STATE(36)] = 939,
  [SMALL_STATE(37)] = 955,
  [SMALL_STATE(38)] = 971,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 1007,
  [SMALL_STATE(41)] = 1027,
  [SMALL_STATE(42)] = 1043,
  [SMALL_STATE(43)] = 1059,
  [SMALL_STATE(44)] = 1075,
  [SMALL_STATE(45)] = 1091,
  [SMALL_STATE(46)] = 1108,
  [SMALL_STATE(47)] = 1125,
  [SMALL_STATE(48)] = 1142,
  [SMALL_STATE(49)] = 1163,
  [SMALL_STATE(50)] = 1184,
  [SMALL_STATE(51)] = 1201,
  [SMALL_STATE(52)] = 1218,
  [SMALL_STATE(53)] = 1235,
  [SMALL_STATE(54)] = 1252,
  [SMALL_STATE(55)] = 1269,
  [SMALL_STATE(56)] = 1290,
  [SMALL_STATE(57)] = 1307,
  [SMALL_STATE(58)] = 1324,
  [SMALL_STATE(59)] = 1348,
  [SMALL_STATE(60)] = 1372,
  [SMALL_STATE(61)] = 1396,
  [SMALL_STATE(62)] = 1420,
  [SMALL_STATE(63)] = 1444,
  [SMALL_STATE(64)] = 1468,
  [SMALL_STATE(65)] = 1492,
  [SMALL_STATE(66)] = 1516,
  [SMALL_STATE(67)] = 1529,
  [SMALL_STATE(68)] = 1548,
  [SMALL_STATE(69)] = 1569,
  [SMALL_STATE(70)] = 1582,
  [SMALL_STATE(71)] = 1603,
  [SMALL_STATE(72)] = 1616,
  [SMALL_STATE(73)] = 1635,
  [SMALL_STATE(74)] = 1648,
  [SMALL_STATE(75)] = 1661,
  [SMALL_STATE(76)] = 1674,
  [SMALL_STATE(77)] = 1687,
  [SMALL_STATE(78)] = 1700,
  [SMALL_STATE(79)] = 1713,
  [SMALL_STATE(80)] = 1726,
  [SMALL_STATE(81)] = 1734,
  [SMALL_STATE(82)] = 1742,
  [SMALL_STATE(83)] = 1750,
  [SMALL_STATE(84)] = 1758,
  [SMALL_STATE(85)] = 1766,
  [SMALL_STATE(86)] = 1774,
  [SMALL_STATE(87)] = 1782,
  [SMALL_STATE(88)] = 1790,
  [SMALL_STATE(89)] = 1798,
  [SMALL_STATE(90)] = 1806,
  [SMALL_STATE(91)] = 1814,
  [SMALL_STATE(92)] = 1822,
  [SMALL_STATE(93)] = 1835,
  [SMALL_STATE(94)] = 1848,
  [SMALL_STATE(95)] = 1861,
  [SMALL_STATE(96)] = 1874,
  [SMALL_STATE(97)] = 1887,
  [SMALL_STATE(98)] = 1900,
  [SMALL_STATE(99)] = 1913,
  [SMALL_STATE(100)] = 1926,
  [SMALL_STATE(101)] = 1939,
  [SMALL_STATE(102)] = 1949,
  [SMALL_STATE(103)] = 1959,
  [SMALL_STATE(104)] = 1967,
  [SMALL_STATE(105)] = 1977,
  [SMALL_STATE(106)] = 1987,
  [SMALL_STATE(107)] = 1997,
  [SMALL_STATE(108)] = 2007,
  [SMALL_STATE(109)] = 2017,
  [SMALL_STATE(110)] = 2027,
  [SMALL_STATE(111)] = 2032,
  [SMALL_STATE(112)] = 2039,
  [SMALL_STATE(113)] = 2044,
  [SMALL_STATE(114)] = 2051,
  [SMALL_STATE(115)] = 2056,
  [SMALL_STATE(116)] = 2063,
  [SMALL_STATE(117)] = 2070,
  [SMALL_STATE(118)] = 2074,
  [SMALL_STATE(119)] = 2078,
  [SMALL_STATE(120)] = 2082,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(111),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(93),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(113),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(92),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 3),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(77),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(8),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(34),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(20),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(20),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opval, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(115),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(96),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(86),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(63),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(52),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(82),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(90),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(64),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(56),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(85),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_text, 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2), SHIFT_REPEAT(109),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [383] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ConTeXt(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
