#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 1
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
  aux_sym_command_group_token1 = 19,
  aux_sym_command_group_token2 = 20,
  sym_math_text = 21,
  sym_command_name = 22,
  anon_sym_LBRACK = 23,
  anon_sym_COMMA = 24,
  anon_sym_RBRACK = 25,
  aux_sym_keyword_token1 = 26,
  anon_sym_EQ = 27,
  anon_sym_title = 28,
  sym_value_text = 29,
  sym_text = 30,
  anon_sym_LF = 31,
  anon_sym_CR = 32,
  anon_sym_CR_LF = 33,
  sym_command_stop = 34,
  sym_document = 35,
  sym__content = 36,
  sym_main_start = 37,
  sym_main_stop = 38,
  sym_comment = 39,
  sym_escapechar = 40,
  sym_escaped = 41,
  sym_brace_group = 42,
  sym_command_group = 43,
  sym_math_group = 44,
  sym__math_content = 45,
  sym_inline_math = 46,
  sym_optionblock = 47,
  sym_keyword = 48,
  sym_settingsblock = 49,
  sym_setting = 50,
  sym_title_setting = 51,
  sym_title_value = 52,
  sym_key = 53,
  sym_value = 54,
  sym__value_content = 55,
  sym_value_brace_group = 56,
  sym_command = 57,
  sym__end_of_line = 58,
  aux_sym_document_repeat1 = 59,
  aux_sym_math_group_repeat1 = 60,
  aux_sym_optionblock_repeat1 = 61,
  aux_sym_settingsblock_repeat1 = 62,
  aux_sym_title_value_repeat1 = 63,
  aux_sym_command_repeat1 = 64,
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
  [aux_sym_command_group_token1] = "command_group_token1",
  [aux_sym_command_group_token2] = "command_group_token2",
  [sym_math_text] = "math_text",
  [sym_command_name] = "command_name",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [aux_sym_keyword_token1] = "keyword_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_title] = "title",
  [sym_value_text] = "value_text",
  [sym_text] = "text",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [sym_command_stop] = "command_stop",
  [sym_document] = "document",
  [sym__content] = "_content",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
  [sym_comment] = "comment",
  [sym_escapechar] = "escapechar",
  [sym_escaped] = "escaped",
  [sym_brace_group] = "brace_group",
  [sym_command_group] = "command_group",
  [sym_math_group] = "math_group",
  [sym__math_content] = "_math_content",
  [sym_inline_math] = "inline_math",
  [sym_optionblock] = "optionblock",
  [sym_keyword] = "keyword",
  [sym_settingsblock] = "settingsblock",
  [sym_setting] = "setting",
  [sym_title_setting] = "title_setting",
  [sym_title_value] = "title_value",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym__value_content] = "_value_content",
  [sym_value_brace_group] = "value_brace_group",
  [sym_command] = "command",
  [sym__end_of_line] = "_end_of_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_math_group_repeat1] = "math_group_repeat1",
  [aux_sym_optionblock_repeat1] = "optionblock_repeat1",
  [aux_sym_settingsblock_repeat1] = "settingsblock_repeat1",
  [aux_sym_title_value_repeat1] = "title_value_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
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
  [aux_sym_command_group_token1] = aux_sym_command_group_token1,
  [aux_sym_command_group_token2] = aux_sym_command_group_token2,
  [sym_math_text] = sym_math_text,
  [sym_command_name] = sym_command_name,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_title] = anon_sym_title,
  [sym_value_text] = sym_value_text,
  [sym_text] = sym_text,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_command_stop] = sym_command_stop,
  [sym_document] = sym_document,
  [sym__content] = sym__content,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
  [sym_comment] = sym_comment,
  [sym_escapechar] = sym_escapechar,
  [sym_escaped] = sym_escaped,
  [sym_brace_group] = sym_brace_group,
  [sym_command_group] = sym_command_group,
  [sym_math_group] = sym_math_group,
  [sym__math_content] = sym__math_content,
  [sym_inline_math] = sym_inline_math,
  [sym_optionblock] = sym_optionblock,
  [sym_keyword] = sym_keyword,
  [sym_settingsblock] = sym_settingsblock,
  [sym_setting] = sym_setting,
  [sym_title_setting] = sym_title_setting,
  [sym_title_value] = sym_title_value,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym__value_content] = sym__value_content,
  [sym_value_brace_group] = sym_value_brace_group,
  [sym_command] = sym_command,
  [sym__end_of_line] = sym__end_of_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_math_group_repeat1] = aux_sym_math_group_repeat1,
  [aux_sym_optionblock_repeat1] = aux_sym_optionblock_repeat1,
  [aux_sym_settingsblock_repeat1] = aux_sym_settingsblock_repeat1,
  [aux_sym_title_value_repeat1] = aux_sym_title_value_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
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
  [aux_sym_command_group_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_group_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_math_text] = {
    .visible = true,
    .named = true,
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
  [aux_sym_keyword_token1] = {
    .visible = false,
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
  [sym_value_text] = {
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
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_command_stop] = {
    .visible = true,
    .named = true,
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
  [sym_command_group] = {
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
  [sym_optionblock] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_settingsblock] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_title_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_title_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__value_content] = {
    .visible = false,
    .named = true,
  },
  [sym_value_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_line] = {
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
  [aux_sym_optionblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settingsblock_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
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
      if (eof) ADVANCE(52);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '[') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(104);
      if (lookahead == '%') ADVANCE(57);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(98);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '%') ADVANCE(62);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '^') ADVANCE(64);
      if (lookahead == '_') ADVANCE(65);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '|') ADVANCE(68);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '~') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(94);
      END_STATE();
    case 7:
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(94);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(30);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(48);
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
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == '%') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead == '{') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(98);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(59);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(59);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_command_group_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_command_group_token2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_value_text);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(101);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(99);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 51},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 51},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 51},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 51},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 51},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 51},
  [55] = {.lex_state = 51},
  [56] = {.lex_state = 51},
  [57] = {.lex_state = 51},
  [58] = {.lex_state = 51},
  [59] = {.lex_state = 51},
  [60] = {.lex_state = 51},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
};

enum {
  ts_external_token_command_stop = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_command_stop] = sym_command_stop,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_command_stop] = true,
  },
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
    [aux_sym_command_group_token1] = ACTIONS(1),
    [aux_sym_command_group_token2] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [sym_command_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(127),
    [sym__content] = STATE(14),
    [sym_main_start] = STATE(14),
    [sym_main_stop] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_brace_group] = STATE(14),
    [sym_command_group] = STATE(14),
    [sym_inline_math] = STATE(14),
    [sym_command] = STATE(14),
    [sym__end_of_line] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [anon_sym_BSLASHstarttext] = ACTIONS(3),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(3),
    [anon_sym_BSLASHstoptext] = ACTIONS(5),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_BSLASHbgroup] = ACTIONS(11),
    [aux_sym_command_group_token1] = ACTIONS(15),
    [sym_text] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_CR] = ACTIONS(17),
    [anon_sym_CR_LF] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(23), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      aux_sym_command_group_token1,
    ACTIONS(19), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(21), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(29), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(35), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(3), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [48] = 10,
    ACTIONS(23), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      aux_sym_command_group_token1,
    ACTIONS(19), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(21), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(37), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(39), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(7), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [96] = 10,
    ACTIONS(23), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      aux_sym_command_group_token1,
    ACTIONS(19), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(21), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(43), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(8), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [144] = 10,
    ACTIONS(23), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      aux_sym_command_group_token1,
    ACTIONS(19), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(21), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(39), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(7), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [192] = 10,
    ACTIONS(23), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      aux_sym_command_group_token1,
    ACTIONS(19), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(21), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(47), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(49), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(5), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [240] = 10,
    ACTIONS(57), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_DOLLAR,
    ACTIONS(68), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      aux_sym_command_group_token1,
    ACTIONS(51), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(54), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(63), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(66), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(74), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(7), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [288] = 10,
    ACTIONS(23), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_DOLLAR,
    ACTIONS(31), 1,
      anon_sym_BSLASH,
    ACTIONS(33), 1,
      aux_sym_command_group_token1,
    ACTIONS(19), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(21), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(77), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(39), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(7), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [336] = 10,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym_command_group_token1,
    ACTIONS(93), 1,
      aux_sym_command_group_token2,
    ACTIONS(79), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(81), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(87), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(16), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [383] = 10,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym_command_group_token1,
    ACTIONS(97), 1,
      aux_sym_command_group_token2,
    ACTIONS(79), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(81), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(87), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(99), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(11), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [430] = 10,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym_command_group_token1,
    ACTIONS(101), 1,
      aux_sym_command_group_token2,
    ACTIONS(79), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(81), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(87), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(16), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [477] = 10,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym_command_group_token1,
    ACTIONS(103), 1,
      aux_sym_command_group_token2,
    ACTIONS(79), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(81), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(87), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(105), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(9), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [524] = 10,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym_command_group_token1,
    ACTIONS(107), 1,
      aux_sym_command_group_token2,
    ACTIONS(79), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(81), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(87), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(16), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [571] = 10,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      aux_sym_command_group_token1,
    ACTIONS(109), 1,
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
    ACTIONS(111), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(17), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [618] = 10,
    ACTIONS(83), 1,
      aux_sym_comment_token1,
    ACTIONS(85), 1,
      anon_sym_DOLLAR,
    ACTIONS(89), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym_command_group_token1,
    ACTIONS(113), 1,
      aux_sym_command_group_token2,
    ACTIONS(79), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(81), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(87), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(115), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(13), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [665] = 10,
    ACTIONS(66), 1,
      aux_sym_command_group_token2,
    ACTIONS(123), 1,
      aux_sym_comment_token1,
    ACTIONS(126), 1,
      anon_sym_DOLLAR,
    ACTIONS(132), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      aux_sym_command_group_token1,
    ACTIONS(117), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(120), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(129), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(138), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(16), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [712] = 10,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      aux_sym_comment_token1,
    ACTIONS(152), 1,
      anon_sym_DOLLAR,
    ACTIONS(158), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      aux_sym_command_group_token1,
    ACTIONS(143), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(146), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(155), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(164), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(17), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [759] = 6,
    ACTIONS(167), 1,
      aux_sym_comment_token1,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(178), 4,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(18), 7,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [789] = 7,
    ACTIONS(181), 1,
      aux_sym_comment_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_BSLASH,
    STATE(121), 1,
      sym_value,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(189), 4,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(23), 7,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [821] = 7,
    ACTIONS(181), 1,
      aux_sym_comment_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_BSLASH,
    STATE(113), 1,
      sym_title_value,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(193), 4,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(28), 7,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [853] = 1,
    ACTIONS(195), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [872] = 1,
    ACTIONS(197), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [891] = 6,
    ACTIONS(181), 1,
      aux_sym_comment_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_BSLASH,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(201), 4,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(18), 7,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [920] = 1,
    ACTIONS(203), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [939] = 1,
    ACTIONS(205), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [958] = 1,
    ACTIONS(207), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [977] = 1,
    ACTIONS(209), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [996] = 6,
    ACTIONS(181), 1,
      aux_sym_comment_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_BSLASH,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(201), 4,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(18), 7,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [1025] = 1,
    ACTIONS(213), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1044] = 1,
    ACTIONS(215), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1063] = 1,
    ACTIONS(217), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1082] = 1,
    ACTIONS(219), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1101] = 1,
    ACTIONS(221), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1120] = 1,
    ACTIONS(223), 16,
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
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1139] = 2,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1159] = 6,
    ACTIONS(181), 1,
      aux_sym_comment_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_BSLASH,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 4,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(48), 7,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [1187] = 1,
    ACTIONS(207), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1205] = 1,
    ACTIONS(195), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1223] = 2,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1243] = 1,
    ACTIONS(197), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1261] = 1,
    ACTIONS(203), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1279] = 1,
    ACTIONS(219), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1297] = 1,
    ACTIONS(217), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1315] = 1,
    ACTIONS(205), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1333] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1353] = 1,
    ACTIONS(223), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1371] = 1,
    ACTIONS(213), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1389] = 6,
    ACTIONS(181), 1,
      aux_sym_comment_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_BSLASH,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 4,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(18), 7,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [1417] = 2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1437] = 1,
    ACTIONS(209), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1455] = 1,
    ACTIONS(215), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1473] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1493] = 1,
    ACTIONS(221), 15,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      aux_sym_command_group_token2,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1511] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1531] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1551] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1571] = 2,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1591] = 2,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1611] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1631] = 2,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 14,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      aux_sym_command_group_token1,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1651] = 3,
    ACTIONS(257), 1,
      sym_command_name,
    STATE(58), 1,
      sym_escapechar,
    ACTIONS(255), 11,
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
  [1671] = 3,
    ACTIONS(261), 1,
      sym_command_name,
    STATE(77), 1,
      sym_escapechar,
    ACTIONS(259), 11,
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
  [1691] = 3,
    ACTIONS(265), 1,
      sym_command_name,
    STATE(46), 1,
      sym_escapechar,
    ACTIONS(263), 11,
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
  [1711] = 3,
    ACTIONS(269), 1,
      sym_command_name,
    STATE(34), 1,
      sym_escapechar,
    ACTIONS(267), 11,
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
  [1731] = 2,
    STATE(84), 1,
      sym_escapechar,
    ACTIONS(271), 11,
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
  [1748] = 6,
    ACTIONS(273), 1,
      aux_sym_comment_token1,
    ACTIONS(278), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      sym_math_text,
    ACTIONS(276), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(66), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1772] = 1,
    ACTIONS(287), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1785] = 1,
    ACTIONS(219), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1798] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(291), 1,
      anon_sym_DOLLAR,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      sym_math_text,
    STATE(66), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1821] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      sym_math_text,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(66), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1844] = 1,
    ACTIONS(209), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1857] = 1,
    ACTIONS(301), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1870] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      sym_math_text,
    ACTIONS(303), 1,
      anon_sym_DOLLAR,
    STATE(66), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1893] = 1,
    ACTIONS(195), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1906] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(297), 1,
      sym_math_text,
    ACTIONS(305), 1,
      anon_sym_DOLLAR,
    STATE(66), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1929] = 1,
    ACTIONS(217), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1942] = 1,
    ACTIONS(223), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_value_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1955] = 6,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    ACTIONS(309), 1,
      sym_math_text,
    STATE(70), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1978] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      sym_math_text,
    STATE(75), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [1998] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(313), 1,
      sym_math_text,
    STATE(73), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [2018] = 5,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_math_text,
    STATE(69), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [2038] = 7,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    ACTIONS(321), 1,
      aux_sym_keyword_token1,
    ACTIONS(323), 1,
      anon_sym_title,
    STATE(103), 1,
      sym_keyword,
    STATE(123), 1,
      sym_key,
    STATE(102), 2,
      sym_setting,
      sym_title_setting,
  [2061] = 5,
    ACTIONS(323), 1,
      anon_sym_title,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    ACTIONS(327), 1,
      aux_sym_keyword_token1,
    STATE(123), 1,
      sym_key,
    STATE(119), 2,
      sym_setting,
      sym_title_setting,
  [2078] = 1,
    ACTIONS(223), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [2087] = 1,
    ACTIONS(219), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [2096] = 1,
    ACTIONS(217), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [2105] = 1,
    ACTIONS(329), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [2114] = 1,
    ACTIONS(331), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [2123] = 5,
    ACTIONS(323), 1,
      anon_sym_title,
    ACTIONS(327), 1,
      aux_sym_keyword_token1,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_key,
    STATE(119), 2,
      sym_setting,
      sym_title_setting,
  [2140] = 3,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(337), 1,
      sym_command_stop,
    STATE(99), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2152] = 3,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      sym_command_stop,
    STATE(96), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2164] = 3,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(341), 1,
      sym_command_stop,
    STATE(96), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2176] = 3,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(343), 1,
      sym_command_stop,
    STATE(92), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2188] = 3,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      sym_command_stop,
    STATE(91), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2200] = 4,
    ACTIONS(323), 1,
      anon_sym_title,
    ACTIONS(327), 1,
      aux_sym_keyword_token1,
    STATE(123), 1,
      sym_key,
    STATE(119), 2,
      sym_setting,
      sym_title_setting,
  [2214] = 3,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      sym_command_stop,
    STATE(96), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2226] = 3,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      sym_command_stop,
    STATE(98), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2238] = 3,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_command_stop,
    STATE(96), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2250] = 3,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_command_stop,
    STATE(96), 3,
      sym_optionblock,
      sym_settingsblock,
      aux_sym_command_repeat1,
  [2262] = 3,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    ACTIONS(360), 1,
      aux_sym_keyword_token1,
    STATE(116), 1,
      sym_keyword,
  [2272] = 2,
    ACTIONS(364), 1,
      anon_sym_EQ,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2280] = 3,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_settingsblock_repeat1,
  [2290] = 3,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_optionblock_repeat1,
  [2300] = 3,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      aux_sym_settingsblock_repeat1,
  [2310] = 3,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_optionblock_repeat1,
  [2320] = 3,
    ACTIONS(360), 1,
      aux_sym_keyword_token1,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(116), 1,
      sym_keyword,
  [2330] = 3,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_settingsblock_repeat1,
  [2340] = 3,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_optionblock_repeat1,
  [2350] = 1,
    ACTIONS(390), 2,
      sym_command_stop,
      anon_sym_LBRACK,
  [2355] = 1,
    ACTIONS(392), 2,
      sym_command_stop,
      anon_sym_LBRACK,
  [2360] = 1,
    ACTIONS(390), 2,
      sym_command_stop,
      anon_sym_LBRACK,
  [2365] = 1,
    ACTIONS(394), 2,
      sym_command_stop,
      anon_sym_LBRACK,
  [2370] = 1,
    ACTIONS(396), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2375] = 1,
    ACTIONS(398), 2,
      sym_command_stop,
      anon_sym_LBRACK,
  [2380] = 1,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2385] = 1,
    ACTIONS(382), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2390] = 1,
    ACTIONS(400), 2,
      sym_command_stop,
      anon_sym_LBRACK,
  [2395] = 1,
    ACTIONS(402), 2,
      sym_command_stop,
      anon_sym_LBRACK,
  [2400] = 1,
    ACTIONS(377), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2405] = 2,
    ACTIONS(360), 1,
      aux_sym_keyword_token1,
    STATE(116), 1,
      sym_keyword,
  [2412] = 1,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2417] = 1,
    ACTIONS(406), 2,
      sym_command_stop,
      anon_sym_LBRACK,
  [2422] = 1,
    ACTIONS(408), 1,
      anon_sym_EQ,
  [2426] = 1,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
  [2430] = 1,
    ACTIONS(412), 1,
      anon_sym_EQ,
  [2434] = 1,
    ACTIONS(364), 1,
      anon_sym_EQ,
  [2438] = 1,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 288,
  [SMALL_STATE(9)] = 336,
  [SMALL_STATE(10)] = 383,
  [SMALL_STATE(11)] = 430,
  [SMALL_STATE(12)] = 477,
  [SMALL_STATE(13)] = 524,
  [SMALL_STATE(14)] = 571,
  [SMALL_STATE(15)] = 618,
  [SMALL_STATE(16)] = 665,
  [SMALL_STATE(17)] = 712,
  [SMALL_STATE(18)] = 759,
  [SMALL_STATE(19)] = 789,
  [SMALL_STATE(20)] = 821,
  [SMALL_STATE(21)] = 853,
  [SMALL_STATE(22)] = 872,
  [SMALL_STATE(23)] = 891,
  [SMALL_STATE(24)] = 920,
  [SMALL_STATE(25)] = 939,
  [SMALL_STATE(26)] = 958,
  [SMALL_STATE(27)] = 977,
  [SMALL_STATE(28)] = 996,
  [SMALL_STATE(29)] = 1025,
  [SMALL_STATE(30)] = 1044,
  [SMALL_STATE(31)] = 1063,
  [SMALL_STATE(32)] = 1082,
  [SMALL_STATE(33)] = 1101,
  [SMALL_STATE(34)] = 1120,
  [SMALL_STATE(35)] = 1139,
  [SMALL_STATE(36)] = 1159,
  [SMALL_STATE(37)] = 1187,
  [SMALL_STATE(38)] = 1205,
  [SMALL_STATE(39)] = 1223,
  [SMALL_STATE(40)] = 1243,
  [SMALL_STATE(41)] = 1261,
  [SMALL_STATE(42)] = 1279,
  [SMALL_STATE(43)] = 1297,
  [SMALL_STATE(44)] = 1315,
  [SMALL_STATE(45)] = 1333,
  [SMALL_STATE(46)] = 1353,
  [SMALL_STATE(47)] = 1371,
  [SMALL_STATE(48)] = 1389,
  [SMALL_STATE(49)] = 1417,
  [SMALL_STATE(50)] = 1437,
  [SMALL_STATE(51)] = 1455,
  [SMALL_STATE(52)] = 1473,
  [SMALL_STATE(53)] = 1493,
  [SMALL_STATE(54)] = 1511,
  [SMALL_STATE(55)] = 1531,
  [SMALL_STATE(56)] = 1551,
  [SMALL_STATE(57)] = 1571,
  [SMALL_STATE(58)] = 1591,
  [SMALL_STATE(59)] = 1611,
  [SMALL_STATE(60)] = 1631,
  [SMALL_STATE(61)] = 1651,
  [SMALL_STATE(62)] = 1671,
  [SMALL_STATE(63)] = 1691,
  [SMALL_STATE(64)] = 1711,
  [SMALL_STATE(65)] = 1731,
  [SMALL_STATE(66)] = 1748,
  [SMALL_STATE(67)] = 1772,
  [SMALL_STATE(68)] = 1785,
  [SMALL_STATE(69)] = 1798,
  [SMALL_STATE(70)] = 1821,
  [SMALL_STATE(71)] = 1844,
  [SMALL_STATE(72)] = 1857,
  [SMALL_STATE(73)] = 1870,
  [SMALL_STATE(74)] = 1893,
  [SMALL_STATE(75)] = 1906,
  [SMALL_STATE(76)] = 1929,
  [SMALL_STATE(77)] = 1942,
  [SMALL_STATE(78)] = 1955,
  [SMALL_STATE(79)] = 1978,
  [SMALL_STATE(80)] = 1998,
  [SMALL_STATE(81)] = 2018,
  [SMALL_STATE(82)] = 2038,
  [SMALL_STATE(83)] = 2061,
  [SMALL_STATE(84)] = 2078,
  [SMALL_STATE(85)] = 2087,
  [SMALL_STATE(86)] = 2096,
  [SMALL_STATE(87)] = 2105,
  [SMALL_STATE(88)] = 2114,
  [SMALL_STATE(89)] = 2123,
  [SMALL_STATE(90)] = 2140,
  [SMALL_STATE(91)] = 2152,
  [SMALL_STATE(92)] = 2164,
  [SMALL_STATE(93)] = 2176,
  [SMALL_STATE(94)] = 2188,
  [SMALL_STATE(95)] = 2200,
  [SMALL_STATE(96)] = 2214,
  [SMALL_STATE(97)] = 2226,
  [SMALL_STATE(98)] = 2238,
  [SMALL_STATE(99)] = 2250,
  [SMALL_STATE(100)] = 2262,
  [SMALL_STATE(101)] = 2272,
  [SMALL_STATE(102)] = 2280,
  [SMALL_STATE(103)] = 2290,
  [SMALL_STATE(104)] = 2300,
  [SMALL_STATE(105)] = 2310,
  [SMALL_STATE(106)] = 2320,
  [SMALL_STATE(107)] = 2330,
  [SMALL_STATE(108)] = 2340,
  [SMALL_STATE(109)] = 2350,
  [SMALL_STATE(110)] = 2355,
  [SMALL_STATE(111)] = 2360,
  [SMALL_STATE(112)] = 2365,
  [SMALL_STATE(113)] = 2370,
  [SMALL_STATE(114)] = 2375,
  [SMALL_STATE(115)] = 2380,
  [SMALL_STATE(116)] = 2385,
  [SMALL_STATE(117)] = 2390,
  [SMALL_STATE(118)] = 2395,
  [SMALL_STATE(119)] = 2400,
  [SMALL_STATE(120)] = 2405,
  [SMALL_STATE(121)] = 2412,
  [SMALL_STATE(122)] = 2417,
  [SMALL_STATE(123)] = 2422,
  [SMALL_STATE(124)] = 2426,
  [SMALL_STATE(125)] = 2430,
  [SMALL_STATE(126)] = 2434,
  [SMALL_STATE(127)] = 2438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(76),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(36),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(62),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(18),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(86),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(78),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(65),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(66),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(82),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settingsblock_repeat1, 2), SHIFT_REPEAT(95),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settingsblock_repeat1, 2),
  [379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2), SHIFT_REPEAT(120),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settingsblock, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settingsblock, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 3),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_setting, 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 5),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settingsblock, 4),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settingsblock, 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [414] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
