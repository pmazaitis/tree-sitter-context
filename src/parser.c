#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
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
  anon_sym_BSLASHbgroup = 17,
  anon_sym_BSLASHegroup = 18,
  sym_command_group_start = 19,
  sym_command_group_stop = 20,
  sym_math_text = 21,
  anon_sym_BSLASHstartMPinclusions = 22,
  anon_sym_BSLASHstartuseMPgraphic = 23,
  anon_sym_BSLASHstartreusableMPgraphic = 24,
  anon_sym_BSLASHstartMPcode = 25,
  anon_sym_BSLASHstartMPpage = 26,
  anon_sym_BSLASHstartstaticMPfigure = 27,
  anon_sym_BSLASHstopMPinclusions = 28,
  anon_sym_BSLASHstopuseMPgraphic = 29,
  anon_sym_BSLASHstopreusableMPgraphic = 30,
  anon_sym_BSLASHstopMPcode = 31,
  anon_sym_BSLASHstopMPpage = 32,
  anon_sym_BSLASHstopstaticMPfigure = 33,
  aux_sym_metapost_body_token1 = 34,
  anon_sym_BSLASHstarttikzpicture = 35,
  anon_sym_BSLASHstoptikzpicture = 36,
  anon_sym_BSLASHstarttyping = 37,
  anon_sym_BSLASHstartLUA = 38,
  anon_sym_BSLASHstartMP = 39,
  anon_sym_BSLASHstartPARSEDXML = 40,
  anon_sym_BSLASHstartTEX = 41,
  anon_sym_BSLASHstartXML = 42,
  anon_sym_BSLASHstartHTML = 43,
  anon_sym_BSLASHstartCSS = 44,
  anon_sym_BSLASHstoptyping = 45,
  anon_sym_BSLASHstopLUA = 46,
  anon_sym_BSLASHstopMP = 47,
  anon_sym_BSLASHstopPARSEDXML = 48,
  anon_sym_BSLASHstopTEX = 49,
  anon_sym_BSLASHstopXML = 50,
  anon_sym_BSLASHstopHTML = 51,
  anon_sym_BSLASHstopCSS = 52,
  sym_command_name = 53,
  sym_command_block_start = 54,
  sym_command_block_stop = 55,
  anon_sym_COMMA = 56,
  aux_sym_keyword_token1 = 57,
  anon_sym_EQ = 58,
  anon_sym_title = 59,
  aux_sym_title_text_token1 = 60,
  sym_text = 61,
  anon_sym_LF = 62,
  anon_sym_CR = 63,
  anon_sym_CR_LF = 64,
  sym_command_stop = 65,
  sym_document = 66,
  sym__content = 67,
  sym_main_start = 68,
  sym_main_stop = 69,
  sym_comment = 70,
  sym_escapechar = 71,
  sym_escaped = 72,
  sym_brace_group_start = 73,
  sym_brace_group_stop = 74,
  sym_brace_group = 75,
  sym_command_group = 76,
  sym_math_group = 77,
  sym__math_content = 78,
  sym_inline_math = 79,
  sym_metapost_start = 80,
  sym_metapost_stop = 81,
  sym_metapost_body = 82,
  sym_metapost_inclusion = 83,
  sym_tikz_start = 84,
  sym_tikz_stop = 85,
  sym_tikz_body = 86,
  sym_tikz_inclusion = 87,
  sym_typing_start = 88,
  sym_typing_stop = 89,
  sym_typing_body = 90,
  sym_typing_inclusion = 91,
  sym_option_block = 92,
  sym_keyword = 93,
  sym_settings_block = 94,
  sym_setting = 95,
  sym_title_setting = 96,
  sym_title_value = 97,
  sym__title_content = 98,
  sym_title_brace_group = 99,
  sym_title_text = 100,
  sym_key = 101,
  sym_value = 102,
  sym__value_content = 103,
  sym_value_text = 104,
  sym_value_brace_group = 105,
  sym_command = 106,
  sym__end_of_line = 107,
  aux_sym_document_repeat1 = 108,
  aux_sym_math_group_repeat1 = 109,
  aux_sym_option_block_repeat1 = 110,
  aux_sym_settings_block_repeat1 = 111,
  aux_sym_title_value_repeat1 = 112,
  aux_sym_value_repeat1 = 113,
  aux_sym_command_repeat1 = 114,
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
  [anon_sym_BSLASHbgroup] = "\\bgroup",
  [anon_sym_BSLASHegroup] = "\\egroup",
  [sym_command_group_start] = "command_group_start",
  [sym_command_group_stop] = "command_group_stop",
  [sym_math_text] = "math_text",
  [anon_sym_BSLASHstartMPinclusions] = "\\startMPinclusions",
  [anon_sym_BSLASHstartuseMPgraphic] = "\\startuseMPgraphic",
  [anon_sym_BSLASHstartreusableMPgraphic] = "\\startreusableMPgraphic",
  [anon_sym_BSLASHstartMPcode] = "\\startMPcode",
  [anon_sym_BSLASHstartMPpage] = "\\startMPpage",
  [anon_sym_BSLASHstartstaticMPfigure] = "\\startstaticMPfigure",
  [anon_sym_BSLASHstopMPinclusions] = "\\stopMPinclusions",
  [anon_sym_BSLASHstopuseMPgraphic] = "\\stopuseMPgraphic",
  [anon_sym_BSLASHstopreusableMPgraphic] = "\\stopreusableMPgraphic",
  [anon_sym_BSLASHstopMPcode] = "\\stopMPcode",
  [anon_sym_BSLASHstopMPpage] = "\\stopMPpage",
  [anon_sym_BSLASHstopstaticMPfigure] = "\\stopstaticMPfigure",
  [aux_sym_metapost_body_token1] = "metapost_body_token1",
  [anon_sym_BSLASHstarttikzpicture] = "\\starttikzpicture",
  [anon_sym_BSLASHstoptikzpicture] = "\\stoptikzpicture",
  [anon_sym_BSLASHstarttyping] = "\\starttyping",
  [anon_sym_BSLASHstartLUA] = "\\startLUA",
  [anon_sym_BSLASHstartMP] = "\\startMP",
  [anon_sym_BSLASHstartPARSEDXML] = "\\startPARSEDXML",
  [anon_sym_BSLASHstartTEX] = "\\startTEX",
  [anon_sym_BSLASHstartXML] = "\\startXML",
  [anon_sym_BSLASHstartHTML] = "\\startHTML",
  [anon_sym_BSLASHstartCSS] = "\\startCSS",
  [anon_sym_BSLASHstoptyping] = "\\stoptyping",
  [anon_sym_BSLASHstopLUA] = "\\stopLUA",
  [anon_sym_BSLASHstopMP] = "\\stopMP",
  [anon_sym_BSLASHstopPARSEDXML] = "\\stopPARSEDXML",
  [anon_sym_BSLASHstopTEX] = "\\stopTEX",
  [anon_sym_BSLASHstopXML] = "\\stopXML",
  [anon_sym_BSLASHstopHTML] = "\\stopHTML",
  [anon_sym_BSLASHstopCSS] = "\\stopCSS",
  [sym_command_name] = "command_name",
  [sym_command_block_start] = "command_block_start",
  [sym_command_block_stop] = "command_block_stop",
  [anon_sym_COMMA] = ",",
  [aux_sym_keyword_token1] = "keyword_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_title] = "title",
  [aux_sym_title_text_token1] = "title_text_token1",
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
  [sym_brace_group_start] = "brace_group_start",
  [sym_brace_group_stop] = "brace_group_stop",
  [sym_brace_group] = "brace_group",
  [sym_command_group] = "command_group",
  [sym_math_group] = "math_group",
  [sym__math_content] = "_math_content",
  [sym_inline_math] = "inline_math",
  [sym_metapost_start] = "metapost_start",
  [sym_metapost_stop] = "metapost_stop",
  [sym_metapost_body] = "metapost_body",
  [sym_metapost_inclusion] = "metapost_inclusion",
  [sym_tikz_start] = "tikz_start",
  [sym_tikz_stop] = "tikz_stop",
  [sym_tikz_body] = "tikz_body",
  [sym_tikz_inclusion] = "tikz_inclusion",
  [sym_typing_start] = "typing_start",
  [sym_typing_stop] = "typing_stop",
  [sym_typing_body] = "typing_body",
  [sym_typing_inclusion] = "typing_inclusion",
  [sym_option_block] = "option_block",
  [sym_keyword] = "keyword",
  [sym_settings_block] = "settings_block",
  [sym_setting] = "setting",
  [sym_title_setting] = "title_setting",
  [sym_title_value] = "title_value",
  [sym__title_content] = "_title_content",
  [sym_title_brace_group] = "title_brace_group",
  [sym_title_text] = "title_text",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym__value_content] = "_value_content",
  [sym_value_text] = "value_text",
  [sym_value_brace_group] = "value_brace_group",
  [sym_command] = "command",
  [sym__end_of_line] = "_end_of_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_math_group_repeat1] = "math_group_repeat1",
  [aux_sym_option_block_repeat1] = "option_block_repeat1",
  [aux_sym_settings_block_repeat1] = "settings_block_repeat1",
  [aux_sym_title_value_repeat1] = "title_value_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
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
  [anon_sym_BSLASHbgroup] = anon_sym_BSLASHbgroup,
  [anon_sym_BSLASHegroup] = anon_sym_BSLASHegroup,
  [sym_command_group_start] = sym_command_group_start,
  [sym_command_group_stop] = sym_command_group_stop,
  [sym_math_text] = sym_math_text,
  [anon_sym_BSLASHstartMPinclusions] = anon_sym_BSLASHstartMPinclusions,
  [anon_sym_BSLASHstartuseMPgraphic] = anon_sym_BSLASHstartuseMPgraphic,
  [anon_sym_BSLASHstartreusableMPgraphic] = anon_sym_BSLASHstartreusableMPgraphic,
  [anon_sym_BSLASHstartMPcode] = anon_sym_BSLASHstartMPcode,
  [anon_sym_BSLASHstartMPpage] = anon_sym_BSLASHstartMPpage,
  [anon_sym_BSLASHstartstaticMPfigure] = anon_sym_BSLASHstartstaticMPfigure,
  [anon_sym_BSLASHstopMPinclusions] = anon_sym_BSLASHstopMPinclusions,
  [anon_sym_BSLASHstopuseMPgraphic] = anon_sym_BSLASHstopuseMPgraphic,
  [anon_sym_BSLASHstopreusableMPgraphic] = anon_sym_BSLASHstopreusableMPgraphic,
  [anon_sym_BSLASHstopMPcode] = anon_sym_BSLASHstopMPcode,
  [anon_sym_BSLASHstopMPpage] = anon_sym_BSLASHstopMPpage,
  [anon_sym_BSLASHstopstaticMPfigure] = anon_sym_BSLASHstopstaticMPfigure,
  [aux_sym_metapost_body_token1] = aux_sym_metapost_body_token1,
  [anon_sym_BSLASHstarttikzpicture] = anon_sym_BSLASHstarttikzpicture,
  [anon_sym_BSLASHstoptikzpicture] = anon_sym_BSLASHstoptikzpicture,
  [anon_sym_BSLASHstarttyping] = anon_sym_BSLASHstarttyping,
  [anon_sym_BSLASHstartLUA] = anon_sym_BSLASHstartLUA,
  [anon_sym_BSLASHstartMP] = anon_sym_BSLASHstartMP,
  [anon_sym_BSLASHstartPARSEDXML] = anon_sym_BSLASHstartPARSEDXML,
  [anon_sym_BSLASHstartTEX] = anon_sym_BSLASHstartTEX,
  [anon_sym_BSLASHstartXML] = anon_sym_BSLASHstartXML,
  [anon_sym_BSLASHstartHTML] = anon_sym_BSLASHstartHTML,
  [anon_sym_BSLASHstartCSS] = anon_sym_BSLASHstartCSS,
  [anon_sym_BSLASHstoptyping] = anon_sym_BSLASHstoptyping,
  [anon_sym_BSLASHstopLUA] = anon_sym_BSLASHstopLUA,
  [anon_sym_BSLASHstopMP] = anon_sym_BSLASHstopMP,
  [anon_sym_BSLASHstopPARSEDXML] = anon_sym_BSLASHstopPARSEDXML,
  [anon_sym_BSLASHstopTEX] = anon_sym_BSLASHstopTEX,
  [anon_sym_BSLASHstopXML] = anon_sym_BSLASHstopXML,
  [anon_sym_BSLASHstopHTML] = anon_sym_BSLASHstopHTML,
  [anon_sym_BSLASHstopCSS] = anon_sym_BSLASHstopCSS,
  [sym_command_name] = sym_command_name,
  [sym_command_block_start] = sym_command_block_start,
  [sym_command_block_stop] = sym_command_block_stop,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_title] = anon_sym_title,
  [aux_sym_title_text_token1] = aux_sym_title_text_token1,
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
  [sym_brace_group_start] = sym_brace_group_start,
  [sym_brace_group_stop] = sym_brace_group_stop,
  [sym_brace_group] = sym_brace_group,
  [sym_command_group] = sym_command_group,
  [sym_math_group] = sym_math_group,
  [sym__math_content] = sym__math_content,
  [sym_inline_math] = sym_inline_math,
  [sym_metapost_start] = sym_metapost_start,
  [sym_metapost_stop] = sym_metapost_stop,
  [sym_metapost_body] = sym_metapost_body,
  [sym_metapost_inclusion] = sym_metapost_inclusion,
  [sym_tikz_start] = sym_tikz_start,
  [sym_tikz_stop] = sym_tikz_stop,
  [sym_tikz_body] = sym_tikz_body,
  [sym_tikz_inclusion] = sym_tikz_inclusion,
  [sym_typing_start] = sym_typing_start,
  [sym_typing_stop] = sym_typing_stop,
  [sym_typing_body] = sym_typing_body,
  [sym_typing_inclusion] = sym_typing_inclusion,
  [sym_option_block] = sym_option_block,
  [sym_keyword] = sym_keyword,
  [sym_settings_block] = sym_settings_block,
  [sym_setting] = sym_setting,
  [sym_title_setting] = sym_title_setting,
  [sym_title_value] = sym_title_value,
  [sym__title_content] = sym__title_content,
  [sym_title_brace_group] = sym_title_brace_group,
  [sym_title_text] = sym_title_text,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym__value_content] = sym__value_content,
  [sym_value_text] = sym_value_text,
  [sym_value_brace_group] = sym_value_brace_group,
  [sym_command] = sym_command,
  [sym__end_of_line] = sym__end_of_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_math_group_repeat1] = aux_sym_math_group_repeat1,
  [aux_sym_option_block_repeat1] = aux_sym_option_block_repeat1,
  [aux_sym_settings_block_repeat1] = aux_sym_settings_block_repeat1,
  [aux_sym_title_value_repeat1] = aux_sym_title_value_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
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
  [anon_sym_BSLASHbgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHegroup] = {
    .visible = true,
    .named = false,
  },
  [sym_command_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_command_group_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHstartMPinclusions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartuseMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartreusableMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMPcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMPpage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartstaticMPfigure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPinclusions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopuseMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopreusableMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPpage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopstaticMPfigure] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_metapost_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHstarttikzpicture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstoptikzpicture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstarttyping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartLUA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartPARSEDXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartTEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartHTML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartCSS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstoptyping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopLUA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopPARSEDXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopTEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopHTML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopCSS] = {
    .visible = true,
    .named = false,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_title_text_token1] = {
    .visible = false,
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
  [sym_brace_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group_stop] = {
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
  [sym_metapost_start] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_body] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_body] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_start] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_body] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_option_block] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_block] = {
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
  [sym__title_content] = {
    .visible = false,
    .named = true,
  },
  [sym_title_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_title_text] = {
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
  [sym_value_text] = {
    .visible = true,
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
  [aux_sym_option_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
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
      if (eof) ADVANCE(243);
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '&') ADVANCE(254);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '^') ADVANCE(255);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '~') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(323);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(323);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(327);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(321);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(251);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(253);
      if (lookahead == '&') ADVANCE(254);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead == '^') ADVANCE(255);
      if (lookahead == '_') ADVANCE(256);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '|') ADVANCE(259);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '~') ADVANCE(260);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0) ADVANCE(272);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(317);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(290);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(298);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(51);
      if (lookahead == 'H') ADVANCE(55);
      if (lookahead == 'L') ADVANCE(57);
      if (lookahead == 'M') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(7);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(25);
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == 's') ADVANCE(215);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(269);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'H') ADVANCE(56);
      if (lookahead == 'L') ADVANCE(58);
      if (lookahead == 'M') ADVANCE(40);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'X') ADVANCE(30);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(294);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(295);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(292);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(302);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(303);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(300);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(42);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(22);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(41);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == 's') ADVANCE(227);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'M') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(291);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(113);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(299);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(118);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(114);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(124);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(125);
      END_STATE();
    case 46:
      if (lookahead == 'P') ADVANCE(126);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 'S') ADVANCE(296);
      END_STATE();
    case 50:
      if (lookahead == 'S') ADVANCE(304);
      END_STATE();
    case 51:
      if (lookahead == 'S') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 57:
      if (lookahead == 'U') ADVANCE(8);
      END_STATE();
    case 58:
      if (lookahead == 'U') ADVANCE(9);
      END_STATE();
    case 59:
      if (lookahead == 'X') ADVANCE(293);
      END_STATE();
    case 60:
      if (lookahead == 'X') ADVANCE(301);
      END_STATE();
    case 61:
      if (lookahead == 'X') ADVANCE(29);
      END_STATE();
    case 62:
      if (lookahead == 'X') ADVANCE(33);
      END_STATE();
    case 63:
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      END_STATE();
    case 64:
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      END_STATE();
    case 65:
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(65)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(317);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 74:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(190);
      END_STATE();
    case 76:
      if (lookahead == 'a') ADVANCE(226);
      END_STATE();
    case 77:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'b') ADVANCE(150);
      END_STATE();
    case 79:
      if (lookahead == 'b') ADVANCE(151);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(280);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == 'c') ADVANCE(165);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(270);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 88:
      if (lookahead == 'c') ADVANCE(221);
      END_STATE();
    case 89:
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(225);
      END_STATE();
    case 91:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 92:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 93:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(287);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(146);
      if (lookahead == 'y') ADVANCE(179);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 113:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 114:
      if (lookahead == 'f') ADVANCE(143);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(289);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(194);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 120:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 122:
      if (lookahead == 'g') ADVANCE(235);
      END_STATE();
    case 123:
      if (lookahead == 'g') ADVANCE(199);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(200);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(201);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(202);
      END_STATE();
    case 127:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 128:
      if (lookahead == 'h') ADVANCE(137);
      END_STATE();
    case 129:
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 130:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'y') ADVANCE(186);
      END_STATE();
    case 146:
      if (lookahead == 'k') ADVANCE(240);
      END_STATE();
    case 147:
      if (lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(231);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(236);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(184);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(188);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 167:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(267);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(127);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 183:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 184:
      if (lookahead == 'p') ADVANCE(167);
      END_STATE();
    case 185:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 186:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 187:
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(279);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(222);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(244);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(206);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 236:
      if (lookahead == 'u') ADVANCE(210);
      END_STATE();
    case 237:
      if (lookahead == 'u') ADVANCE(212);
      END_STATE();
    case 238:
      if (lookahead == 'x') ADVANCE(216);
      END_STATE();
    case 239:
      if (lookahead == 'x') ADVANCE(217);
      END_STATE();
    case 240:
      if (lookahead == 'z') ADVANCE(185);
      END_STATE();
    case 241:
      if (lookahead == 'z') ADVANCE(191);
      END_STATE();
    case 242:
      if (eof) ADVANCE(243);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(323);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(321);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(250);
      if (lookahead != 0) ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(250);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(115);
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(272);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(286);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(317);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(317);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(317);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(317);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(317);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(327);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 242},
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
  [13] = {.lex_state = 242},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 242},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 242},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 242},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 242},
  [45] = {.lex_state = 242},
  [46] = {.lex_state = 242},
  [47] = {.lex_state = 242},
  [48] = {.lex_state = 242},
  [49] = {.lex_state = 242},
  [50] = {.lex_state = 242},
  [51] = {.lex_state = 242},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 242},
  [60] = {.lex_state = 242},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 242},
  [64] = {.lex_state = 242},
  [65] = {.lex_state = 242},
  [66] = {.lex_state = 242},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 242},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 242},
  [75] = {.lex_state = 242},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 63},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 63},
  [113] = {.lex_state = 63},
  [114] = {.lex_state = 63},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 64},
  [117] = {.lex_state = 64},
  [118] = {.lex_state = 64},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 64},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 65},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 65},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 285},
  [149] = {.lex_state = 285},
  [150] = {.lex_state = 285},
  [151] = {.lex_state = 285},
  [152] = {.lex_state = 285},
  [153] = {.lex_state = 285},
  [154] = {.lex_state = 285},
  [155] = {.lex_state = 63},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 63},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 65},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 285},
  [164] = {.lex_state = 0, .external_lex_state = 1},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 63},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0, .external_lex_state = 1},
  [170] = {.lex_state = 0, .external_lex_state = 1},
  [171] = {.lex_state = 285},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 63},
  [176] = {.lex_state = 285},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 285},
  [179] = {.lex_state = 285},
  [180] = {.lex_state = 0},
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
    [anon_sym_BSLASHbgroup] = ACTIONS(1),
    [anon_sym_BSLASHegroup] = ACTIONS(1),
    [sym_command_group_start] = ACTIONS(1),
    [sym_command_group_stop] = ACTIONS(1),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(1),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(1),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(1),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(1),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(1),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(1),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(1),
    [anon_sym_BSLASHstarttyping] = ACTIONS(1),
    [anon_sym_BSLASHstartLUA] = ACTIONS(1),
    [anon_sym_BSLASHstartMP] = ACTIONS(1),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(1),
    [anon_sym_BSLASHstartTEX] = ACTIONS(1),
    [anon_sym_BSLASHstartXML] = ACTIONS(1),
    [anon_sym_BSLASHstartHTML] = ACTIONS(1),
    [anon_sym_BSLASHstartCSS] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym_command_block_start] = ACTIONS(1),
    [sym_command_block_stop] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [sym_command_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(180),
    [sym__content] = STATE(17),
    [sym_main_start] = STATE(17),
    [sym_main_stop] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_escaped] = STATE(17),
    [sym_brace_group_start] = STATE(7),
    [sym_brace_group] = STATE(17),
    [sym_command_group] = STATE(17),
    [sym_inline_math] = STATE(17),
    [sym_metapost_start] = STATE(149),
    [sym_metapost_inclusion] = STATE(17),
    [sym_tikz_start] = STATE(148),
    [sym_tikz_inclusion] = STATE(17),
    [sym_typing_start] = STATE(171),
    [sym_typing_inclusion] = STATE(17),
    [sym_command] = STATE(17),
    [sym__end_of_line] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [anon_sym_BSLASHstarttext] = ACTIONS(3),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(3),
    [anon_sym_BSLASHstoptext] = ACTIONS(5),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_BSLASHbgroup] = ACTIONS(11),
    [sym_command_group_start] = ACTIONS(15),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(17),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(17),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(17),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(17),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(17),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(17),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(19),
    [anon_sym_BSLASHstarttyping] = ACTIONS(21),
    [anon_sym_BSLASHstartLUA] = ACTIONS(21),
    [anon_sym_BSLASHstartMP] = ACTIONS(21),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(21),
    [anon_sym_BSLASHstartTEX] = ACTIONS(21),
    [anon_sym_BSLASHstartXML] = ACTIONS(21),
    [anon_sym_BSLASHstartHTML] = ACTIONS(21),
    [anon_sym_BSLASHstartCSS] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
    [anon_sym_LF] = ACTIONS(23),
    [anon_sym_CR] = ACTIONS(23),
    [anon_sym_CR_LF] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(58), 1,
      sym_brace_group_stop,
    STATE(150), 1,
      sym_typing_start,
    STATE(151), 1,
      sym_tikz_start,
    STATE(152), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(25), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(27), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(39), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [87] = 18,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(30), 1,
      sym_brace_group_stop,
    STATE(150), 1,
      sym_typing_start,
    STATE(151), 1,
      sym_tikz_start,
    STATE(152), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(25), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(27), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(43), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(4), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [174] = 18,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(22), 1,
      sym_brace_group_stop,
    STATE(150), 1,
      sym_typing_start,
    STATE(151), 1,
      sym_tikz_start,
    STATE(152), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(25), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(27), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(39), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [261] = 18,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(45), 1,
      sym_brace_group_stop,
    STATE(150), 1,
      sym_typing_start,
    STATE(151), 1,
      sym_tikz_start,
    STATE(152), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(25), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(27), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(39), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [348] = 18,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(52), 1,
      sym_brace_group_stop,
    STATE(150), 1,
      sym_typing_start,
    STATE(151), 1,
      sym_tikz_start,
    STATE(152), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(25), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(27), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(33), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(47), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(2), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [435] = 18,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      aux_sym_comment_token1,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_BSLASH,
    ACTIONS(37), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(66), 1,
      sym_brace_group_stop,
    STATE(150), 1,
      sym_typing_start,
    STATE(151), 1,
      sym_tikz_start,
    STATE(152), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(25), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(27), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(49), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(5), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [522] = 17,
    ACTIONS(57), 1,
      aux_sym_comment_token1,
    ACTIONS(60), 1,
      anon_sym_DOLLAR,
    ACTIONS(68), 1,
      anon_sym_BSLASH,
    ACTIONS(71), 1,
      sym_command_group_start,
    ACTIONS(77), 1,
      anon_sym_BSLASHstarttikzpicture,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(150), 1,
      sym_typing_start,
    STATE(151), 1,
      sym_tikz_start,
    STATE(152), 1,
      sym_metapost_start,
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
    ACTIONS(83), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(74), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(80), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [606] = 17,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(90), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_BSLASH,
    ACTIONS(96), 1,
      sym_command_group_start,
    ACTIONS(98), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(153), 1,
      sym_typing_start,
    STATE(154), 1,
      sym_tikz_start,
    STATE(163), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(88), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(100), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(14), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [689] = 17,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(90), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_BSLASH,
    ACTIONS(96), 1,
      sym_command_group_start,
    ACTIONS(102), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(153), 1,
      sym_typing_start,
    STATE(154), 1,
      sym_tikz_start,
    STATE(163), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(88), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(104), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(16), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [772] = 17,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(90), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_BSLASH,
    ACTIONS(96), 1,
      sym_command_group_start,
    ACTIONS(106), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(153), 1,
      sym_typing_start,
    STATE(154), 1,
      sym_tikz_start,
    STATE(163), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(88), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(108), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(15), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [855] = 17,
    ACTIONS(66), 1,
      sym_command_group_stop,
    ACTIONS(77), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(116), 1,
      aux_sym_comment_token1,
    ACTIONS(119), 1,
      anon_sym_DOLLAR,
    ACTIONS(122), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      sym_command_group_start,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(153), 1,
      sym_typing_start,
    STATE(154), 1,
      sym_tikz_start,
    STATE(163), 1,
      sym_metapost_start,
    ACTIONS(63), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(110), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(113), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(128), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(74), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(80), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [938] = 17,
    ACTIONS(77), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      aux_sym_comment_token1,
    ACTIONS(142), 1,
      anon_sym_DOLLAR,
    ACTIONS(145), 1,
      anon_sym_BSLASH,
    ACTIONS(148), 1,
      sym_command_group_start,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(148), 1,
      sym_tikz_start,
    STATE(149), 1,
      sym_metapost_start,
    STATE(171), 1,
      sym_typing_start,
    ACTIONS(63), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(133), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(136), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(151), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(74), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(80), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1021] = 17,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(90), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_BSLASH,
    ACTIONS(96), 1,
      sym_command_group_start,
    ACTIONS(154), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(153), 1,
      sym_typing_start,
    STATE(154), 1,
      sym_tikz_start,
    STATE(163), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(88), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(156), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1104] = 17,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(90), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_BSLASH,
    ACTIONS(96), 1,
      sym_command_group_start,
    ACTIONS(158), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(153), 1,
      sym_typing_start,
    STATE(154), 1,
      sym_tikz_start,
    STATE(163), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(88), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(156), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1187] = 17,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(90), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(94), 1,
      anon_sym_BSLASH,
    ACTIONS(96), 1,
      sym_command_group_start,
    ACTIONS(160), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(153), 1,
      sym_typing_start,
    STATE(154), 1,
      sym_tikz_start,
    STATE(163), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(88), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(156), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1270] = 17,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_command_group_start,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(148), 1,
      sym_tikz_start,
    STATE(149), 1,
      sym_metapost_start,
    STATE(171), 1,
      sym_typing_start,
    ACTIONS(3), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(5), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(164), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 8,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 14,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1353] = 1,
    ACTIONS(166), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1387] = 1,
    ACTIONS(168), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1421] = 1,
    ACTIONS(170), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1455] = 1,
    ACTIONS(172), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1489] = 1,
    ACTIONS(174), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1523] = 1,
    ACTIONS(176), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1557] = 1,
    ACTIONS(178), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1591] = 1,
    ACTIONS(180), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1625] = 1,
    ACTIONS(182), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1659] = 1,
    ACTIONS(184), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1693] = 1,
    ACTIONS(186), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1727] = 1,
    ACTIONS(188), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1761] = 1,
    ACTIONS(190), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1795] = 1,
    ACTIONS(192), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1829] = 1,
    ACTIONS(194), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1863] = 1,
    ACTIONS(196), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1897] = 1,
    ACTIONS(198), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1931] = 1,
    ACTIONS(200), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1965] = 1,
    ACTIONS(202), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1999] = 1,
    ACTIONS(204), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2033] = 2,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(172), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2068] = 1,
    ACTIONS(172), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2101] = 1,
    ACTIONS(176), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2134] = 2,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(166), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2169] = 1,
    ACTIONS(166), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2202] = 1,
    ACTIONS(182), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2235] = 2,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2270] = 2,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2305] = 2,
    ACTIONS(214), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2340] = 2,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2375] = 2,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2410] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2445] = 2,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(188), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2480] = 2,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    ACTIONS(198), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2515] = 1,
    ACTIONS(190), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2548] = 1,
    ACTIONS(192), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2581] = 1,
    ACTIONS(194), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2614] = 1,
    ACTIONS(196), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2647] = 1,
    ACTIONS(198), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2680] = 1,
    ACTIONS(200), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2713] = 1,
    ACTIONS(174), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2746] = 2,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2781] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2816] = 1,
    ACTIONS(170), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2849] = 1,
    ACTIONS(168), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2882] = 2,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2917] = 2,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(194), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2952] = 2,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
    ACTIONS(192), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2987] = 2,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3022] = 1,
    ACTIONS(178), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3055] = 1,
    ACTIONS(204), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3088] = 1,
    ACTIONS(180), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3121] = 2,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
    ACTIONS(202), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3156] = 1,
    ACTIONS(184), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3189] = 1,
    ACTIONS(202), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3222] = 1,
    ACTIONS(188), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3255] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(182), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3290] = 2,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(196), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartHTML,
      anon_sym_BSLASHstartCSS,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3325] = 7,
    ACTIONS(244), 1,
      aux_sym_comment_token1,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 1,
      aux_sym_title_text_token1,
    ACTIONS(250), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(258), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(76), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3358] = 7,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_BSLASH,
    ACTIONS(272), 1,
      aux_sym_title_text_token1,
    ACTIONS(267), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(275), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(77), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3391] = 8,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(286), 1,
      aux_sym_title_text_token1,
    STATE(161), 1,
      sym_value,
    ACTIONS(284), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(288), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(81), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3426] = 8,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      aux_sym_title_text_token1,
    STATE(168), 1,
      sym_title_value,
    ACTIONS(292), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(296), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(80), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3461] = 7,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      aux_sym_title_text_token1,
    ACTIONS(298), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(300), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(76), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3493] = 7,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(286), 1,
      aux_sym_title_text_token1,
    ACTIONS(302), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(304), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(77), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3525] = 7,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      aux_sym_title_text_token1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(85), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3556] = 7,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(286), 1,
      aux_sym_title_text_token1,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(312), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(84), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3587] = 7,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(286), 1,
      aux_sym_title_text_token1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(77), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3618] = 7,
    ACTIONS(278), 1,
      aux_sym_comment_token1,
    ACTIONS(282), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      aux_sym_title_text_token1,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(76), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3649] = 3,
    ACTIONS(320), 1,
      sym_command_name,
    STATE(105), 1,
      sym_escapechar,
    ACTIONS(318), 11,
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
  [3669] = 3,
    ACTIONS(324), 1,
      sym_command_name,
    STATE(67), 1,
      sym_escapechar,
    ACTIONS(322), 11,
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
  [3689] = 3,
    ACTIONS(328), 1,
      sym_command_name,
    STATE(24), 1,
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
  [3709] = 3,
    ACTIONS(332), 1,
      sym_command_name,
    STATE(63), 1,
      sym_escapechar,
    ACTIONS(330), 11,
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
  [3729] = 2,
    STATE(123), 1,
      sym_escapechar,
    ACTIONS(334), 11,
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
  [3746] = 6,
    ACTIONS(336), 1,
      aux_sym_comment_token1,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(344), 1,
      anon_sym_BSLASH,
    ACTIONS(347), 1,
      sym_math_text,
    ACTIONS(339), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(91), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3770] = 1,
    ACTIONS(350), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3783] = 6,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(354), 1,
      anon_sym_DOLLAR,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      sym_math_text,
    STATE(91), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3806] = 1,
    ACTIONS(362), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3819] = 6,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      sym_math_text,
    ACTIONS(364), 1,
      anon_sym_DOLLAR,
    STATE(91), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3842] = 1,
    ACTIONS(366), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3855] = 1,
    ACTIONS(368), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3868] = 1,
    ACTIONS(370), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3881] = 6,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      sym_math_text,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3904] = 1,
    ACTIONS(166), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3917] = 1,
    ACTIONS(200), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3930] = 1,
    ACTIONS(202), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3943] = 1,
    ACTIONS(204), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3956] = 6,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      sym_math_text,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(91), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3979] = 1,
    ACTIONS(178), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3992] = 1,
    ACTIONS(378), 10,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4005] = 6,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      sym_math_text,
    ACTIONS(380), 1,
      anon_sym_DOLLAR,
    STATE(91), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4028] = 2,
    STATE(73), 1,
      sym_typing_stop,
    ACTIONS(382), 8,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopHTML,
      anon_sym_BSLASHstopCSS,
  [4042] = 5,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      sym_math_text,
    STATE(93), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4062] = 5,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(386), 1,
      sym_math_text,
    STATE(95), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4082] = 5,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(388), 1,
      sym_math_text,
    STATE(107), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4102] = 2,
    STATE(29), 1,
      sym_typing_stop,
    ACTIONS(390), 8,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopHTML,
      anon_sym_BSLASHstopCSS,
  [4116] = 2,
    STATE(50), 1,
      sym_typing_stop,
    ACTIONS(392), 8,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopHTML,
      anon_sym_BSLASHstopCSS,
  [4130] = 1,
    ACTIONS(394), 8,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopHTML,
      anon_sym_BSLASHstopCSS,
  [4141] = 7,
    ACTIONS(396), 1,
      sym_command_block_stop,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      aux_sym_keyword_token1,
    ACTIONS(402), 1,
      anon_sym_title,
    STATE(138), 1,
      sym_keyword,
    STATE(172), 1,
      sym_key,
    STATE(141), 2,
      sym_setting,
      sym_title_setting,
  [4164] = 2,
    STATE(46), 1,
      sym_metapost_stop,
    ACTIONS(404), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4176] = 2,
    STATE(20), 1,
      sym_metapost_stop,
    ACTIONS(406), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4188] = 2,
    STATE(61), 1,
      sym_metapost_stop,
    ACTIONS(408), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4200] = 1,
    ACTIONS(202), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4209] = 5,
    ACTIONS(402), 1,
      anon_sym_title,
    ACTIONS(410), 1,
      sym_command_block_stop,
    ACTIONS(412), 1,
      aux_sym_keyword_token1,
    STATE(172), 1,
      sym_key,
    STATE(162), 2,
      sym_setting,
      sym_title_setting,
  [4226] = 1,
    ACTIONS(414), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4235] = 1,
    ACTIONS(416), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4244] = 1,
    ACTIONS(178), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4253] = 1,
    ACTIONS(418), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4262] = 5,
    ACTIONS(402), 1,
      anon_sym_title,
    ACTIONS(412), 1,
      aux_sym_keyword_token1,
    ACTIONS(420), 1,
      sym_command_block_stop,
    STATE(172), 1,
      sym_key,
    STATE(162), 2,
      sym_setting,
      sym_title_setting,
  [4279] = 1,
    ACTIONS(204), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4288] = 3,
    ACTIONS(422), 1,
      sym_command_block_start,
    ACTIONS(424), 1,
      sym_command_stop,
    STATE(131), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4300] = 3,
    ACTIONS(422), 1,
      sym_command_block_start,
    ACTIONS(426), 1,
      sym_command_stop,
    STATE(134), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4312] = 3,
    ACTIONS(422), 1,
      sym_command_block_start,
    ACTIONS(428), 1,
      sym_command_stop,
    STATE(133), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4324] = 4,
    ACTIONS(402), 1,
      anon_sym_title,
    ACTIONS(412), 1,
      aux_sym_keyword_token1,
    STATE(172), 1,
      sym_key,
    STATE(162), 2,
      sym_setting,
      sym_title_setting,
  [4338] = 3,
    ACTIONS(422), 1,
      sym_command_block_start,
    ACTIONS(430), 1,
      sym_command_stop,
    STATE(134), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4350] = 3,
    ACTIONS(422), 1,
      sym_command_block_start,
    ACTIONS(432), 1,
      sym_command_stop,
    STATE(128), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4362] = 3,
    ACTIONS(422), 1,
      sym_command_block_start,
    ACTIONS(434), 1,
      sym_command_stop,
    STATE(134), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4374] = 3,
    ACTIONS(436), 1,
      sym_command_block_start,
    ACTIONS(439), 1,
      sym_command_stop,
    STATE(134), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4386] = 3,
    ACTIONS(422), 1,
      sym_command_block_start,
    ACTIONS(441), 1,
      sym_command_stop,
    STATE(136), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4398] = 3,
    ACTIONS(422), 1,
      sym_command_block_start,
    ACTIONS(443), 1,
      sym_command_stop,
    STATE(134), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4410] = 3,
    ACTIONS(445), 1,
      sym_command_block_stop,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_option_block_repeat1,
  [4420] = 3,
    ACTIONS(449), 1,
      sym_command_block_stop,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_option_block_repeat1,
  [4430] = 3,
    ACTIONS(445), 1,
      sym_command_block_stop,
    ACTIONS(453), 1,
      aux_sym_keyword_token1,
    STATE(165), 1,
      sym_keyword,
  [4440] = 2,
    ACTIONS(457), 1,
      anon_sym_EQ,
    ACTIONS(455), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4448] = 3,
    ACTIONS(459), 1,
      sym_command_block_stop,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_settings_block_repeat1,
  [4458] = 3,
    ACTIONS(463), 1,
      sym_command_block_stop,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_settings_block_repeat1,
  [4468] = 3,
    ACTIONS(420), 1,
      sym_command_block_stop,
    ACTIONS(468), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_settings_block_repeat1,
  [4478] = 3,
    ACTIONS(453), 1,
      aux_sym_keyword_token1,
    ACTIONS(470), 1,
      sym_command_block_stop,
    STATE(165), 1,
      sym_keyword,
  [4488] = 3,
    ACTIONS(472), 1,
      sym_command_block_stop,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_option_block_repeat1,
  [4498] = 1,
    ACTIONS(477), 2,
      sym_command_stop,
      sym_command_block_start,
  [4503] = 1,
    ACTIONS(479), 2,
      sym_command_stop,
      sym_command_block_start,
  [4508] = 2,
    ACTIONS(481), 1,
      aux_sym_metapost_body_token1,
    STATE(155), 1,
      sym_tikz_body,
  [4515] = 2,
    ACTIONS(483), 1,
      aux_sym_metapost_body_token1,
    STATE(116), 1,
      sym_metapost_body,
  [4522] = 2,
    ACTIONS(485), 1,
      aux_sym_metapost_body_token1,
    STATE(112), 1,
      sym_typing_body,
  [4529] = 2,
    ACTIONS(481), 1,
      aux_sym_metapost_body_token1,
    STATE(167), 1,
      sym_tikz_body,
  [4536] = 2,
    ACTIONS(483), 1,
      aux_sym_metapost_body_token1,
    STATE(117), 1,
      sym_metapost_body,
  [4543] = 2,
    ACTIONS(485), 1,
      aux_sym_metapost_body_token1,
    STATE(108), 1,
      sym_typing_body,
  [4550] = 2,
    ACTIONS(481), 1,
      aux_sym_metapost_body_token1,
    STATE(157), 1,
      sym_tikz_body,
  [4557] = 2,
    ACTIONS(487), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(48), 1,
      sym_tikz_stop,
  [4564] = 1,
    ACTIONS(489), 2,
      sym_command_stop,
      sym_command_block_start,
  [4569] = 2,
    ACTIONS(491), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(69), 1,
      sym_tikz_stop,
  [4576] = 1,
    ACTIONS(493), 2,
      sym_command_stop,
      sym_command_block_start,
  [4581] = 2,
    ACTIONS(453), 1,
      aux_sym_keyword_token1,
    STATE(165), 1,
      sym_keyword,
  [4588] = 1,
    ACTIONS(495), 2,
      sym_command_stop,
      sym_command_block_start,
  [4593] = 1,
    ACTIONS(497), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4598] = 1,
    ACTIONS(463), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4603] = 2,
    ACTIONS(483), 1,
      aux_sym_metapost_body_token1,
    STATE(118), 1,
      sym_metapost_body,
  [4610] = 1,
    ACTIONS(499), 2,
      sym_command_stop,
      sym_command_block_start,
  [4615] = 1,
    ACTIONS(472), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4620] = 1,
    ACTIONS(455), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4625] = 2,
    ACTIONS(501), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(25), 1,
      sym_tikz_stop,
  [4632] = 1,
    ACTIONS(503), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4637] = 1,
    ACTIONS(479), 2,
      sym_command_stop,
      sym_command_block_start,
  [4642] = 1,
    ACTIONS(505), 2,
      sym_command_stop,
      sym_command_block_start,
  [4647] = 2,
    ACTIONS(485), 1,
      aux_sym_metapost_body_token1,
    STATE(113), 1,
      sym_typing_body,
  [4654] = 1,
    ACTIONS(507), 1,
      anon_sym_EQ,
  [4658] = 1,
    ACTIONS(509), 1,
      anon_sym_EQ,
  [4662] = 1,
    ACTIONS(457), 1,
      anon_sym_EQ,
  [4666] = 1,
    ACTIONS(511), 1,
      anon_sym_BSLASHstoptikzpicture,
  [4670] = 1,
    ACTIONS(513), 1,
      aux_sym_metapost_body_token1,
  [4674] = 1,
    ACTIONS(515), 1,
      sym_command_block_stop,
  [4678] = 1,
    ACTIONS(517), 1,
      aux_sym_metapost_body_token1,
  [4682] = 1,
    ACTIONS(519), 1,
      aux_sym_metapost_body_token1,
  [4686] = 1,
    ACTIONS(521), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 87,
  [SMALL_STATE(4)] = 174,
  [SMALL_STATE(5)] = 261,
  [SMALL_STATE(6)] = 348,
  [SMALL_STATE(7)] = 435,
  [SMALL_STATE(8)] = 522,
  [SMALL_STATE(9)] = 606,
  [SMALL_STATE(10)] = 689,
  [SMALL_STATE(11)] = 772,
  [SMALL_STATE(12)] = 855,
  [SMALL_STATE(13)] = 938,
  [SMALL_STATE(14)] = 1021,
  [SMALL_STATE(15)] = 1104,
  [SMALL_STATE(16)] = 1187,
  [SMALL_STATE(17)] = 1270,
  [SMALL_STATE(18)] = 1353,
  [SMALL_STATE(19)] = 1387,
  [SMALL_STATE(20)] = 1421,
  [SMALL_STATE(21)] = 1455,
  [SMALL_STATE(22)] = 1489,
  [SMALL_STATE(23)] = 1523,
  [SMALL_STATE(24)] = 1557,
  [SMALL_STATE(25)] = 1591,
  [SMALL_STATE(26)] = 1625,
  [SMALL_STATE(27)] = 1659,
  [SMALL_STATE(28)] = 1693,
  [SMALL_STATE(29)] = 1727,
  [SMALL_STATE(30)] = 1761,
  [SMALL_STATE(31)] = 1795,
  [SMALL_STATE(32)] = 1829,
  [SMALL_STATE(33)] = 1863,
  [SMALL_STATE(34)] = 1897,
  [SMALL_STATE(35)] = 1931,
  [SMALL_STATE(36)] = 1965,
  [SMALL_STATE(37)] = 1999,
  [SMALL_STATE(38)] = 2033,
  [SMALL_STATE(39)] = 2068,
  [SMALL_STATE(40)] = 2101,
  [SMALL_STATE(41)] = 2134,
  [SMALL_STATE(42)] = 2169,
  [SMALL_STATE(43)] = 2202,
  [SMALL_STATE(44)] = 2235,
  [SMALL_STATE(45)] = 2270,
  [SMALL_STATE(46)] = 2305,
  [SMALL_STATE(47)] = 2340,
  [SMALL_STATE(48)] = 2375,
  [SMALL_STATE(49)] = 2410,
  [SMALL_STATE(50)] = 2445,
  [SMALL_STATE(51)] = 2480,
  [SMALL_STATE(52)] = 2515,
  [SMALL_STATE(53)] = 2548,
  [SMALL_STATE(54)] = 2581,
  [SMALL_STATE(55)] = 2614,
  [SMALL_STATE(56)] = 2647,
  [SMALL_STATE(57)] = 2680,
  [SMALL_STATE(58)] = 2713,
  [SMALL_STATE(59)] = 2746,
  [SMALL_STATE(60)] = 2781,
  [SMALL_STATE(61)] = 2816,
  [SMALL_STATE(62)] = 2849,
  [SMALL_STATE(63)] = 2882,
  [SMALL_STATE(64)] = 2917,
  [SMALL_STATE(65)] = 2952,
  [SMALL_STATE(66)] = 2987,
  [SMALL_STATE(67)] = 3022,
  [SMALL_STATE(68)] = 3055,
  [SMALL_STATE(69)] = 3088,
  [SMALL_STATE(70)] = 3121,
  [SMALL_STATE(71)] = 3156,
  [SMALL_STATE(72)] = 3189,
  [SMALL_STATE(73)] = 3222,
  [SMALL_STATE(74)] = 3255,
  [SMALL_STATE(75)] = 3290,
  [SMALL_STATE(76)] = 3325,
  [SMALL_STATE(77)] = 3358,
  [SMALL_STATE(78)] = 3391,
  [SMALL_STATE(79)] = 3426,
  [SMALL_STATE(80)] = 3461,
  [SMALL_STATE(81)] = 3493,
  [SMALL_STATE(82)] = 3525,
  [SMALL_STATE(83)] = 3556,
  [SMALL_STATE(84)] = 3587,
  [SMALL_STATE(85)] = 3618,
  [SMALL_STATE(86)] = 3649,
  [SMALL_STATE(87)] = 3669,
  [SMALL_STATE(88)] = 3689,
  [SMALL_STATE(89)] = 3709,
  [SMALL_STATE(90)] = 3729,
  [SMALL_STATE(91)] = 3746,
  [SMALL_STATE(92)] = 3770,
  [SMALL_STATE(93)] = 3783,
  [SMALL_STATE(94)] = 3806,
  [SMALL_STATE(95)] = 3819,
  [SMALL_STATE(96)] = 3842,
  [SMALL_STATE(97)] = 3855,
  [SMALL_STATE(98)] = 3868,
  [SMALL_STATE(99)] = 3881,
  [SMALL_STATE(100)] = 3904,
  [SMALL_STATE(101)] = 3917,
  [SMALL_STATE(102)] = 3930,
  [SMALL_STATE(103)] = 3943,
  [SMALL_STATE(104)] = 3956,
  [SMALL_STATE(105)] = 3979,
  [SMALL_STATE(106)] = 3992,
  [SMALL_STATE(107)] = 4005,
  [SMALL_STATE(108)] = 4028,
  [SMALL_STATE(109)] = 4042,
  [SMALL_STATE(110)] = 4062,
  [SMALL_STATE(111)] = 4082,
  [SMALL_STATE(112)] = 4102,
  [SMALL_STATE(113)] = 4116,
  [SMALL_STATE(114)] = 4130,
  [SMALL_STATE(115)] = 4141,
  [SMALL_STATE(116)] = 4164,
  [SMALL_STATE(117)] = 4176,
  [SMALL_STATE(118)] = 4188,
  [SMALL_STATE(119)] = 4200,
  [SMALL_STATE(120)] = 4209,
  [SMALL_STATE(121)] = 4226,
  [SMALL_STATE(122)] = 4235,
  [SMALL_STATE(123)] = 4244,
  [SMALL_STATE(124)] = 4253,
  [SMALL_STATE(125)] = 4262,
  [SMALL_STATE(126)] = 4279,
  [SMALL_STATE(127)] = 4288,
  [SMALL_STATE(128)] = 4300,
  [SMALL_STATE(129)] = 4312,
  [SMALL_STATE(130)] = 4324,
  [SMALL_STATE(131)] = 4338,
  [SMALL_STATE(132)] = 4350,
  [SMALL_STATE(133)] = 4362,
  [SMALL_STATE(134)] = 4374,
  [SMALL_STATE(135)] = 4386,
  [SMALL_STATE(136)] = 4398,
  [SMALL_STATE(137)] = 4410,
  [SMALL_STATE(138)] = 4420,
  [SMALL_STATE(139)] = 4430,
  [SMALL_STATE(140)] = 4440,
  [SMALL_STATE(141)] = 4448,
  [SMALL_STATE(142)] = 4458,
  [SMALL_STATE(143)] = 4468,
  [SMALL_STATE(144)] = 4478,
  [SMALL_STATE(145)] = 4488,
  [SMALL_STATE(146)] = 4498,
  [SMALL_STATE(147)] = 4503,
  [SMALL_STATE(148)] = 4508,
  [SMALL_STATE(149)] = 4515,
  [SMALL_STATE(150)] = 4522,
  [SMALL_STATE(151)] = 4529,
  [SMALL_STATE(152)] = 4536,
  [SMALL_STATE(153)] = 4543,
  [SMALL_STATE(154)] = 4550,
  [SMALL_STATE(155)] = 4557,
  [SMALL_STATE(156)] = 4564,
  [SMALL_STATE(157)] = 4569,
  [SMALL_STATE(158)] = 4576,
  [SMALL_STATE(159)] = 4581,
  [SMALL_STATE(160)] = 4588,
  [SMALL_STATE(161)] = 4593,
  [SMALL_STATE(162)] = 4598,
  [SMALL_STATE(163)] = 4603,
  [SMALL_STATE(164)] = 4610,
  [SMALL_STATE(165)] = 4615,
  [SMALL_STATE(166)] = 4620,
  [SMALL_STATE(167)] = 4625,
  [SMALL_STATE(168)] = 4632,
  [SMALL_STATE(169)] = 4637,
  [SMALL_STATE(170)] = 4642,
  [SMALL_STATE(171)] = 4647,
  [SMALL_STATE(172)] = 4654,
  [SMALL_STATE(173)] = 4658,
  [SMALL_STATE(174)] = 4662,
  [SMALL_STATE(175)] = 4666,
  [SMALL_STATE(176)] = 4670,
  [SMALL_STATE(177)] = 4674,
  [SMALL_STATE(178)] = 4678,
  [SMALL_STATE(179)] = 4682,
  [SMALL_STATE(180)] = 4686,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(178),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(111),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(89),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(102),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(82),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(86),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(106),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(76),
  [261] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(102),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(83),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(86),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(96),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(77),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [336] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(119),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(99),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(90),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(91),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(115),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(130),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(159),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_setting, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [521] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
