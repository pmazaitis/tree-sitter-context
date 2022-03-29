#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
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
  sym_math_text = 19,
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
  sym_inline_math = 40,
  sym_command = 41,
  sym_optionblock = 42,
  sym__options = 43,
  sym_opval = 44,
  sym__opcontent = 45,
  sym__newline = 46,
  aux_sym_document_repeat1 = 47,
  aux_sym_math_group_repeat1 = 48,
  aux_sym_command_repeat1 = 49,
  aux_sym_optionblock_repeat1 = 50,
  aux_sym_opval_repeat1 = 51,
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
  [sym_math_text] = "math_text",
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
  [sym_math_text] = sym_math_text,
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
  [sym_math_text] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(50);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(88);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == ']') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(85);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(60);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '^') ADVANCE(62);
      if (lookahead == '_') ADVANCE(63);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '|') ADVANCE(66);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '~') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0) ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 48:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(88);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '$') ADVANCE(59);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(88);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(57);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(57);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(16);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(17);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(16);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_optext);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 48},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 49},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 48},
  [46] = {.lex_state = 48},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 48},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 48},
  [56] = {.lex_state = 48},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
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
    [sym_document] = STATE(108),
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
    STATE(3), 10,
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
    ACTIONS(39), 1,
      aux_sym_comment_token1,
    ACTIONS(42), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(36), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(45), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(48), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(53), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 10,
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
    ACTIONS(56), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(58), 2,
      sym_text,
      anon_sym_LF,
    STATE(2), 10,
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
    ACTIONS(31), 2,
      sym_text,
      anon_sym_LF,
    ACTIONS(60), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(3), 10,
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
    ACTIONS(31), 2,
      sym_text,
      anon_sym_LF,
    ACTIONS(62), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(3), 10,
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
    ACTIONS(64), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(66), 2,
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
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(12), 2,
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
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      aux_sym_command_token1,
    STATE(13), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(105), 13,
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
      aux_sym_command_token1,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(109), 13,
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
  [454] = 5,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_command_token1,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(17), 2,
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
  [481] = 8,
    ACTIONS(123), 1,
      aux_sym_comment_token1,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym_optext,
    ACTIONS(133), 1,
      anon_sym_LF,
    STATE(101), 1,
      sym_opval,
    ACTIONS(125), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(22), 7,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__opcontent,
      sym__newline,
      aux_sym_opval_repeat1,
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
    ACTIONS(109), 11,
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
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      aux_sym_command_token1,
    STATE(16), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(105), 11,
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
  [568] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_optionblock,
    ACTIONS(147), 13,
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
  [590] = 1,
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
  [608] = 1,
    ACTIONS(151), 15,
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
  [626] = 7,
    ACTIONS(153), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(164), 1,
      sym_optext,
    ACTIONS(167), 1,
      anon_sym_LF,
    ACTIONS(156), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(162), 2,
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
  [656] = 7,
    ACTIONS(123), 1,
      aux_sym_comment_token1,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(172), 1,
      sym_optext,
    ACTIONS(174), 1,
      anon_sym_LF,
    ACTIONS(125), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(170), 2,
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
  [686] = 1,
    ACTIONS(109), 15,
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
  [704] = 1,
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
  [722] = 1,
    ACTIONS(178), 15,
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
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_optionblock,
    ACTIONS(105), 13,
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
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 13,
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
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 13,
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
  [800] = 2,
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
  [819] = 2,
    ACTIONS(184), 1,
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
  [838] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_optionblock,
    ACTIONS(105), 11,
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
  [861] = 2,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 13,
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
  [880] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_optionblock,
    ACTIONS(147), 11,
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
  [903] = 3,
    ACTIONS(192), 1,
      sym_command_name,
    STATE(74), 1,
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
  [987] = 1,
    ACTIONS(202), 13,
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
  [1003] = 1,
    ACTIONS(204), 13,
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
  [1019] = 1,
    ACTIONS(206), 13,
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
  [1035] = 3,
    ACTIONS(210), 1,
      sym_command_name,
    STATE(36), 1,
      sym_escapechar,
    ACTIONS(208), 11,
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
  [1055] = 1,
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
  [1071] = 3,
    ACTIONS(216), 1,
      sym_command_name,
    STATE(51), 1,
      sym_escapechar,
    ACTIONS(214), 11,
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
  [1091] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 11,
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
  [1125] = 2,
    STATE(78), 1,
      sym_escapechar,
    ACTIONS(222), 11,
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
  [1142] = 4,
    ACTIONS(224), 1,
      aux_sym_command_token1,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(52), 2,
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
    ACTIONS(228), 1,
      aux_sym_command_token1,
    ACTIONS(231), 1,
      anon_sym_LBRACK,
    STATE(49), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(109), 8,
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
  [1201] = 2,
    ACTIONS(236), 1,
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
  [1218] = 4,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      aux_sym_command_token1,
    STATE(49), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(105), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1239] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 11,
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
  [1256] = 2,
    ACTIONS(242), 1,
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
  [1273] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 11,
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
  [1290] = 2,
    ACTIONS(246), 1,
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
  [1307] = 6,
    ACTIONS(248), 1,
      aux_sym_comment_token1,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BSLASH,
    ACTIONS(259), 1,
      sym_math_text,
    ACTIONS(251), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(57), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1331] = 4,
    ACTIONS(188), 1,
      anon_sym_LF,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_optionblock,
    ACTIONS(147), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1350] = 6,
    ACTIONS(262), 1,
      aux_sym_comment_token1,
    ACTIONS(264), 1,
      anon_sym_DOLLAR,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_BSLASH,
    ACTIONS(270), 1,
      sym_math_text,
    STATE(57), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1373] = 1,
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
  [1386] = 1,
    ACTIONS(109), 10,
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
  [1399] = 4,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(226), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_optionblock,
    ACTIONS(105), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1418] = 1,
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
  [1431] = 6,
    ACTIONS(262), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_BSLASH,
    ACTIONS(270), 1,
      sym_math_text,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(57), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1454] = 1,
    ACTIONS(178), 10,
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
  [1467] = 6,
    ACTIONS(262), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_BSLASH,
    ACTIONS(270), 1,
      sym_math_text,
    ACTIONS(274), 1,
      anon_sym_DOLLAR,
    STATE(57), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1490] = 1,
    ACTIONS(151), 10,
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
  [1503] = 6,
    ACTIONS(262), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_BSLASH,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    ACTIONS(278), 1,
      sym_math_text,
    STATE(64), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1526] = 5,
    ACTIONS(262), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_BSLASH,
    ACTIONS(280), 1,
      sym_math_text,
    STATE(66), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1546] = 5,
    ACTIONS(262), 1,
      aux_sym_comment_token1,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_BSLASH,
    ACTIONS(282), 1,
      sym_math_text,
    STATE(59), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1566] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(198), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1579] = 2,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(200), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1592] = 2,
    ACTIONS(218), 1,
      anon_sym_LF,
    ACTIONS(204), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1605] = 2,
    ACTIONS(236), 1,
      anon_sym_LF,
    ACTIONS(196), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1618] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(194), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1631] = 1,
    ACTIONS(200), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [1640] = 1,
    ACTIONS(198), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [1649] = 1,
    ACTIONS(196), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [1658] = 1,
    ACTIONS(284), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [1667] = 1,
    ACTIONS(286), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [1676] = 4,
    ACTIONS(288), 1,
      aux_sym_command_token1,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    ACTIONS(292), 1,
      sym_opkey,
    STATE(103), 1,
      sym__options,
  [1689] = 4,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    ACTIONS(298), 1,
      sym_opkey,
    STATE(92), 1,
      sym__options,
  [1702] = 4,
    ACTIONS(288), 1,
      aux_sym_command_token1,
    ACTIONS(292), 1,
      sym_opkey,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym__options,
  [1715] = 4,
    ACTIONS(288), 1,
      aux_sym_command_token1,
    ACTIONS(292), 1,
      sym_opkey,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym__options,
  [1728] = 4,
    ACTIONS(288), 1,
      aux_sym_command_token1,
    ACTIONS(292), 1,
      sym_opkey,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym__options,
  [1741] = 4,
    ACTIONS(288), 1,
      aux_sym_command_token1,
    ACTIONS(292), 1,
      sym_opkey,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym__options,
  [1754] = 4,
    ACTIONS(298), 1,
      sym_opkey,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym__options,
  [1767] = 4,
    ACTIONS(298), 1,
      sym_opkey,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym__options,
  [1780] = 4,
    ACTIONS(288), 1,
      aux_sym_command_token1,
    ACTIONS(292), 1,
      sym_opkey,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      sym__options,
  [1793] = 3,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_optionblock_repeat1,
  [1803] = 3,
    ACTIONS(288), 1,
      aux_sym_command_token1,
    ACTIONS(292), 1,
      sym_opkey,
    STATE(103), 1,
      sym__options,
  [1813] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_optionblock_repeat1,
  [1823] = 2,
    ACTIONS(328), 1,
      anon_sym_EQ,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1831] = 3,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_optionblock_repeat1,
  [1841] = 3,
    ACTIONS(334), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_optionblock_repeat1,
  [1851] = 3,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      aux_sym_optionblock_repeat1,
  [1861] = 3,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_optionblock_repeat1,
  [1871] = 3,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_optionblock_repeat1,
  [1881] = 2,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_optionblock,
  [1888] = 2,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_optionblock,
  [1895] = 1,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1900] = 2,
    ACTIONS(298), 1,
      sym_opkey,
    STATE(105), 1,
      sym__options,
  [1907] = 1,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1912] = 2,
    ACTIONS(357), 1,
      anon_sym_LBRACK,
    STATE(61), 1,
      sym_optionblock,
  [1919] = 1,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1924] = 1,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
  [1928] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
  [1932] = 1,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
  [1936] = 1,
    ACTIONS(340), 1,
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
  [SMALL_STATE(15)] = 481,
  [SMALL_STATE(16)] = 514,
  [SMALL_STATE(17)] = 541,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 590,
  [SMALL_STATE(20)] = 608,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 656,
  [SMALL_STATE(23)] = 686,
  [SMALL_STATE(24)] = 704,
  [SMALL_STATE(25)] = 722,
  [SMALL_STATE(26)] = 740,
  [SMALL_STATE(27)] = 762,
  [SMALL_STATE(28)] = 781,
  [SMALL_STATE(29)] = 800,
  [SMALL_STATE(30)] = 819,
  [SMALL_STATE(31)] = 838,
  [SMALL_STATE(32)] = 861,
  [SMALL_STATE(33)] = 880,
  [SMALL_STATE(34)] = 903,
  [SMALL_STATE(35)] = 923,
  [SMALL_STATE(36)] = 939,
  [SMALL_STATE(37)] = 955,
  [SMALL_STATE(38)] = 971,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 1003,
  [SMALL_STATE(41)] = 1019,
  [SMALL_STATE(42)] = 1035,
  [SMALL_STATE(43)] = 1055,
  [SMALL_STATE(44)] = 1071,
  [SMALL_STATE(45)] = 1091,
  [SMALL_STATE(46)] = 1108,
  [SMALL_STATE(47)] = 1125,
  [SMALL_STATE(48)] = 1142,
  [SMALL_STATE(49)] = 1163,
  [SMALL_STATE(50)] = 1184,
  [SMALL_STATE(51)] = 1201,
  [SMALL_STATE(52)] = 1218,
  [SMALL_STATE(53)] = 1239,
  [SMALL_STATE(54)] = 1256,
  [SMALL_STATE(55)] = 1273,
  [SMALL_STATE(56)] = 1290,
  [SMALL_STATE(57)] = 1307,
  [SMALL_STATE(58)] = 1331,
  [SMALL_STATE(59)] = 1350,
  [SMALL_STATE(60)] = 1373,
  [SMALL_STATE(61)] = 1386,
  [SMALL_STATE(62)] = 1399,
  [SMALL_STATE(63)] = 1418,
  [SMALL_STATE(64)] = 1431,
  [SMALL_STATE(65)] = 1454,
  [SMALL_STATE(66)] = 1467,
  [SMALL_STATE(67)] = 1490,
  [SMALL_STATE(68)] = 1503,
  [SMALL_STATE(69)] = 1526,
  [SMALL_STATE(70)] = 1546,
  [SMALL_STATE(71)] = 1566,
  [SMALL_STATE(72)] = 1579,
  [SMALL_STATE(73)] = 1592,
  [SMALL_STATE(74)] = 1605,
  [SMALL_STATE(75)] = 1618,
  [SMALL_STATE(76)] = 1631,
  [SMALL_STATE(77)] = 1640,
  [SMALL_STATE(78)] = 1649,
  [SMALL_STATE(79)] = 1658,
  [SMALL_STATE(80)] = 1667,
  [SMALL_STATE(81)] = 1676,
  [SMALL_STATE(82)] = 1689,
  [SMALL_STATE(83)] = 1702,
  [SMALL_STATE(84)] = 1715,
  [SMALL_STATE(85)] = 1728,
  [SMALL_STATE(86)] = 1741,
  [SMALL_STATE(87)] = 1754,
  [SMALL_STATE(88)] = 1767,
  [SMALL_STATE(89)] = 1780,
  [SMALL_STATE(90)] = 1793,
  [SMALL_STATE(91)] = 1803,
  [SMALL_STATE(92)] = 1813,
  [SMALL_STATE(93)] = 1823,
  [SMALL_STATE(94)] = 1831,
  [SMALL_STATE(95)] = 1841,
  [SMALL_STATE(96)] = 1851,
  [SMALL_STATE(97)] = 1861,
  [SMALL_STATE(98)] = 1871,
  [SMALL_STATE(99)] = 1881,
  [SMALL_STATE(100)] = 1888,
  [SMALL_STATE(101)] = 1895,
  [SMALL_STATE(102)] = 1900,
  [SMALL_STATE(103)] = 1907,
  [SMALL_STATE(104)] = 1912,
  [SMALL_STATE(105)] = 1919,
  [SMALL_STATE(106)] = 1924,
  [SMALL_STATE(107)] = 1928,
  [SMALL_STATE(108)] = 1932,
  [SMALL_STATE(109)] = 1936,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(99),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(82),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(100),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(88),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 3),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(72),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(8),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(34),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(21),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(21),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opval, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(104),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(87),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(76),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(68),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(47),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(57),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [272] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2), SHIFT_REPEAT(91),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 3),
  [361] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
