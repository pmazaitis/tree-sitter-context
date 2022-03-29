#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 123
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
  sym_math = 41,
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
  [sym_math] = "math",
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
  [sym_math] = sym_math,
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
  [sym_math] = {
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
      if (eof) ADVANCE(49);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '=') ADVANCE(85);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == '^') ADVANCE(61);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(90);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(90);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == ',') ADVANCE(83);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(87);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '^') ADVANCE(61);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '|') ADVANCE(67);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '~') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(90);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(90);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(78);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(78);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_math_text_token1);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(78);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_math_text_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_math_text_token1);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_optext);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(95);
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
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 48},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 77},
  [36] = {.lex_state = 77},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 77},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 77},
  [43] = {.lex_state = 77},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 76},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 76},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 76},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 47},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 47},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 47},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 77},
  [83] = {.lex_state = 76},
  [84] = {.lex_state = 76},
  [85] = {.lex_state = 77},
  [86] = {.lex_state = 77},
  [87] = {.lex_state = 77},
  [88] = {.lex_state = 76},
  [89] = {.lex_state = 77},
  [90] = {.lex_state = 77},
  [91] = {.lex_state = 76},
  [92] = {.lex_state = 76},
  [93] = {.lex_state = 76},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 6},
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
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
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
    [sym_document] = STATE(121),
    [sym__content] = STATE(9),
    [sym_main_start] = STATE(9),
    [sym_main_stop] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_escaped] = STATE(9),
    [sym_brace_group] = STATE(9),
    [sym_math] = STATE(9),
    [sym_command] = STATE(9),
    [sym__newline] = STATE(9),
    [aux_sym_document_repeat1] = STATE(9),
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
    STATE(8), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math,
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
      sym_math,
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
    STATE(5), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math,
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
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(8), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math,
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
    ACTIONS(43), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(45), 2,
      sym_text,
      anon_sym_LF,
    STATE(2), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math,
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
    ACTIONS(31), 2,
      sym_text,
      anon_sym_LF,
    ACTIONS(47), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(8), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [252] = 9,
    ACTIONS(55), 1,
      aux_sym_comment_token1,
    ACTIONS(58), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(52), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(61), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(64), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(69), 2,
      sym_text,
      anon_sym_LF,
    STATE(8), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [294] = 9,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(72), 1,
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
    ACTIONS(74), 2,
      sym_text,
      anon_sym_LF,
    STATE(10), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [335] = 9,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      aux_sym_comment_token1,
    ACTIONS(87), 1,
      anon_sym_DOLLAR,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    ACTIONS(78), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(81), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(90), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(96), 2,
      sym_text,
      anon_sym_LF,
    STATE(10), 10,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [376] = 4,
    ACTIONS(101), 1,
      aux_sym_command_token1,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
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
    STATE(11), 2,
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
    STATE(15), 2,
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
  [481] = 5,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym_command_token1,
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
  [508] = 8,
    ACTIONS(127), 1,
      aux_sym_comment_token1,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      sym_optext,
    ACTIONS(137), 1,
      anon_sym_LF,
    STATE(115), 1,
      sym_opval,
    ACTIONS(129), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(133), 2,
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
  [541] = 5,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      aux_sym_command_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(17), 2,
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
  [586] = 7,
    ACTIONS(149), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      anon_sym_BSLASH,
    ACTIONS(160), 1,
      sym_optext,
    ACTIONS(163), 1,
      anon_sym_LF,
    ACTIONS(152), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(19), 7,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__opcontent,
      sym__newline,
      aux_sym_opval_repeat1,
  [616] = 1,
    ACTIONS(166), 15,
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
  [634] = 1,
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
  [652] = 7,
    ACTIONS(127), 1,
      aux_sym_comment_token1,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      sym_optext,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(129), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(19), 7,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__opcontent,
      sym__newline,
      aux_sym_opval_repeat1,
  [682] = 1,
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
  [700] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_optionblock,
    ACTIONS(176), 13,
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
    STATE(21), 1,
      sym_optionblock,
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
  [781] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_optionblock,
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
  [804] = 4,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_optionblock,
    ACTIONS(176), 11,
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
  [827] = 2,
    ACTIONS(184), 1,
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
  [846] = 2,
    ACTIONS(139), 1,
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
  [865] = 2,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 13,
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
  [903] = 7,
    ACTIONS(190), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    ACTIONS(196), 1,
      anon_sym_BSLASH,
    ACTIONS(198), 1,
      aux_sym_math_text_token1,
    ACTIONS(200), 1,
      anon_sym_LF,
    STATE(52), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [931] = 7,
    ACTIONS(202), 1,
      aux_sym_comment_token1,
    ACTIONS(204), 1,
      anon_sym_DOLLAR,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      aux_sym_math_text_token1,
    ACTIONS(212), 1,
      anon_sym_LF,
    STATE(39), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [959] = 7,
    ACTIONS(202), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      aux_sym_math_text_token1,
    ACTIONS(214), 1,
      anon_sym_DOLLAR,
    ACTIONS(216), 1,
      anon_sym_LF,
    STATE(43), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [987] = 7,
    ACTIONS(190), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_BSLASH,
    ACTIONS(198), 1,
      aux_sym_math_text_token1,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(49), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [1015] = 3,
    ACTIONS(224), 1,
      sym_command_name,
    STATE(77), 1,
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
  [1035] = 7,
    ACTIONS(202), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      aux_sym_math_text_token1,
    ACTIONS(216), 1,
      anon_sym_LF,
    ACTIONS(226), 1,
      anon_sym_DOLLAR,
    STATE(43), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [1063] = 3,
    ACTIONS(230), 1,
      sym_command_name,
    STATE(44), 1,
      sym_escapechar,
    ACTIONS(228), 11,
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
  [1083] = 1,
    ACTIONS(232), 13,
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
  [1099] = 7,
    ACTIONS(202), 1,
      aux_sym_comment_token1,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_BSLASH,
    ACTIONS(210), 1,
      aux_sym_math_text_token1,
    ACTIONS(234), 1,
      anon_sym_DOLLAR,
    ACTIONS(236), 1,
      anon_sym_LF,
    STATE(36), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [1127] = 7,
    ACTIONS(238), 1,
      aux_sym_comment_token1,
    ACTIONS(241), 1,
      anon_sym_DOLLAR,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_BSLASH,
    ACTIONS(249), 1,
      aux_sym_math_text_token1,
    ACTIONS(252), 1,
      anon_sym_LF,
    STATE(43), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [1155] = 1,
    ACTIONS(255), 13,
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
  [1171] = 7,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    ACTIONS(263), 1,
      anon_sym_BSLASH,
    ACTIONS(266), 1,
      aux_sym_math_text_token1,
    ACTIONS(269), 1,
      anon_sym_LF,
    STATE(45), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [1199] = 1,
    ACTIONS(272), 13,
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
  [1215] = 1,
    ACTIONS(274), 13,
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
  [1231] = 1,
    ACTIONS(276), 13,
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
  [1247] = 7,
    ACTIONS(190), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_BSLASH,
    ACTIONS(198), 1,
      aux_sym_math_text_token1,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    ACTIONS(280), 1,
      anon_sym_LF,
    STATE(45), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [1275] = 3,
    ACTIONS(284), 1,
      sym_command_name,
    STATE(58), 1,
      sym_escapechar,
    ACTIONS(282), 11,
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
  [1295] = 1,
    ACTIONS(286), 13,
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
  [1311] = 7,
    ACTIONS(190), 1,
      aux_sym_comment_token1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
    ACTIONS(196), 1,
      anon_sym_BSLASH,
    ACTIONS(198), 1,
      aux_sym_math_text_token1,
    ACTIONS(280), 1,
      anon_sym_LF,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(45), 7,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      sym_math_text,
      sym__newline,
      aux_sym_math_group_repeat1,
  [1339] = 1,
    ACTIONS(290), 13,
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
  [1355] = 1,
    ACTIONS(292), 13,
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
  [1371] = 1,
    ACTIONS(294), 13,
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
  [1387] = 4,
    ACTIONS(296), 1,
      aux_sym_command_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(56), 2,
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
  [1408] = 2,
    ACTIONS(302), 1,
      ts_builtin_sym_end,
    ACTIONS(276), 11,
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
  [1425] = 2,
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 11,
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
  [1442] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 11,
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
  [1459] = 2,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(274), 11,
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
  [1476] = 2,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(292), 11,
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
  [1493] = 2,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(286), 11,
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
  [1510] = 4,
    ACTIONS(314), 1,
      aux_sym_command_token1,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    STATE(66), 2,
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
  [1531] = 2,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
    ACTIONS(272), 11,
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
  [1548] = 2,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    ACTIONS(232), 11,
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
  [1565] = 4,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(322), 1,
      aux_sym_command_token1,
    STATE(56), 2,
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
  [1586] = 2,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(290), 11,
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
  [1603] = 2,
    STATE(86), 1,
      sym_escapechar,
    ACTIONS(326), 11,
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
  [1620] = 2,
    STATE(83), 1,
      sym_escapechar,
    ACTIONS(328), 11,
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
  [1637] = 4,
    ACTIONS(182), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_optionblock,
    ACTIONS(176), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1656] = 1,
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
  [1669] = 1,
    ACTIONS(166), 10,
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
  [1682] = 1,
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
  [1695] = 1,
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
  [1708] = 1,
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
  [1721] = 4,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_optionblock,
    ACTIONS(99), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1740] = 2,
    ACTIONS(304), 1,
      anon_sym_LF,
    ACTIONS(255), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1753] = 2,
    ACTIONS(312), 1,
      anon_sym_LF,
    ACTIONS(286), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1766] = 2,
    ACTIONS(302), 1,
      anon_sym_LF,
    ACTIONS(276), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1779] = 2,
    ACTIONS(308), 1,
      anon_sym_LF,
    ACTIONS(274), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1792] = 2,
    ACTIONS(320), 1,
      anon_sym_LF,
    ACTIONS(232), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1805] = 1,
    ACTIONS(330), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1814] = 1,
    ACTIONS(255), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1823] = 1,
    ACTIONS(332), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1832] = 1,
    ACTIONS(334), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1841] = 1,
    ACTIONS(255), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1850] = 1,
    ACTIONS(274), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1859] = 1,
    ACTIONS(334), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1868] = 1,
    ACTIONS(276), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1877] = 1,
    ACTIONS(332), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1886] = 1,
    ACTIONS(330), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1895] = 1,
    ACTIONS(276), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1904] = 1,
    ACTIONS(274), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_math_text_token1,
      anon_sym_LF,
  [1913] = 4,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    ACTIONS(340), 1,
      sym_opkey,
    STATE(103), 1,
      sym__options,
  [1926] = 4,
    ACTIONS(342), 1,
      aux_sym_command_token1,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    ACTIONS(346), 1,
      sym_opkey,
    STATE(118), 1,
      sym__options,
  [1939] = 4,
    ACTIONS(342), 1,
      aux_sym_command_token1,
    ACTIONS(346), 1,
      sym_opkey,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym__options,
  [1952] = 4,
    ACTIONS(342), 1,
      aux_sym_command_token1,
    ACTIONS(346), 1,
      sym_opkey,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym__options,
  [1965] = 4,
    ACTIONS(342), 1,
      aux_sym_command_token1,
    ACTIONS(346), 1,
      sym_opkey,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym__options,
  [1978] = 4,
    ACTIONS(340), 1,
      sym_opkey,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__options,
  [1991] = 4,
    ACTIONS(342), 1,
      aux_sym_command_token1,
    ACTIONS(346), 1,
      sym_opkey,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym__options,
  [2004] = 4,
    ACTIONS(340), 1,
      sym_opkey,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      sym__options,
  [2017] = 4,
    ACTIONS(342), 1,
      aux_sym_command_token1,
    ACTIONS(346), 1,
      sym_opkey,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym__options,
  [2030] = 3,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_optionblock_repeat1,
  [2040] = 2,
    ACTIONS(372), 1,
      anon_sym_EQ,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2048] = 3,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_optionblock_repeat1,
  [2058] = 3,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_optionblock_repeat1,
  [2068] = 3,
    ACTIONS(382), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_optionblock_repeat1,
  [2078] = 3,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_optionblock_repeat1,
  [2088] = 3,
    ACTIONS(342), 1,
      aux_sym_command_token1,
    ACTIONS(346), 1,
      sym_opkey,
    STATE(118), 1,
      sym__options,
  [2098] = 3,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_optionblock_repeat1,
  [2108] = 3,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_optionblock_repeat1,
  [2118] = 2,
    ACTIONS(399), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_optionblock,
  [2125] = 2,
    ACTIONS(401), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_optionblock,
  [2132] = 1,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2137] = 1,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2142] = 2,
    ACTIONS(340), 1,
      sym_opkey,
    STATE(114), 1,
      sym__options,
  [2149] = 2,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_optionblock,
  [2156] = 1,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2161] = 1,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
  [2165] = 1,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
  [2169] = 1,
    ACTIONS(409), 1,
      ts_builtin_sym_end,
  [2173] = 1,
    ACTIONS(393), 1,
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
  [SMALL_STATE(16)] = 508,
  [SMALL_STATE(17)] = 541,
  [SMALL_STATE(18)] = 568,
  [SMALL_STATE(19)] = 586,
  [SMALL_STATE(20)] = 616,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 652,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 700,
  [SMALL_STATE(25)] = 722,
  [SMALL_STATE(26)] = 740,
  [SMALL_STATE(27)] = 762,
  [SMALL_STATE(28)] = 781,
  [SMALL_STATE(29)] = 804,
  [SMALL_STATE(30)] = 827,
  [SMALL_STATE(31)] = 846,
  [SMALL_STATE(32)] = 865,
  [SMALL_STATE(33)] = 884,
  [SMALL_STATE(34)] = 903,
  [SMALL_STATE(35)] = 931,
  [SMALL_STATE(36)] = 959,
  [SMALL_STATE(37)] = 987,
  [SMALL_STATE(38)] = 1015,
  [SMALL_STATE(39)] = 1035,
  [SMALL_STATE(40)] = 1063,
  [SMALL_STATE(41)] = 1083,
  [SMALL_STATE(42)] = 1099,
  [SMALL_STATE(43)] = 1127,
  [SMALL_STATE(44)] = 1155,
  [SMALL_STATE(45)] = 1171,
  [SMALL_STATE(46)] = 1199,
  [SMALL_STATE(47)] = 1215,
  [SMALL_STATE(48)] = 1231,
  [SMALL_STATE(49)] = 1247,
  [SMALL_STATE(50)] = 1275,
  [SMALL_STATE(51)] = 1295,
  [SMALL_STATE(52)] = 1311,
  [SMALL_STATE(53)] = 1339,
  [SMALL_STATE(54)] = 1355,
  [SMALL_STATE(55)] = 1371,
  [SMALL_STATE(56)] = 1387,
  [SMALL_STATE(57)] = 1408,
  [SMALL_STATE(58)] = 1425,
  [SMALL_STATE(59)] = 1442,
  [SMALL_STATE(60)] = 1459,
  [SMALL_STATE(61)] = 1476,
  [SMALL_STATE(62)] = 1493,
  [SMALL_STATE(63)] = 1510,
  [SMALL_STATE(64)] = 1531,
  [SMALL_STATE(65)] = 1548,
  [SMALL_STATE(66)] = 1565,
  [SMALL_STATE(67)] = 1586,
  [SMALL_STATE(68)] = 1603,
  [SMALL_STATE(69)] = 1620,
  [SMALL_STATE(70)] = 1637,
  [SMALL_STATE(71)] = 1656,
  [SMALL_STATE(72)] = 1669,
  [SMALL_STATE(73)] = 1682,
  [SMALL_STATE(74)] = 1695,
  [SMALL_STATE(75)] = 1708,
  [SMALL_STATE(76)] = 1721,
  [SMALL_STATE(77)] = 1740,
  [SMALL_STATE(78)] = 1753,
  [SMALL_STATE(79)] = 1766,
  [SMALL_STATE(80)] = 1779,
  [SMALL_STATE(81)] = 1792,
  [SMALL_STATE(82)] = 1805,
  [SMALL_STATE(83)] = 1814,
  [SMALL_STATE(84)] = 1823,
  [SMALL_STATE(85)] = 1832,
  [SMALL_STATE(86)] = 1841,
  [SMALL_STATE(87)] = 1850,
  [SMALL_STATE(88)] = 1859,
  [SMALL_STATE(89)] = 1868,
  [SMALL_STATE(90)] = 1877,
  [SMALL_STATE(91)] = 1886,
  [SMALL_STATE(92)] = 1895,
  [SMALL_STATE(93)] = 1904,
  [SMALL_STATE(94)] = 1913,
  [SMALL_STATE(95)] = 1926,
  [SMALL_STATE(96)] = 1939,
  [SMALL_STATE(97)] = 1952,
  [SMALL_STATE(98)] = 1965,
  [SMALL_STATE(99)] = 1978,
  [SMALL_STATE(100)] = 1991,
  [SMALL_STATE(101)] = 2004,
  [SMALL_STATE(102)] = 2017,
  [SMALL_STATE(103)] = 2030,
  [SMALL_STATE(104)] = 2040,
  [SMALL_STATE(105)] = 2048,
  [SMALL_STATE(106)] = 2058,
  [SMALL_STATE(107)] = 2068,
  [SMALL_STATE(108)] = 2078,
  [SMALL_STATE(109)] = 2088,
  [SMALL_STATE(110)] = 2098,
  [SMALL_STATE(111)] = 2108,
  [SMALL_STATE(112)] = 2118,
  [SMALL_STATE(113)] = 2125,
  [SMALL_STATE(114)] = 2132,
  [SMALL_STATE(115)] = 2137,
  [SMALL_STATE(116)] = 2142,
  [SMALL_STATE(117)] = 2149,
  [SMALL_STATE(118)] = 2156,
  [SMALL_STATE(119)] = 2161,
  [SMALL_STATE(120)] = 2165,
  [SMALL_STATE(121)] = 2169,
  [SMALL_STATE(122)] = 2173,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(57),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(50),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(112),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(101),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(113),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(94),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 4),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(79),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(4),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(38),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(19),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(19),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opval, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(89),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(37),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(68),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(85),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(43),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [257] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(92),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(34),
  [263] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(69),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(88),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(45),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math, 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(117),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(99),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_text, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [382] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2), SHIFT_REPEAT(109),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [409] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
