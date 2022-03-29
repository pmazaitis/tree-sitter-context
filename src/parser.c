#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
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
  sym_brace_group = 39,
  sym_math_group = 40,
  sym_command = 41,
  sym_optionblock = 42,
  sym__options = 43,
  sym_opval = 44,
  sym__newline = 45,
  aux_sym_document_repeat1 = 46,
  aux_sym_math_brace_group_repeat1 = 47,
  aux_sym_command_repeat1 = 48,
  aux_sym_optionblock_repeat1 = 49,
  aux_sym_opval_repeat1 = 50,
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
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '&') ADVANCE(59);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '=') ADVANCE(77);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '^') ADVANCE(60);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(81);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '%') ADVANCE(54);
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(67);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == ',') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(79);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == ']') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '&') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '^') ADVANCE(60);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
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
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(70);
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
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(81);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '$') ADVANCE(57);
      if (lookahead == '%') ADVANCE(55);
      if (lookahead == '[') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(81);
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
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_optext);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
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
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 48},
  [16] = {.lex_state = 48},
  [17] = {.lex_state = 48},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 48},
  [28] = {.lex_state = 47},
  [29] = {.lex_state = 48},
  [30] = {.lex_state = 48},
  [31] = {.lex_state = 48},
  [32] = {.lex_state = 47},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 47},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 47},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 47},
  [55] = {.lex_state = 47},
  [56] = {.lex_state = 47},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 83},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 83},
  [74] = {.lex_state = 83},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 83},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 83},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
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
    [sym_document] = STATE(101),
    [sym_main_start] = STATE(9),
    [sym_main_stop] = STATE(9),
    [sym__content] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_escaped] = STATE(9),
    [sym_brace_group] = STATE(9),
    [sym_math_group] = STATE(9),
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
    STATE(7), 10,
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
    ACTIONS(56), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(58), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 10,
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
    ACTIONS(60), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(62), 2,
      sym_text,
      anon_sym_LF,
    STATE(8), 10,
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
    ACTIONS(64), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(66), 2,
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
    ACTIONS(58), 2,
      sym_text,
      anon_sym_LF,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(3), 10,
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
    ACTIONS(58), 2,
      sym_text,
      anon_sym_LF,
    ACTIONS(70), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(3), 10,
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
  [454] = 8,
    ACTIONS(117), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      sym_optext,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(96), 1,
      sym_opval,
    ACTIONS(119), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(25), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [487] = 5,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(131), 1,
      aux_sym_command_token1,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(15), 2,
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
  [514] = 5,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      aux_sym_command_token1,
    ACTIONS(141), 1,
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
  [541] = 5,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      aux_sym_command_token1,
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
  [604] = 1,
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
  [622] = 7,
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
    STATE(21), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [652] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
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
  [674] = 3,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_optionblock,
    ACTIONS(168), 13,
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
  [696] = 1,
    ACTIONS(170), 15,
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
  [714] = 7,
    ACTIONS(117), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      anon_sym_BSLASH,
    ACTIONS(174), 1,
      sym_optext,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(119), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(172), 2,
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
  [744] = 1,
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
  [762] = 2,
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
  [781] = 4,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
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
  [804] = 2,
    ACTIONS(129), 1,
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
  [823] = 2,
    ACTIONS(182), 1,
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
  [842] = 2,
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
  [861] = 4,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_optionblock,
    ACTIONS(168), 11,
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
  [884] = 2,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 13,
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
    STATE(47), 1,
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
  [1003] = 3,
    ACTIONS(206), 1,
      sym_name,
    STATE(66), 1,
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
  [1023] = 1,
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
  [1039] = 3,
    ACTIONS(212), 1,
      sym_name,
    STATE(38), 1,
      sym_escapechar,
    ACTIONS(210), 11,
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
  [1124] = 2,
    ACTIONS(222), 1,
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
  [1141] = 2,
    ACTIONS(224), 1,
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
  [1158] = 2,
    ACTIONS(226), 1,
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
  [1175] = 4,
    ACTIONS(228), 1,
      aux_sym_command_token1,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    STATE(51), 2,
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
  [1196] = 4,
    ACTIONS(232), 1,
      aux_sym_command_token1,
    ACTIONS(235), 1,
      anon_sym_LBRACK,
    STATE(51), 2,
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
  [1217] = 2,
    ACTIONS(238), 1,
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
  [1234] = 2,
    ACTIONS(240), 1,
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
  [1251] = 2,
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
  [1268] = 2,
    ACTIONS(244), 1,
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
  [1285] = 2,
    ACTIONS(246), 1,
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
  [1302] = 4,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      aux_sym_command_token1,
    STATE(50), 2,
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
  [1323] = 4,
    ACTIONS(186), 1,
      anon_sym_LF,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_optionblock,
    ACTIONS(168), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1342] = 4,
    ACTIONS(137), 1,
      anon_sym_LF,
    ACTIONS(230), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_optionblock,
    ACTIONS(105), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1361] = 1,
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
  [1374] = 1,
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
  [1387] = 1,
    ACTIONS(170), 10,
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
  [1400] = 1,
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
  [1413] = 1,
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
  [1426] = 2,
    ACTIONS(240), 1,
      anon_sym_LF,
    ACTIONS(214), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1439] = 2,
    ACTIONS(222), 1,
      anon_sym_LF,
    ACTIONS(200), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1452] = 2,
    ACTIONS(226), 1,
      anon_sym_LF,
    ACTIONS(196), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1465] = 2,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(208), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1478] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(202), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1491] = 3,
    ACTIONS(250), 1,
      anon_sym_DOLLAR,
    ACTIONS(252), 1,
      sym_math_text,
    STATE(74), 2,
      sym__math_content,
      aux_sym_math_brace_group_repeat1,
  [1502] = 4,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    ACTIONS(258), 1,
      sym_opkey,
    STATE(87), 1,
      sym__options,
  [1515] = 4,
    ACTIONS(258), 1,
      sym_opkey,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym__options,
  [1528] = 3,
    ACTIONS(252), 1,
      sym_math_text,
    ACTIONS(264), 1,
      anon_sym_DOLLAR,
    STATE(74), 2,
      sym__math_content,
      aux_sym_math_brace_group_repeat1,
  [1539] = 3,
    ACTIONS(266), 1,
      anon_sym_DOLLAR,
    ACTIONS(268), 1,
      sym_math_text,
    STATE(74), 2,
      sym__math_content,
      aux_sym_math_brace_group_repeat1,
  [1550] = 4,
    ACTIONS(271), 1,
      aux_sym_command_token1,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    ACTIONS(275), 1,
      sym_opkey,
    STATE(99), 1,
      sym__options,
  [1563] = 4,
    ACTIONS(271), 1,
      aux_sym_command_token1,
    ACTIONS(275), 1,
      sym_opkey,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym__options,
  [1576] = 4,
    ACTIONS(271), 1,
      aux_sym_command_token1,
    ACTIONS(275), 1,
      sym_opkey,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym__options,
  [1589] = 4,
    ACTIONS(271), 1,
      aux_sym_command_token1,
    ACTIONS(275), 1,
      sym_opkey,
    ACTIONS(281), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym__options,
  [1602] = 4,
    ACTIONS(271), 1,
      aux_sym_command_token1,
    ACTIONS(275), 1,
      sym_opkey,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym__options,
  [1615] = 3,
    ACTIONS(285), 1,
      anon_sym_DOLLAR,
    ACTIONS(287), 1,
      sym_math_text,
    STATE(73), 2,
      sym__math_content,
      aux_sym_math_brace_group_repeat1,
  [1626] = 4,
    ACTIONS(271), 1,
      aux_sym_command_token1,
    ACTIONS(275), 1,
      sym_opkey,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      sym__options,
  [1639] = 3,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      sym_math_text,
    STATE(70), 2,
      sym__math_content,
      aux_sym_math_brace_group_repeat1,
  [1650] = 4,
    ACTIONS(258), 1,
      sym_opkey,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym__options,
  [1663] = 3,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_optionblock_repeat1,
  [1673] = 2,
    ACTIONS(305), 1,
      anon_sym_EQ,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1681] = 3,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_optionblock_repeat1,
  [1691] = 3,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_optionblock_repeat1,
  [1701] = 3,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_optionblock_repeat1,
  [1711] = 3,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_optionblock_repeat1,
  [1721] = 3,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_optionblock_repeat1,
  [1731] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_optionblock_repeat1,
  [1741] = 3,
    ACTIONS(271), 1,
      aux_sym_command_token1,
    ACTIONS(275), 1,
      sym_opkey,
    STATE(99), 1,
      sym__options,
  [1751] = 2,
    ACTIONS(332), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_optionblock,
  [1758] = 2,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_optionblock,
  [1765] = 1,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1770] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1775] = 2,
    ACTIONS(258), 1,
      sym_opkey,
    STATE(95), 1,
      sym__options,
  [1782] = 2,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_optionblock,
  [1789] = 1,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1794] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
  [1798] = 1,
    ACTIONS(342), 1,
      ts_builtin_sym_end,
  [1802] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
  [1806] = 1,
    ACTIONS(301), 1,
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
  [SMALL_STATE(21)] = 622,
  [SMALL_STATE(22)] = 652,
  [SMALL_STATE(23)] = 674,
  [SMALL_STATE(24)] = 696,
  [SMALL_STATE(25)] = 714,
  [SMALL_STATE(26)] = 744,
  [SMALL_STATE(27)] = 762,
  [SMALL_STATE(28)] = 781,
  [SMALL_STATE(29)] = 804,
  [SMALL_STATE(30)] = 823,
  [SMALL_STATE(31)] = 842,
  [SMALL_STATE(32)] = 861,
  [SMALL_STATE(33)] = 884,
  [SMALL_STATE(34)] = 903,
  [SMALL_STATE(35)] = 923,
  [SMALL_STATE(36)] = 939,
  [SMALL_STATE(37)] = 955,
  [SMALL_STATE(38)] = 971,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 1003,
  [SMALL_STATE(41)] = 1023,
  [SMALL_STATE(42)] = 1039,
  [SMALL_STATE(43)] = 1059,
  [SMALL_STATE(44)] = 1075,
  [SMALL_STATE(45)] = 1091,
  [SMALL_STATE(46)] = 1107,
  [SMALL_STATE(47)] = 1124,
  [SMALL_STATE(48)] = 1141,
  [SMALL_STATE(49)] = 1158,
  [SMALL_STATE(50)] = 1175,
  [SMALL_STATE(51)] = 1196,
  [SMALL_STATE(52)] = 1217,
  [SMALL_STATE(53)] = 1234,
  [SMALL_STATE(54)] = 1251,
  [SMALL_STATE(55)] = 1268,
  [SMALL_STATE(56)] = 1285,
  [SMALL_STATE(57)] = 1302,
  [SMALL_STATE(58)] = 1323,
  [SMALL_STATE(59)] = 1342,
  [SMALL_STATE(60)] = 1361,
  [SMALL_STATE(61)] = 1374,
  [SMALL_STATE(62)] = 1387,
  [SMALL_STATE(63)] = 1400,
  [SMALL_STATE(64)] = 1413,
  [SMALL_STATE(65)] = 1426,
  [SMALL_STATE(66)] = 1439,
  [SMALL_STATE(67)] = 1452,
  [SMALL_STATE(68)] = 1465,
  [SMALL_STATE(69)] = 1478,
  [SMALL_STATE(70)] = 1491,
  [SMALL_STATE(71)] = 1502,
  [SMALL_STATE(72)] = 1515,
  [SMALL_STATE(73)] = 1528,
  [SMALL_STATE(74)] = 1539,
  [SMALL_STATE(75)] = 1550,
  [SMALL_STATE(76)] = 1563,
  [SMALL_STATE(77)] = 1576,
  [SMALL_STATE(78)] = 1589,
  [SMALL_STATE(79)] = 1602,
  [SMALL_STATE(80)] = 1615,
  [SMALL_STATE(81)] = 1626,
  [SMALL_STATE(82)] = 1639,
  [SMALL_STATE(83)] = 1650,
  [SMALL_STATE(84)] = 1663,
  [SMALL_STATE(85)] = 1673,
  [SMALL_STATE(86)] = 1681,
  [SMALL_STATE(87)] = 1691,
  [SMALL_STATE(88)] = 1701,
  [SMALL_STATE(89)] = 1711,
  [SMALL_STATE(90)] = 1721,
  [SMALL_STATE(91)] = 1731,
  [SMALL_STATE(92)] = 1741,
  [SMALL_STATE(93)] = 1751,
  [SMALL_STATE(94)] = 1758,
  [SMALL_STATE(95)] = 1765,
  [SMALL_STATE(96)] = 1770,
  [SMALL_STATE(97)] = 1775,
  [SMALL_STATE(98)] = 1782,
  [SMALL_STATE(99)] = 1789,
  [SMALL_STATE(100)] = 1794,
  [SMALL_STATE(101)] = 1798,
  [SMALL_STATE(102)] = 1802,
  [SMALL_STATE(103)] = 1806,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(94),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(71),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(93),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(83),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 4),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(65),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(6),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(40),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(21),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(21),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opval, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_group, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(98),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(72),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math_group, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_brace_group_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_math_brace_group_repeat1, 2), SHIFT_REPEAT(74),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2), SHIFT_REPEAT(92),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [342] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
