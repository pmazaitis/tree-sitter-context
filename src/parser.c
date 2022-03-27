#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_comment_token1 = 1,
  anon_sym_POUND = 2,
  anon_sym_DOLLAR = 3,
  anon_sym_PERCENT = 4,
  anon_sym_AMP = 5,
  anon_sym_CARET = 6,
  anon_sym__ = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_PIPE = 10,
  anon_sym_TILDE = 11,
  anon_sym_BSLASH = 12,
  aux_sym_command_token1 = 13,
  anon_sym_LBRACK = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACK = 16,
  anon_sym_EQ = 17,
  sym_opkey = 18,
  sym_text = 19,
  sym_optext = 20,
  sym_name = 21,
  anon_sym_LF = 22,
  sym_document = 23,
  sym__content = 24,
  sym__opcontent = 25,
  sym_comment = 26,
  sym_escapechar = 27,
  sym_escaped = 28,
  sym_group = 29,
  sym_command = 30,
  sym_optionblock = 31,
  sym__options = 32,
  sym_opval = 33,
  sym__newline = 34,
  aux_sym_document_repeat1 = 35,
  aux_sym_command_repeat1 = 36,
  aux_sym_optionblock_repeat1 = 37,
  aux_sym_opval_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
      if (eof) ADVANCE(7);
      if (lookahead == '#') ADVANCE(10);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '%') ADVANCE(12);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(18);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(34);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(28);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(30);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '[') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(30);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_opkey);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_optext);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(62),
    [sym__content] = STATE(10),
    [sym_comment] = STATE(10),
    [sym_escaped] = STATE(10),
    [sym_group] = STATE(10),
    [sym_command] = STATE(10),
    [sym__newline] = STATE(10),
    [aux_sym_document_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_comment_token1] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_BSLASH] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
    [anon_sym_LF] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_optext,
    ACTIONS(23), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_opval,
    ACTIONS(19), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(5), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [32] = 7,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_comment_token1,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(38), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 7,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [61] = 7,
    ACTIONS(41), 1,
      aux_sym_comment_token1,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_BSLASH,
    ACTIONS(52), 1,
      sym_optext,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(50), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(4), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [90] = 7,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(60), 1,
      sym_optext,
    ACTIONS(62), 1,
      anon_sym_LF,
    ACTIONS(58), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    STATE(4), 7,
      sym__opcontent,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_opval_repeat1,
  [119] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 7,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [145] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 2,
      sym_text,
      anon_sym_LF,
    STATE(12), 7,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [171] = 3,
    ACTIONS(74), 1,
      sym_name,
    STATE(37), 1,
      sym_escapechar,
    ACTIONS(72), 11,
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
  [191] = 3,
    ACTIONS(78), 1,
      sym_name,
    STATE(42), 1,
      sym_escapechar,
    ACTIONS(76), 11,
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
  [211] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 7,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [237] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 2,
      sym_text,
      anon_sym_LF,
    STATE(6), 7,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [263] = 6,
    ACTIONS(5), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_BSLASH,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 2,
      sym_text,
      anon_sym_LF,
    STATE(3), 7,
      sym__content,
      sym_comment,
      sym_escaped,
      sym_group,
      sym_command,
      sym__newline,
      aux_sym_document_repeat1,
  [289] = 5,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      aux_sym_command_token1,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(13), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(90), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [311] = 4,
    ACTIONS(98), 1,
      aux_sym_command_token1,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(14), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(90), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [331] = 5,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      aux_sym_command_token1,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    STATE(18), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(106), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [353] = 4,
    ACTIONS(114), 1,
      aux_sym_command_token1,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(14), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(112), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [373] = 4,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      aux_sym_command_token1,
    STATE(16), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(106), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [393] = 5,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      aux_sym_command_token1,
    STATE(13), 2,
      sym_optionblock,
      aux_sym_command_repeat1,
    ACTIONS(112), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [415] = 1,
    ACTIONS(90), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [427] = 2,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [441] = 2,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [455] = 1,
    ACTIONS(128), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [467] = 1,
    ACTIONS(130), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [479] = 4,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_optionblock,
    ACTIONS(134), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [497] = 2,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(138), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [511] = 1,
    ACTIONS(138), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [523] = 4,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(132), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_optionblock,
    ACTIONS(134), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [541] = 1,
    ACTIONS(126), 9,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
      anon_sym_LF,
  [553] = 4,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_optionblock,
    ACTIONS(112), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [571] = 4,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      anon_sym_LF,
    STATE(19), 1,
      sym_optionblock,
    ACTIONS(112), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [589] = 2,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [603] = 2,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(130), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      aux_sym_command_token1,
      anon_sym_LBRACK,
      sym_text,
      anon_sym_LF,
  [617] = 2,
    ACTIONS(146), 1,
      anon_sym_LF,
    ACTIONS(144), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [629] = 2,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    ACTIONS(150), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [641] = 2,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [653] = 2,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [665] = 2,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [677] = 2,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_text,
      anon_sym_LF,
  [689] = 2,
    ACTIONS(148), 1,
      anon_sym_LF,
    ACTIONS(150), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [701] = 2,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(162), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [713] = 2,
    ACTIONS(152), 1,
      anon_sym_LF,
    ACTIONS(154), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [725] = 2,
    ACTIONS(156), 1,
      anon_sym_LF,
    ACTIONS(158), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_optext,
  [737] = 4,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    ACTIONS(168), 1,
      sym_opkey,
    STATE(55), 1,
      sym__options,
  [750] = 4,
    ACTIONS(168), 1,
      sym_opkey,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      sym__options,
  [763] = 4,
    ACTIONS(174), 1,
      aux_sym_command_token1,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    ACTIONS(178), 1,
      sym_opkey,
    STATE(56), 1,
      sym__options,
  [776] = 4,
    ACTIONS(174), 1,
      aux_sym_command_token1,
    ACTIONS(178), 1,
      sym_opkey,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym__options,
  [789] = 4,
    ACTIONS(174), 1,
      aux_sym_command_token1,
    ACTIONS(178), 1,
      sym_opkey,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym__options,
  [802] = 4,
    ACTIONS(174), 1,
      aux_sym_command_token1,
    ACTIONS(178), 1,
      sym_opkey,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym__options,
  [815] = 2,
    ACTIONS(188), 1,
      anon_sym_EQ,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [823] = 3,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_optionblock_repeat1,
  [833] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_optionblock_repeat1,
  [843] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_optionblock_repeat1,
  [853] = 3,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      aux_sym_optionblock_repeat1,
  [863] = 3,
    ACTIONS(174), 1,
      aux_sym_command_token1,
    ACTIONS(178), 1,
      sym_opkey,
    STATE(56), 1,
      sym__options,
  [873] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_optionblock_repeat1,
  [883] = 1,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [888] = 2,
    ACTIONS(211), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_optionblock,
  [895] = 2,
    ACTIONS(168), 1,
      sym_opkey,
    STATE(59), 1,
      sym__options,
  [902] = 1,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [907] = 2,
    ACTIONS(215), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_optionblock,
  [914] = 1,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [919] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [923] = 1,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
  [927] = 1,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 191,
  [SMALL_STATE(10)] = 211,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 289,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 331,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 393,
  [SMALL_STATE(19)] = 415,
  [SMALL_STATE(20)] = 427,
  [SMALL_STATE(21)] = 441,
  [SMALL_STATE(22)] = 455,
  [SMALL_STATE(23)] = 467,
  [SMALL_STATE(24)] = 479,
  [SMALL_STATE(25)] = 497,
  [SMALL_STATE(26)] = 511,
  [SMALL_STATE(27)] = 523,
  [SMALL_STATE(28)] = 541,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 571,
  [SMALL_STATE(31)] = 589,
  [SMALL_STATE(32)] = 603,
  [SMALL_STATE(33)] = 617,
  [SMALL_STATE(34)] = 629,
  [SMALL_STATE(35)] = 641,
  [SMALL_STATE(36)] = 653,
  [SMALL_STATE(37)] = 665,
  [SMALL_STATE(38)] = 677,
  [SMALL_STATE(39)] = 689,
  [SMALL_STATE(40)] = 701,
  [SMALL_STATE(41)] = 713,
  [SMALL_STATE(42)] = 725,
  [SMALL_STATE(43)] = 737,
  [SMALL_STATE(44)] = 750,
  [SMALL_STATE(45)] = 763,
  [SMALL_STATE(46)] = 776,
  [SMALL_STATE(47)] = 789,
  [SMALL_STATE(48)] = 802,
  [SMALL_STATE(49)] = 815,
  [SMALL_STATE(50)] = 823,
  [SMALL_STATE(51)] = 833,
  [SMALL_STATE(52)] = 843,
  [SMALL_STATE(53)] = 853,
  [SMALL_STATE(54)] = 863,
  [SMALL_STATE(55)] = 873,
  [SMALL_STATE(56)] = 883,
  [SMALL_STATE(57)] = 888,
  [SMALL_STATE(58)] = 895,
  [SMALL_STATE(59)] = 902,
  [SMALL_STATE(60)] = 907,
  [SMALL_STATE(61)] = 914,
  [SMALL_STATE(62)] = 919,
  [SMALL_STATE(63)] = 923,
  [SMALL_STATE(64)] = 927,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__options, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(40),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(11),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(9),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(4),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_opval_repeat1, 2), SHIFT_REPEAT(4),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opval, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(60),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(44),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(57),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 5),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optionblock, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optionblock, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2), SHIFT_REPEAT(54),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_optionblock_repeat1, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__options, 3),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
