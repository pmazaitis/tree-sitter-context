#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  aux_sym_command_token1 = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  anon_sym_EQ = 21,
  sym_opkey = 22,
  sym_text = 23,
  sym_optext = 24,
  sym_name = 25,
  anon_sym_LF = 26,
  sym_document = 27,
  sym_main_start = 28,
  sym_main_stop = 29,
  sym__content = 30,
  sym__opcontent = 31,
  sym_comment = 32,
  sym_escapechar = 33,
  sym_escaped = 34,
  sym_group = 35,
  sym_command = 36,
  sym_optionblock = 37,
  sym__options = 38,
  sym_opval = 39,
  sym__newline = 40,
  aux_sym_document_repeat1 = 41,
  aux_sym_command_repeat1 = 42,
  aux_sym_optionblock_repeat1 = 43,
  aux_sym_opval_repeat1 = 44,
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
  [aux_sym_command_token1] = "command_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_opkey] = "opkey",
  [sym_text] = "text",
  [sym_optext] = "optext",
  [sym_name] = "name",
  [anon_sym_LF] = "\n",
  [sym_document] = "document",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
  [sym__content] = "_content",
  [sym__opcontent] = "_opcontent",
  [sym_comment] = "comment",
  [sym_escapechar] = "escapechar",
  [sym_escaped] = "escaped",
  [sym_group] = "group",
  [sym_command] = "command",
  [sym_optionblock] = "optionblock",
  [sym__options] = "_options",
  [sym_opval] = "opval",
  [sym__newline] = "_newline",
  [aux_sym_document_repeat1] = "document_repeat1",
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
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_opkey] = sym_opkey,
  [sym_text] = sym_text,
  [sym_optext] = sym_optext,
  [sym_name] = sym_name,
  [anon_sym_LF] = anon_sym_LF,
  [sym_document] = sym_document,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
  [sym__content] = sym__content,
  [sym__opcontent] = sym__opcontent,
  [sym_comment] = sym_comment,
  [sym_escapechar] = sym_escapechar,
  [sym_escaped] = sym_escaped,
  [sym_group] = sym_group,
  [sym_command] = sym_command,
  [sym_optionblock] = sym_optionblock,
  [sym__options] = sym__options,
  [sym_opval] = sym_opval,
  [sym__newline] = sym__newline,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
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
  [sym_group] = {
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
      if (eof) ADVANCE(37);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(66);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '%') ADVANCE(42);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(4)
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '$') ADVANCE(45);
      if (lookahead == '%') ADVANCE(46);
      if (lookahead == '&') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(54);
      if (lookahead == '^') ADVANCE(48);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 33:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(65);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '%') ADVANCE(43);
      if (lookahead == '[') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '{') ADVANCE(50);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(65);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_optext);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 36},
  [16] = {.lex_state = 36},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 36},
  [19] = {.lex_state = 36},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 36},
  [24] = {.lex_state = 36},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 36},
  [27] = {.lex_state = 36},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 36},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 36},
  [35] = {.lex_state = 36},
  [36] = {.lex_state = 36},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 35},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 35},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 35},
  [52] = {.lex_state = 35},
  [53] = {.lex_state = 35},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(91),
    [sym_main_start] = STATE(7),
    [sym_main_stop] = STATE(7),
    [sym__content] = STATE(7),
    [sym_comment] = STATE(7),
    [sym_escaped] = STATE(7),
    [sym_group] = STATE(7),
    [sym_command] = STATE(7),
    [sym__newline] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [anon_sym_BSLASHstarttext] = ACTIONS(3),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(3),
    [anon_sym_BSLASHstoptext] = ACTIONS(5),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(17), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [36] = 8,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(38), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_BSLASH,
    ACTIONS(29), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(32), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(46), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [72] = 8,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(17), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(51), 2,
      sym_text,
      anon_sym_LF,
    STATE(2), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [108] = 8,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(17), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(55), 2,
      sym_text,
      anon_sym_LF,
    STATE(9), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [144] = 8,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(17), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [180] = 8,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(5), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(61), 2,
      sym_text,
      anon_sym_LF,
    STATE(10), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [216] = 8,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(17), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(65), 2,
      sym_text,
      anon_sym_LF,
    STATE(6), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [252] = 8,
    ACTIONS(19), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BSLASH,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(17), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(27), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [288] = 8,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      aux_sym_comment_token1,
    ACTIONS(80), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(74), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(86), 2,
      sym_text,
      anon_sym_LF,
    STATE(10), 9,
      sym_main_start,
      sym_main_stop,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [324] = 8,
    ACTIONS(89), 1,
      aux_sym_comment_token1,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    ACTIONS(97), 1,
      sym_optext,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_opval,
    ACTIONS(95), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(17), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [356] = 5,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      aux_sym_command_token1,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    STATE(12), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(103), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [381] = 5,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      aux_sym_command_token1,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(12), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(113), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [406] = 7,
    ACTIONS(119), 1,
      aux_sym_comment_token1,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      sym_optext,
    ACTIONS(133), 1,
      anon_sym_LF,
    ACTIONS(128), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(14), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [435] = 5,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(140), 1,
      aux_sym_command_token1,
    STATE(13), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(138), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [460] = 4,
    ACTIONS(142), 1,
      aux_sym_command_token1,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(113), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [483] = 7,
    ACTIONS(89), 1,
      aux_sym_comment_token1,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_BSLASH,
    ACTIONS(148), 1,
      sym_optext,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(14), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [512] = 4,
    ACTIONS(152), 1,
      aux_sym_command_token1,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(103), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [535] = 4,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      aux_sym_command_token1,
    STATE(16), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(138), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [558] = 3,
    ACTIONS(162), 1,
      sym_name,
    STATE(64), 1,
      sym_escapechar,
    ACTIONS(160), 11,
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
  [578] = 3,
    ACTIONS(166), 1,
      sym_name,
    STATE(48), 1,
      sym_escapechar,
    ACTIONS(164), 11,
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
  [598] = 3,
    ACTIONS(170), 1,
      sym_name,
    STATE(53), 1,
      sym_escapechar,
    ACTIONS(168), 11,
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
  [618] = 2,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [635] = 2,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [652] = 4,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      ts_builtin_sym_end,
    STATE(23), 1,
      sym_optionblock,
    ACTIONS(178), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [673] = 1,
    ACTIONS(174), 12,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [688] = 2,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [705] = 1,
    ACTIONS(103), 12,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [720] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_optionblock,
    ACTIONS(178), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [739] = 2,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [756] = 1,
    ACTIONS(182), 12,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [771] = 4,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_optionblock,
    ACTIONS(113), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [792] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_optionblock,
    ACTIONS(113), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [811] = 2,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 11,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [828] = 1,
    ACTIONS(186), 12,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [843] = 1,
    ACTIONS(190), 12,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [858] = 4,
    ACTIONS(192), 1,
      aux_sym_command_token1,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(38), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(138), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [878] = 4,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    ACTIONS(196), 1,
      aux_sym_command_token1,
    STATE(39), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(113), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [898] = 4,
    ACTIONS(198), 1,
      aux_sym_command_token1,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    STATE(39), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(103), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [918] = 2,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    ACTIONS(206), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [933] = 2,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(210), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [948] = 2,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [963] = 1,
    ACTIONS(216), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [976] = 1,
    ACTIONS(218), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [989] = 1,
    ACTIONS(214), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1002] = 1,
    ACTIONS(210), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1015] = 1,
    ACTIONS(206), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1028] = 1,
    ACTIONS(220), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1041] = 2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1056] = 1,
    ACTIONS(224), 10,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1069] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(216), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1084] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1099] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 9,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [1114] = 1,
    ACTIONS(174), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1126] = 4,
    ACTIONS(111), 1,
      anon_sym_LF,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_optionblock,
    ACTIONS(113), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1144] = 1,
    ACTIONS(103), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1156] = 4,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(194), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_optionblock,
    ACTIONS(178), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1174] = 1,
    ACTIONS(182), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1186] = 1,
    ACTIONS(190), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1198] = 1,
    ACTIONS(186), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [1210] = 2,
    ACTIONS(212), 1,
      anon_sym_LF,
    ACTIONS(214), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1222] = 2,
    ACTIONS(208), 1,
      anon_sym_LF,
    ACTIONS(210), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1234] = 2,
    ACTIONS(204), 1,
      anon_sym_LF,
    ACTIONS(206), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1246] = 2,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(220), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1258] = 2,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(224), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [1270] = 4,
    ACTIONS(232), 1,
      aux_sym_command_token1,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    ACTIONS(236), 1,
      sym_opkey,
    STATE(88), 1,
      sym__options,
  [1283] = 4,
    ACTIONS(232), 1,
      aux_sym_command_token1,
    ACTIONS(236), 1,
      sym_opkey,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym__options,
  [1296] = 4,
    ACTIONS(232), 1,
      aux_sym_command_token1,
    ACTIONS(236), 1,
      sym_opkey,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym__options,
  [1309] = 4,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    ACTIONS(246), 1,
      sym_opkey,
    STATE(81), 1,
      sym__options,
  [1322] = 4,
    ACTIONS(232), 1,
      aux_sym_command_token1,
    ACTIONS(236), 1,
      sym_opkey,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym__options,
  [1335] = 4,
    ACTIONS(246), 1,
      sym_opkey,
    ACTIONS(250), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    STATE(76), 1,
      sym__options,
  [1348] = 4,
    ACTIONS(232), 1,
      aux_sym_command_token1,
    ACTIONS(236), 1,
      sym_opkey,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym__options,
  [1361] = 4,
    ACTIONS(232), 1,
      aux_sym_command_token1,
    ACTIONS(236), 1,
      sym_opkey,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym__options,
  [1374] = 4,
    ACTIONS(246), 1,
      sym_opkey,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym__options,
  [1387] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_optionblock_repeat1,
  [1397] = 3,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_optionblock_repeat1,
  [1407] = 3,
    ACTIONS(232), 1,
      aux_sym_command_token1,
    ACTIONS(236), 1,
      sym_opkey,
    STATE(88), 1,
      sym__options,
  [1417] = 3,
    ACTIONS(270), 1,
      anon_sym_COMMA,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      aux_sym_optionblock_repeat1,
  [1427] = 3,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_optionblock_repeat1,
  [1437] = 2,
    ACTIONS(280), 1,
      anon_sym_EQ,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1445] = 3,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_optionblock_repeat1,
  [1455] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_optionblock_repeat1,
  [1465] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      aux_sym_optionblock_repeat1,
  [1475] = 2,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_optionblock,
  [1482] = 2,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_optionblock,
  [1489] = 1,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1494] = 2,
    ACTIONS(246), 1,
      sym_opkey,
    STATE(90), 1,
      sym__options,
  [1501] = 1,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1506] = 2,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_optionblock,
  [1513] = 1,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1518] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [1522] = 1,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
  [1526] = 1,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
  [1530] = 1,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 216,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 288,
  [SMALL_STATE(11)] = 324,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 381,
  [SMALL_STATE(14)] = 406,
  [SMALL_STATE(15)] = 435,
  [SMALL_STATE(16)] = 460,
  [SMALL_STATE(17)] = 483,
  [SMALL_STATE(18)] = 512,
  [SMALL_STATE(19)] = 535,
  [SMALL_STATE(20)] = 558,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 598,
  [SMALL_STATE(23)] = 618,
  [SMALL_STATE(24)] = 635,
  [SMALL_STATE(25)] = 652,
  [SMALL_STATE(26)] = 673,
  [SMALL_STATE(27)] = 688,
  [SMALL_STATE(28)] = 705,
  [SMALL_STATE(29)] = 720,
  [SMALL_STATE(30)] = 739,
  [SMALL_STATE(31)] = 756,
  [SMALL_STATE(32)] = 771,
  [SMALL_STATE(33)] = 792,
  [SMALL_STATE(34)] = 811,
  [SMALL_STATE(35)] = 828,
  [SMALL_STATE(36)] = 843,
  [SMALL_STATE(37)] = 858,
  [SMALL_STATE(38)] = 878,
  [SMALL_STATE(39)] = 898,
  [SMALL_STATE(40)] = 918,
  [SMALL_STATE(41)] = 933,
  [SMALL_STATE(42)] = 948,
  [SMALL_STATE(43)] = 963,
  [SMALL_STATE(44)] = 976,
  [SMALL_STATE(45)] = 989,
  [SMALL_STATE(46)] = 1002,
  [SMALL_STATE(47)] = 1015,
  [SMALL_STATE(48)] = 1028,
  [SMALL_STATE(49)] = 1041,
  [SMALL_STATE(50)] = 1056,
  [SMALL_STATE(51)] = 1069,
  [SMALL_STATE(52)] = 1084,
  [SMALL_STATE(53)] = 1099,
  [SMALL_STATE(54)] = 1114,
  [SMALL_STATE(55)] = 1126,
  [SMALL_STATE(56)] = 1144,
  [SMALL_STATE(57)] = 1156,
  [SMALL_STATE(58)] = 1174,
  [SMALL_STATE(59)] = 1186,
  [SMALL_STATE(60)] = 1198,
  [SMALL_STATE(61)] = 1210,
  [SMALL_STATE(62)] = 1222,
  [SMALL_STATE(63)] = 1234,
  [SMALL_STATE(64)] = 1246,
  [SMALL_STATE(65)] = 1258,
  [SMALL_STATE(66)] = 1270,
  [SMALL_STATE(67)] = 1283,
  [SMALL_STATE(68)] = 1296,
  [SMALL_STATE(69)] = 1309,
  [SMALL_STATE(70)] = 1322,
  [SMALL_STATE(71)] = 1335,
  [SMALL_STATE(72)] = 1348,
  [SMALL_STATE(73)] = 1361,
  [SMALL_STATE(74)] = 1374,
  [SMALL_STATE(75)] = 1387,
  [SMALL_STATE(76)] = 1397,
  [SMALL_STATE(77)] = 1407,
  [SMALL_STATE(78)] = 1417,
  [SMALL_STATE(79)] = 1427,
  [SMALL_STATE(80)] = 1437,
  [SMALL_STATE(81)] = 1445,
  [SMALL_STATE(82)] = 1455,
  [SMALL_STATE(83)] = 1465,
  [SMALL_STATE(84)] = 1475,
  [SMALL_STATE(85)] = 1482,
  [SMALL_STATE(86)] = 1489,
  [SMALL_STATE(87)] = 1494,
  [SMALL_STATE(88)] = 1501,
  [SMALL_STATE(89)] = 1506,
  [SMALL_STATE(90)] = 1513,
  [SMALL_STATE(91)] = 1518,
  [SMALL_STATE(92)] = 1522,
  [SMALL_STATE(93)] = 1526,
  [SMALL_STATE(94)] = 1530,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(42),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(84),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(71),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(61),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(8),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(20),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(14),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(14),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opval, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(85),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(74),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 5),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 4),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(89),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(69),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2), SHIFT_REPEAT(77),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 3),
  [305] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
