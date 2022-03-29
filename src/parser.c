#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 121
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
  aux_sym_command_token1 = 19,
  anon_sym_LBRACK = 20,
  anon_sym_COMMA = 21,
  anon_sym_RBRACK = 22,
  anon_sym_EQ = 23,
  sym_opkey = 24,
  sym_text = 25,
  sym_optext = 26,
  sym_math_text = 27,
  sym_name = 28,
  anon_sym_LF = 29,
  sym_document = 30,
  sym_main_start = 31,
  sym_main_stop = 32,
  sym__content = 33,
  sym__opcontent = 34,
  sym__math_content = 35,
  sym_comment = 36,
  sym_escapechar = 37,
  sym_escaped = 38,
  sym_math_brace_group = 39,
  sym_brace_group = 40,
  sym_math_group = 41,
  sym_command = 42,
  sym_optionblock = 43,
  sym__options = 44,
  sym_opval = 45,
  sym__newline = 46,
  aux_sym_document_repeat1 = 47,
  aux_sym_math_brace_group_repeat1 = 48,
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
  [aux_sym_command_token1] = "command_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_opkey] = "opkey",
  [sym_text] = "text",
  [sym_optext] = "optext",
  [sym_math_text] = "math_text",
  [sym_name] = "name",
  [anon_sym_LF] = "\n",
  [sym_document] = "document",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
  [sym__content] = "_content",
  [sym__opcontent] = "_opcontent",
  [sym__math_content] = "_math_content",
  [sym_comment] = "comment",
  [sym_escapechar] = "escapechar",
  [sym_escaped] = "escaped",
  [sym_math_brace_group] = "math_brace_group",
  [sym_brace_group] = "brace_group",
  [sym_math_group] = "math_group",
  [sym_command] = "command",
  [sym_optionblock] = "optionblock",
  [sym__options] = "_options",
  [sym_opval] = "opval",
  [sym__newline] = "_newline",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_math_brace_group_repeat1] = "math_brace_group_repeat1",
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
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_opkey] = sym_opkey,
  [sym_text] = sym_text,
  [sym_optext] = sym_optext,
  [sym_math_text] = sym_math_text,
  [sym_name] = sym_name,
  [anon_sym_LF] = anon_sym_LF,
  [sym_document] = sym_document,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
  [sym__content] = sym__content,
  [sym__opcontent] = sym__opcontent,
  [sym__math_content] = sym__math_content,
  [sym_comment] = sym_comment,
  [sym_escapechar] = sym_escapechar,
  [sym_escaped] = sym_escaped,
  [sym_math_brace_group] = sym_math_brace_group,
  [sym_brace_group] = sym_brace_group,
  [sym_math_group] = sym_math_group,
  [sym_command] = sym_command,
  [sym_optionblock] = sym_optionblock,
  [sym__options] = sym__options,
  [sym_opval] = sym_opval,
  [sym__newline] = sym__newline,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_math_brace_group_repeat1] = aux_sym_math_brace_group_repeat1,
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
  [aux_sym_command_token1] = {
    .visible = false,
    .named = false,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_optext] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
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
  [sym_main_start] = {
    .visible = true,
    .named = true,
  },
  [sym_main_stop] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [sym__opcontent] = {
    .visible = false,
    .named = true,
  },
  [sym__math_content] = {
    .visible = false,
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
  [sym_math_brace_group] = {
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
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_brace_group_repeat1] = {
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
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '=') ADVANCE(81);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == ']') ADVANCE(80);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(83);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6)
      if (lookahead == ',') ADVANCE(79);
      if (lookahead == ']') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(83);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
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
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(85);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '$') ADVANCE(58);
      if (lookahead == '%') ADVANCE(56);
      if (lookahead == '[') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(85);
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
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(56);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(89);
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
          lookahead != '$') ADVANCE(89);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(89);
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
          lookahead != '$') ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\n') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(85);
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
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '{') ADVANCE(64);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
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
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(88);
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
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 48},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 47},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 48},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 47},
  [51] = {.lex_state = 88},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 47},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 47},
  [61] = {.lex_state = 88},
  [62] = {.lex_state = 88},
  [63] = {.lex_state = 88},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 87},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 88},
  [68] = {.lex_state = 47},
  [69] = {.lex_state = 47},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 87},
  [83] = {.lex_state = 88},
  [84] = {.lex_state = 88},
  [85] = {.lex_state = 87},
  [86] = {.lex_state = 87},
  [87] = {.lex_state = 87},
  [88] = {.lex_state = 87},
  [89] = {.lex_state = 88},
  [90] = {.lex_state = 88},
  [91] = {.lex_state = 88},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(119),
    [sym_main_start] = STATE(10),
    [sym_main_stop] = STATE(10),
    [sym__content] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_escaped] = STATE(10),
    [sym_brace_group] = STATE(10),
    [sym_math_group] = STATE(10),
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
    STATE(5), 10,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
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
    STATE(6), 10,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
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
    ACTIONS(31), 2,
      sym_text,
      anon_sym_LF,
    ACTIONS(37), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(5), 10,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [126] = 9,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(48), 1,
      anon_sym_DOLLAR,
    ACTIONS(56), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(42), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(51), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(54), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(59), 2,
      sym_text,
      anon_sym_LF,
    STATE(5), 10,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
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
    STATE(5), 10,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
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
    STATE(2), 10,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
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
    STATE(4), 10,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
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
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
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
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_math_group,
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
  [454] = 5,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      aux_sym_command_token1,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    STATE(14), 2,
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
  [481] = 5,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      aux_sym_command_token1,
    ACTIONS(129), 1,
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
  [508] = 8,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(139), 1,
      sym_optext,
    ACTIONS(141), 1,
      anon_sym_LF,
    STATE(113), 1,
      sym_opval,
    ACTIONS(133), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(21), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [541] = 5,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      aux_sym_command_token1,
    STATE(14), 2,
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
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [634] = 7,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    ACTIONS(135), 1,
      anon_sym_BSLASH,
    ACTIONS(170), 1,
      sym_optext,
    ACTIONS(172), 1,
      anon_sym_LF,
    ACTIONS(133), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(20), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
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
  [682] = 3,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
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
  [704] = 1,
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
  [722] = 1,
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
  [740] = 3,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
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
    ACTIONS(129), 1,
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
  [823] = 4,
    ACTIONS(129), 1,
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
    ACTIONS(117), 1,
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
  [903] = 3,
    ACTIONS(192), 1,
      sym_name,
    STATE(77), 1,
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
  [939] = 3,
    ACTIONS(198), 1,
      sym_name,
    STATE(59), 1,
      sym_escapechar,
    ACTIONS(196), 11,
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
  [959] = 1,
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
  [975] = 1,
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
  [991] = 3,
    ACTIONS(206), 1,
      sym_name,
    STATE(45), 1,
      sym_escapechar,
    ACTIONS(204), 11,
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
  [1011] = 1,
    ACTIONS(208), 13,
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
  [1091] = 1,
    ACTIONS(218), 13,
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
  [1107] = 2,
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
  [1124] = 6,
    ACTIONS(222), 1,
      aux_sym_comment_token1,
    ACTIONS(224), 1,
      anon_sym_DOLLAR,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_BSLASH,
    ACTIONS(230), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(48), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1149] = 6,
    ACTIONS(232), 1,
      aux_sym_comment_token1,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_BSLASH,
    ACTIONS(243), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(48), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1174] = 4,
    ACTIONS(246), 1,
      aux_sym_command_token1,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(57), 2,
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
  [1195] = 2,
    ACTIONS(250), 1,
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
  [1212] = 6,
    ACTIONS(252), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      anon_sym_BSLASH,
    ACTIONS(260), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(62), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1237] = 6,
    ACTIONS(222), 1,
      aux_sym_comment_token1,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_BSLASH,
    ACTIONS(262), 1,
      anon_sym_DOLLAR,
    ACTIONS(264), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(65), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1262] = 2,
    STATE(83), 1,
      sym_escapechar,
    ACTIONS(266), 11,
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
  [1279] = 4,
    ACTIONS(268), 1,
      aux_sym_command_token1,
    ACTIONS(271), 1,
      anon_sym_LBRACK,
    STATE(54), 2,
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
  [1300] = 2,
    ACTIONS(274), 1,
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
  [1317] = 6,
    ACTIONS(222), 1,
      aux_sym_comment_token1,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_BSLASH,
    ACTIONS(276), 1,
      anon_sym_DOLLAR,
    ACTIONS(278), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(47), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1342] = 4,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      aux_sym_command_token1,
    STATE(54), 2,
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
  [1363] = 2,
    ACTIONS(282), 1,
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
  [1380] = 2,
    ACTIONS(284), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 11,
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
  [1397] = 2,
    ACTIONS(286), 1,
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
  [1414] = 6,
    ACTIONS(252), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_BSLASH,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(62), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1439] = 6,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_BSLASH,
    ACTIONS(299), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(62), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1464] = 6,
    ACTIONS(252), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_BSLASH,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(61), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1489] = 2,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 11,
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
  [1506] = 6,
    ACTIONS(222), 1,
      aux_sym_comment_token1,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_BSLASH,
    ACTIONS(308), 1,
      anon_sym_DOLLAR,
    ACTIONS(230), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(48), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1531] = 2,
    STATE(82), 1,
      sym_escapechar,
    ACTIONS(310), 11,
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
  [1548] = 6,
    ACTIONS(252), 1,
      aux_sym_comment_token1,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_BSLASH,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 2,
      sym_math_text,
      anon_sym_LF,
    STATE(51), 6,
      sym__math_content,
      sym_comment,
      sym_escaped,
      sym_math_brace_group,
      sym__newline,
      aux_sym_math_brace_group_repeat1,
  [1573] = 2,
    ACTIONS(316), 1,
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
  [1590] = 2,
    ACTIONS(318), 1,
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
  [1607] = 4,
    ACTIONS(184), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_optionblock,
    ACTIONS(178), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1626] = 1,
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
  [1639] = 1,
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
  [1652] = 1,
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
  [1665] = 1,
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
  [1678] = 4,
    ACTIONS(143), 1,
      anon_sym_LF,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_optionblock,
    ACTIONS(113), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1697] = 1,
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
  [1710] = 2,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(218), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1723] = 2,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(208), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1736] = 2,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(194), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1749] = 2,
    ACTIONS(274), 1,
      anon_sym_LF,
    ACTIONS(200), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1762] = 2,
    ACTIONS(286), 1,
      anon_sym_LF,
    ACTIONS(214), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1775] = 1,
    ACTIONS(218), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1784] = 1,
    ACTIONS(218), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1793] = 1,
    ACTIONS(320), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1802] = 1,
    ACTIONS(320), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1811] = 1,
    ACTIONS(214), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1820] = 1,
    ACTIONS(194), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1829] = 1,
    ACTIONS(322), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1838] = 1,
    ACTIONS(322), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1847] = 1,
    ACTIONS(194), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1856] = 1,
    ACTIONS(214), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
      anon_sym_LF,
  [1865] = 4,
    ACTIONS(324), 1,
      aux_sym_command_token1,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    ACTIONS(328), 1,
      sym_opkey,
    STATE(116), 1,
      sym__options,
  [1878] = 4,
    ACTIONS(324), 1,
      aux_sym_command_token1,
    ACTIONS(328), 1,
      sym_opkey,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym__options,
  [1891] = 4,
    ACTIONS(324), 1,
      aux_sym_command_token1,
    ACTIONS(328), 1,
      sym_opkey,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym__options,
  [1904] = 4,
    ACTIONS(324), 1,
      aux_sym_command_token1,
    ACTIONS(328), 1,
      sym_opkey,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym__options,
  [1917] = 4,
    ACTIONS(324), 1,
      aux_sym_command_token1,
    ACTIONS(328), 1,
      sym_opkey,
    ACTIONS(336), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym__options,
  [1930] = 4,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    ACTIONS(342), 1,
      sym_opkey,
    STATE(108), 1,
      sym__options,
  [1943] = 4,
    ACTIONS(342), 1,
      sym_opkey,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      sym__options,
  [1956] = 4,
    ACTIONS(342), 1,
      sym_opkey,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      sym__options,
  [1969] = 4,
    ACTIONS(324), 1,
      aux_sym_command_token1,
    ACTIONS(328), 1,
      sym_opkey,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym__options,
  [1982] = 3,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(103), 1,
      aux_sym_optionblock_repeat1,
  [1992] = 2,
    ACTIONS(360), 1,
      anon_sym_EQ,
    ACTIONS(358), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2000] = 3,
    ACTIONS(362), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_optionblock_repeat1,
  [2010] = 3,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_optionblock_repeat1,
  [2020] = 3,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_optionblock_repeat1,
  [2030] = 3,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_optionblock_repeat1,
  [2040] = 3,
    ACTIONS(324), 1,
      aux_sym_command_token1,
    ACTIONS(328), 1,
      sym_opkey,
    STATE(116), 1,
      sym__options,
  [2050] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_optionblock_repeat1,
  [2060] = 3,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_optionblock_repeat1,
  [2070] = 2,
    ACTIONS(387), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_optionblock,
  [2077] = 1,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2082] = 2,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_optionblock,
  [2089] = 1,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2094] = 2,
    ACTIONS(342), 1,
      sym_opkey,
    STATE(111), 1,
      sym__options,
  [2101] = 2,
    ACTIONS(395), 1,
      anon_sym_LBRACK,
    STATE(76), 1,
      sym_optionblock,
  [2108] = 1,
    ACTIONS(373), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2113] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
  [2117] = 1,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
  [2121] = 1,
    ACTIONS(397), 1,
      ts_builtin_sym_end,
  [2125] = 1,
    ACTIONS(381), 1,
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
  [SMALL_STATE(20)] = 604,
  [SMALL_STATE(21)] = 634,
  [SMALL_STATE(22)] = 664,
  [SMALL_STATE(23)] = 682,
  [SMALL_STATE(24)] = 704,
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
  [SMALL_STATE(37)] = 959,
  [SMALL_STATE(38)] = 975,
  [SMALL_STATE(39)] = 991,
  [SMALL_STATE(40)] = 1011,
  [SMALL_STATE(41)] = 1027,
  [SMALL_STATE(42)] = 1043,
  [SMALL_STATE(43)] = 1059,
  [SMALL_STATE(44)] = 1075,
  [SMALL_STATE(45)] = 1091,
  [SMALL_STATE(46)] = 1107,
  [SMALL_STATE(47)] = 1124,
  [SMALL_STATE(48)] = 1149,
  [SMALL_STATE(49)] = 1174,
  [SMALL_STATE(50)] = 1195,
  [SMALL_STATE(51)] = 1212,
  [SMALL_STATE(52)] = 1237,
  [SMALL_STATE(53)] = 1262,
  [SMALL_STATE(54)] = 1279,
  [SMALL_STATE(55)] = 1300,
  [SMALL_STATE(56)] = 1317,
  [SMALL_STATE(57)] = 1342,
  [SMALL_STATE(58)] = 1363,
  [SMALL_STATE(59)] = 1380,
  [SMALL_STATE(60)] = 1397,
  [SMALL_STATE(61)] = 1414,
  [SMALL_STATE(62)] = 1439,
  [SMALL_STATE(63)] = 1464,
  [SMALL_STATE(64)] = 1489,
  [SMALL_STATE(65)] = 1506,
  [SMALL_STATE(66)] = 1531,
  [SMALL_STATE(67)] = 1548,
  [SMALL_STATE(68)] = 1573,
  [SMALL_STATE(69)] = 1590,
  [SMALL_STATE(70)] = 1607,
  [SMALL_STATE(71)] = 1626,
  [SMALL_STATE(72)] = 1639,
  [SMALL_STATE(73)] = 1652,
  [SMALL_STATE(74)] = 1665,
  [SMALL_STATE(75)] = 1678,
  [SMALL_STATE(76)] = 1697,
  [SMALL_STATE(77)] = 1710,
  [SMALL_STATE(78)] = 1723,
  [SMALL_STATE(79)] = 1736,
  [SMALL_STATE(80)] = 1749,
  [SMALL_STATE(81)] = 1762,
  [SMALL_STATE(82)] = 1775,
  [SMALL_STATE(83)] = 1784,
  [SMALL_STATE(84)] = 1793,
  [SMALL_STATE(85)] = 1802,
  [SMALL_STATE(86)] = 1811,
  [SMALL_STATE(87)] = 1820,
  [SMALL_STATE(88)] = 1829,
  [SMALL_STATE(89)] = 1838,
  [SMALL_STATE(90)] = 1847,
  [SMALL_STATE(91)] = 1856,
  [SMALL_STATE(92)] = 1865,
  [SMALL_STATE(93)] = 1878,
  [SMALL_STATE(94)] = 1891,
  [SMALL_STATE(95)] = 1904,
  [SMALL_STATE(96)] = 1917,
  [SMALL_STATE(97)] = 1930,
  [SMALL_STATE(98)] = 1943,
  [SMALL_STATE(99)] = 1956,
  [SMALL_STATE(100)] = 1969,
  [SMALL_STATE(101)] = 1982,
  [SMALL_STATE(102)] = 1992,
  [SMALL_STATE(103)] = 2000,
  [SMALL_STATE(104)] = 2010,
  [SMALL_STATE(105)] = 2020,
  [SMALL_STATE(106)] = 2030,
  [SMALL_STATE(107)] = 2040,
  [SMALL_STATE(108)] = 2050,
  [SMALL_STATE(109)] = 2060,
  [SMALL_STATE(110)] = 2070,
  [SMALL_STATE(111)] = 2077,
  [SMALL_STATE(112)] = 2082,
  [SMALL_STATE(113)] = 2089,
  [SMALL_STATE(114)] = 2094,
  [SMALL_STATE(115)] = 2101,
  [SMALL_STATE(116)] = 2108,
  [SMALL_STATE(117)] = 2113,
  [SMALL_STATE(118)] = 2117,
  [SMALL_STATE(119)] = 2121,
  [SMALL_STATE(120)] = 2125,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(110),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(99),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(112),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(98),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 5),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(79),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(7),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(34),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(20),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(20),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opval, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(87),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(67),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(66),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(48),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_group, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(115),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(97),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(90),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(63),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(53),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(62),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_group, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_brace_group, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_brace_group, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2), SHIFT_REPEAT(107),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [397] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
