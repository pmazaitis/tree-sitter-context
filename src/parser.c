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
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
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
  anon_sym_BSLASHstartCSS = 43,
  anon_sym_BSLASHstoptyping = 44,
  anon_sym_BSLASHstopLUA = 45,
  anon_sym_BSLASHstopMP = 46,
  anon_sym_BSLASHstopPARSEDXML = 47,
  anon_sym_BSLASHstopTEX = 48,
  anon_sym_BSLASHstopXML = 49,
  anon_sym_BSLASHstopCSS = 50,
  anon_sym_BSLASHstartHTML = 51,
  anon_sym_BSLASHstopHTML = 52,
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
  sym_typing_html_start = 92,
  sym_typing_html_stop = 93,
  sym_typing_html_body = 94,
  sym_typing_html_inclusion = 95,
  sym_option_block = 96,
  sym_keyword = 97,
  sym_settings_block = 98,
  sym_setting = 99,
  sym_title_setting = 100,
  sym_title_value = 101,
  sym__title_content = 102,
  sym_title_brace_group = 103,
  sym_title_text = 104,
  sym_key = 105,
  sym_value = 106,
  sym__value_content = 107,
  sym_value_text = 108,
  sym_value_brace_group = 109,
  sym_command = 110,
  sym__end_of_line = 111,
  aux_sym_document_repeat1 = 112,
  aux_sym_math_group_repeat1 = 113,
  aux_sym_option_block_repeat1 = 114,
  aux_sym_settings_block_repeat1 = 115,
  aux_sym_title_value_repeat1 = 116,
  aux_sym_value_repeat1 = 117,
  aux_sym_command_repeat1 = 118,
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
  [anon_sym_BSLASHstartCSS] = "\\startCSS",
  [anon_sym_BSLASHstoptyping] = "\\stoptyping",
  [anon_sym_BSLASHstopLUA] = "\\stopLUA",
  [anon_sym_BSLASHstopMP] = "\\stopMP",
  [anon_sym_BSLASHstopPARSEDXML] = "\\stopPARSEDXML",
  [anon_sym_BSLASHstopTEX] = "\\stopTEX",
  [anon_sym_BSLASHstopXML] = "\\stopXML",
  [anon_sym_BSLASHstopCSS] = "\\stopCSS",
  [anon_sym_BSLASHstartHTML] = "\\startHTML",
  [anon_sym_BSLASHstopHTML] = "\\stopHTML",
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
  [sym_typing_html_start] = "typing_html_start",
  [sym_typing_html_stop] = "typing_html_stop",
  [sym_typing_html_body] = "typing_html_body",
  [sym_typing_html_inclusion] = "typing_html_inclusion",
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
  [anon_sym_BSLASHstartCSS] = anon_sym_BSLASHstartCSS,
  [anon_sym_BSLASHstoptyping] = anon_sym_BSLASHstoptyping,
  [anon_sym_BSLASHstopLUA] = anon_sym_BSLASHstopLUA,
  [anon_sym_BSLASHstopMP] = anon_sym_BSLASHstopMP,
  [anon_sym_BSLASHstopPARSEDXML] = anon_sym_BSLASHstopPARSEDXML,
  [anon_sym_BSLASHstopTEX] = anon_sym_BSLASHstopTEX,
  [anon_sym_BSLASHstopXML] = anon_sym_BSLASHstopXML,
  [anon_sym_BSLASHstopCSS] = anon_sym_BSLASHstopCSS,
  [anon_sym_BSLASHstartHTML] = anon_sym_BSLASHstartHTML,
  [anon_sym_BSLASHstopHTML] = anon_sym_BSLASHstopHTML,
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
  [sym_typing_html_start] = sym_typing_html_start,
  [sym_typing_html_stop] = sym_typing_html_stop,
  [sym_typing_html_body] = sym_typing_html_body,
  [sym_typing_html_inclusion] = sym_typing_html_inclusion,
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
  [anon_sym_BSLASHstopCSS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartHTML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopHTML] = {
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
  [sym_typing_html_start] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_body] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_inclusion] = {
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
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(323);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(324);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(323);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(327);
      if (lookahead == '%') ADVANCE(248);
      if (lookahead == ',') ADVANCE(312);
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(261);
      if (lookahead == ']') ADVANCE(311);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '}') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(321);
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
      if (lookahead == 'A') ADVANCE(297);
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
      if (lookahead == 'L') ADVANCE(303);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(292);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(301);
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(304);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(299);
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
      if (lookahead == 'P') ADVANCE(298);
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
      if (lookahead == 'S') ADVANCE(295);
      END_STATE();
    case 50:
      if (lookahead == 'S') ADVANCE(302);
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
      if (lookahead == 'X') ADVANCE(300);
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
      if (lookahead == 'g') ADVANCE(296);
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
      if (lookahead == '[') ADVANCE(310);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < ']' || '_' < lookahead) &&
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
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
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
  [14] = {.lex_state = 242},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2, .external_lex_state = 1},
  [19] = {.lex_state = 2, .external_lex_state = 1},
  [20] = {.lex_state = 242, .external_lex_state = 1},
  [21] = {.lex_state = 242, .external_lex_state = 1},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 1},
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
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 242},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 242},
  [48] = {.lex_state = 242},
  [49] = {.lex_state = 242},
  [50] = {.lex_state = 242},
  [51] = {.lex_state = 242},
  [52] = {.lex_state = 242},
  [53] = {.lex_state = 242},
  [54] = {.lex_state = 242},
  [55] = {.lex_state = 242},
  [56] = {.lex_state = 242},
  [57] = {.lex_state = 242},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 242},
  [62] = {.lex_state = 242},
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
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 3, .external_lex_state = 1},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 3, .external_lex_state = 1},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 63},
  [118] = {.lex_state = 63},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 63},
  [121] = {.lex_state = 64},
  [122] = {.lex_state = 64},
  [123] = {.lex_state = 63},
  [124] = {.lex_state = 64},
  [125] = {.lex_state = 64},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 65},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 65},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 285},
  [155] = {.lex_state = 285},
  [156] = {.lex_state = 285},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 285},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 63},
  [162] = {.lex_state = 285},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 285},
  [165] = {.lex_state = 285},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 63},
  [168] = {.lex_state = 285},
  [169] = {.lex_state = 63},
  [170] = {.lex_state = 285},
  [171] = {.lex_state = 0, .external_lex_state = 1},
  [172] = {.lex_state = 285},
  [173] = {.lex_state = 285},
  [174] = {.lex_state = 63},
  [175] = {.lex_state = 285},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 63},
  [179] = {.lex_state = 65},
  [180] = {.lex_state = 63},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 63},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 63},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 285},
  [190] = {.lex_state = 285},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 285},
  [193] = {.lex_state = 285},
  [194] = {.lex_state = 0},
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
    [anon_sym_BSLASHstartCSS] = ACTIONS(1),
    [anon_sym_BSLASHstartHTML] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym_command_block_start] = ACTIONS(1),
    [sym_command_block_stop] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [sym_command_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(194),
    [sym__content] = STATE(14),
    [sym_main_start] = STATE(14),
    [sym_main_stop] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_brace_group_start] = STATE(4),
    [sym_brace_group] = STATE(14),
    [sym_command_group] = STATE(14),
    [sym_inline_math] = STATE(14),
    [sym_metapost_start] = STATE(173),
    [sym_metapost_inclusion] = STATE(14),
    [sym_tikz_start] = STATE(164),
    [sym_tikz_inclusion] = STATE(14),
    [sym_typing_start] = STATE(168),
    [sym_typing_inclusion] = STATE(14),
    [sym_typing_html_start] = STATE(172),
    [sym_typing_html_inclusion] = STATE(14),
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
    [anon_sym_BSLASHstartCSS] = ACTIONS(21),
    [anon_sym_BSLASHstartHTML] = ACTIONS(23),
    [sym_text] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_CR] = ACTIONS(25),
    [anon_sym_CR_LF] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(27), 1,
      sym_brace_group_stop,
    STATE(154), 1,
      sym_typing_html_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(156), 1,
      sym_tikz_start,
    STATE(158), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(41), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [93] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(79), 1,
      sym_brace_group_stop,
    STATE(154), 1,
      sym_typing_html_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(156), 1,
      sym_tikz_start,
    STATE(158), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(43), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(41), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [186] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(66), 1,
      sym_brace_group_stop,
    STATE(154), 1,
      sym_typing_html_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(156), 1,
      sym_tikz_start,
    STATE(158), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(45), 2,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(5), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [279] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(44), 1,
      sym_brace_group_stop,
    STATE(154), 1,
      sym_typing_html_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(156), 1,
      sym_tikz_start,
    STATE(158), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(41), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [372] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(60), 1,
      sym_brace_group_stop,
    STATE(154), 1,
      sym_typing_html_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(156), 1,
      sym_tikz_start,
    STATE(158), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(43), 2,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(3), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [465] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(32), 1,
      sym_brace_group_stop,
    STATE(154), 1,
      sym_typing_html_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(156), 1,
      sym_tikz_start,
    STATE(158), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(51), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(2), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [558] = 19,
    ACTIONS(59), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(73), 1,
      sym_command_group_start,
    ACTIONS(79), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(85), 1,
      anon_sym_BSLASHstartHTML,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(154), 1,
      sym_typing_html_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(156), 1,
      sym_tikz_start,
    STATE(158), 1,
      sym_metapost_start,
    ACTIONS(53), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(56), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(65), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(88), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(76), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(82), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [648] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      sym_command_group_start,
    ACTIONS(103), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(162), 1,
      sym_typing_html_start,
    STATE(165), 1,
      sym_typing_start,
    STATE(170), 1,
      sym_tikz_start,
    STATE(175), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(91), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(93), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(105), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(17), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [737] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      sym_command_group_start,
    ACTIONS(107), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(162), 1,
      sym_typing_html_start,
    STATE(165), 1,
      sym_typing_start,
    STATE(170), 1,
      sym_tikz_start,
    STATE(175), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(91), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(93), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(109), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(16), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [826] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      sym_command_group_start,
    ACTIONS(111), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(162), 1,
      sym_typing_html_start,
    STATE(165), 1,
      sym_typing_start,
    STATE(170), 1,
      sym_tikz_start,
    STATE(175), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(91), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(93), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(113), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(15), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [915] = 19,
    ACTIONS(68), 1,
      sym_command_group_stop,
    ACTIONS(79), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(85), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(121), 1,
      aux_sym_comment_token1,
    ACTIONS(124), 1,
      anon_sym_DOLLAR,
    ACTIONS(127), 1,
      anon_sym_BSLASH,
    ACTIONS(130), 1,
      sym_command_group_start,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(162), 1,
      sym_typing_html_start,
    STATE(165), 1,
      sym_typing_start,
    STATE(170), 1,
      sym_tikz_start,
    STATE(175), 1,
      sym_metapost_start,
    ACTIONS(65), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(115), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(118), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(133), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(76), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(82), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1004] = 19,
    ACTIONS(79), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(85), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      aux_sym_comment_token1,
    ACTIONS(147), 1,
      anon_sym_DOLLAR,
    ACTIONS(150), 1,
      anon_sym_BSLASH,
    ACTIONS(153), 1,
      sym_command_group_start,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(164), 1,
      sym_tikz_start,
    STATE(168), 1,
      sym_typing_start,
    STATE(172), 1,
      sym_typing_html_start,
    STATE(173), 1,
      sym_metapost_start,
    ACTIONS(65), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(138), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(141), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(156), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(76), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(82), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1093] = 19,
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
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(164), 1,
      sym_tikz_start,
    STATE(168), 1,
      sym_typing_start,
    STATE(172), 1,
      sym_typing_html_start,
    STATE(173), 1,
      sym_metapost_start,
    ACTIONS(3), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(5), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(161), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1182] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      sym_command_group_start,
    ACTIONS(163), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(162), 1,
      sym_typing_html_start,
    STATE(165), 1,
      sym_typing_start,
    STATE(170), 1,
      sym_tikz_start,
    STATE(175), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(91), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(93), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(165), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1271] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      sym_command_group_start,
    ACTIONS(167), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(162), 1,
      sym_typing_html_start,
    STATE(165), 1,
      sym_typing_start,
    STATE(170), 1,
      sym_tikz_start,
    STATE(175), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(91), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(93), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(165), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1360] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      anon_sym_DOLLAR,
    ACTIONS(99), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      sym_command_group_start,
    ACTIONS(169), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(162), 1,
      sym_typing_html_start,
    STATE(165), 1,
      sym_typing_start,
    STATE(170), 1,
      sym_tikz_start,
    STATE(175), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(91), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(93), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(165), 4,
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
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 15,
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
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1449] = 3,
    ACTIONS(173), 1,
      sym_command_block_start,
    ACTIONS(175), 1,
      sym_command_stop,
    ACTIONS(171), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1489] = 3,
    ACTIONS(173), 1,
      sym_command_block_start,
    ACTIONS(175), 1,
      sym_command_stop,
    ACTIONS(177), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1529] = 4,
    ACTIONS(173), 1,
      sym_command_block_start,
    ACTIONS(175), 1,
      sym_command_stop,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1570] = 4,
    ACTIONS(173), 1,
      sym_command_block_start,
    ACTIONS(175), 1,
      sym_command_stop,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1611] = 3,
    ACTIONS(173), 1,
      sym_command_block_start,
    ACTIONS(175), 1,
      sym_command_stop,
    ACTIONS(171), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1650] = 3,
    ACTIONS(173), 1,
      sym_command_block_start,
    ACTIONS(175), 1,
      sym_command_stop,
    ACTIONS(177), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1689] = 1,
    ACTIONS(183), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1723] = 1,
    ACTIONS(185), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1757] = 1,
    ACTIONS(187), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1791] = 1,
    ACTIONS(189), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1825] = 1,
    ACTIONS(191), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1859] = 1,
    ACTIONS(193), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1893] = 1,
    ACTIONS(195), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1927] = 1,
    ACTIONS(197), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1961] = 1,
    ACTIONS(199), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1995] = 1,
    ACTIONS(201), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2029] = 1,
    ACTIONS(203), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2063] = 1,
    ACTIONS(205), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2097] = 1,
    ACTIONS(207), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2131] = 1,
    ACTIONS(209), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2165] = 1,
    ACTIONS(211), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2199] = 1,
    ACTIONS(213), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2233] = 1,
    ACTIONS(215), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2267] = 1,
    ACTIONS(217), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2301] = 1,
    ACTIONS(219), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2335] = 1,
    ACTIONS(221), 31,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2369] = 2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(189), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2404] = 1,
    ACTIONS(217), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2437] = 1,
    ACTIONS(203), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2470] = 2,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2505] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(217), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2540] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2575] = 2,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2610] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2645] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2680] = 2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2715] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2750] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2785] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2820] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2855] = 1,
    ACTIONS(205), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2888] = 1,
    ACTIONS(207), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2921] = 1,
    ACTIONS(199), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2954] = 2,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2989] = 2,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3024] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(221), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3059] = 2,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3094] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3129] = 2,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3164] = 1,
    ACTIONS(221), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3197] = 1,
    ACTIONS(201), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3230] = 1,
    ACTIONS(219), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3263] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 29,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3298] = 1,
    ACTIONS(215), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3331] = 1,
    ACTIONS(213), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3364] = 1,
    ACTIONS(211), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3397] = 1,
    ACTIONS(209), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3430] = 1,
    ACTIONS(191), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3463] = 1,
    ACTIONS(185), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3496] = 1,
    ACTIONS(197), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3529] = 1,
    ACTIONS(195), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3562] = 1,
    ACTIONS(189), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3595] = 1,
    ACTIONS(183), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3628] = 1,
    ACTIONS(193), 30,
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
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3661] = 8,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(269), 1,
      aux_sym_title_text_token1,
    STATE(181), 1,
      sym_value,
    ACTIONS(267), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(271), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(87), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3696] = 7,
    ACTIONS(273), 1,
      aux_sym_comment_token1,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    ACTIONS(281), 1,
      anon_sym_BSLASH,
    ACTIONS(284), 1,
      aux_sym_title_text_token1,
    ACTIONS(279), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(287), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(83), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3729] = 8,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      aux_sym_title_text_token1,
    STATE(159), 1,
      sym_title_value,
    ACTIONS(292), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(296), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(86), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3764] = 7,
    ACTIONS(298), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(306), 1,
      anon_sym_BSLASH,
    ACTIONS(309), 1,
      aux_sym_title_text_token1,
    ACTIONS(304), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(312), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(85), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3797] = 7,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      aux_sym_title_text_token1,
    ACTIONS(315), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(83), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3829] = 7,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(269), 1,
      aux_sym_title_text_token1,
    ACTIONS(319), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(85), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3861] = 7,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      aux_sym_title_text_token1,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(91), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3892] = 7,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(269), 1,
      aux_sym_title_text_token1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(90), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3923] = 7,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(269), 1,
      aux_sym_title_text_token1,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(85), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3954] = 7,
    ACTIONS(261), 1,
      aux_sym_comment_token1,
    ACTIONS(265), 1,
      anon_sym_BSLASH,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(294), 1,
      aux_sym_title_text_token1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(83), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3985] = 3,
    ACTIONS(337), 1,
      sym_command_name,
    STATE(67), 1,
      sym_escapechar,
    ACTIONS(335), 11,
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
  [4005] = 3,
    ACTIONS(341), 1,
      sym_command_name,
    STATE(63), 1,
      sym_escapechar,
    ACTIONS(339), 11,
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
  [4025] = 3,
    ACTIONS(345), 1,
      sym_command_name,
    STATE(43), 1,
      sym_escapechar,
    ACTIONS(343), 11,
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
  [4045] = 3,
    ACTIONS(349), 1,
      sym_command_name,
    STATE(111), 1,
      sym_escapechar,
    ACTIONS(347), 11,
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
  [4065] = 3,
    ACTIONS(173), 1,
      sym_command_block_start,
    ACTIONS(175), 1,
      sym_command_stop,
    ACTIONS(177), 10,
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
  [4084] = 2,
    STATE(127), 1,
      sym_escapechar,
    ACTIONS(351), 11,
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
  [4101] = 3,
    ACTIONS(173), 1,
      sym_command_block_start,
    ACTIONS(175), 1,
      sym_command_stop,
    ACTIONS(171), 10,
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
  [4120] = 6,
    ACTIONS(353), 1,
      aux_sym_comment_token1,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    ACTIONS(361), 1,
      anon_sym_BSLASH,
    ACTIONS(364), 1,
      sym_math_text,
    ACTIONS(356), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(99), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4144] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      sym_math_text,
    STATE(99), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4167] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      sym_math_text,
    ACTIONS(377), 1,
      anon_sym_DOLLAR,
    STATE(99), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4190] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 1,
      sym_math_text,
    STATE(100), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4213] = 1,
    ACTIONS(383), 10,
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
  [4226] = 1,
    ACTIONS(385), 10,
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
  [4239] = 1,
    ACTIONS(217), 10,
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
  [4252] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      sym_math_text,
    ACTIONS(387), 1,
      anon_sym_DOLLAR,
    STATE(99), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4275] = 1,
    ACTIONS(219), 10,
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
  [4288] = 1,
    ACTIONS(389), 10,
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
  [4301] = 1,
    ACTIONS(391), 10,
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
  [4314] = 1,
    ACTIONS(393), 10,
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
  [4327] = 1,
    ACTIONS(221), 10,
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
  [4340] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    ACTIONS(375), 1,
      sym_math_text,
    ACTIONS(395), 1,
      anon_sym_DOLLAR,
    STATE(99), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4363] = 1,
    ACTIONS(397), 10,
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
  [4376] = 5,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    ACTIONS(399), 1,
      sym_math_text,
    STATE(106), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4396] = 5,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    ACTIONS(401), 1,
      sym_math_text,
    STATE(101), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4416] = 5,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      anon_sym_BSLASH,
    ACTIONS(403), 1,
      sym_math_text,
    STATE(112), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4436] = 2,
    STATE(38), 1,
      sym_typing_stop,
    ACTIONS(405), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4449] = 2,
    STATE(73), 1,
      sym_typing_stop,
    ACTIONS(407), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4462] = 7,
    ACTIONS(409), 1,
      sym_command_block_stop,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      aux_sym_keyword_token1,
    ACTIONS(415), 1,
      anon_sym_title,
    STATE(147), 1,
      sym_keyword,
    STATE(185), 1,
      sym_key,
    STATE(146), 2,
      sym_setting,
      sym_title_setting,
  [4485] = 2,
    STATE(55), 1,
      sym_typing_stop,
    ACTIONS(417), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4498] = 2,
    STATE(80), 1,
      sym_metapost_stop,
    ACTIONS(419), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4510] = 2,
    STATE(24), 1,
      sym_metapost_stop,
    ACTIONS(421), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4522] = 1,
    ACTIONS(423), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4532] = 2,
    STATE(51), 1,
      sym_metapost_stop,
    ACTIONS(425), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4544] = 1,
    ACTIONS(427), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4553] = 1,
    ACTIONS(429), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4562] = 1,
    ACTIONS(221), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4571] = 5,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(431), 1,
      sym_command_block_stop,
    ACTIONS(433), 1,
      aux_sym_keyword_token1,
    STATE(185), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [4588] = 1,
    ACTIONS(219), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4597] = 1,
    ACTIONS(217), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4606] = 5,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(433), 1,
      aux_sym_keyword_token1,
    ACTIONS(435), 1,
      sym_command_block_stop,
    STATE(185), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [4623] = 1,
    ACTIONS(437), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4632] = 3,
    ACTIONS(439), 1,
      sym_command_block_start,
    ACTIONS(441), 1,
      sym_command_stop,
    STATE(137), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4644] = 3,
    ACTIONS(439), 1,
      sym_command_block_start,
    ACTIONS(443), 1,
      sym_command_stop,
    STATE(137), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4656] = 3,
    ACTIONS(439), 1,
      sym_command_block_start,
    ACTIONS(445), 1,
      sym_command_stop,
    STATE(134), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4668] = 3,
    ACTIONS(439), 1,
      sym_command_block_start,
    ACTIONS(447), 1,
      sym_command_stop,
    STATE(137), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4680] = 3,
    ACTIONS(449), 1,
      sym_command_block_start,
    ACTIONS(452), 1,
      sym_command_stop,
    STATE(137), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4692] = 3,
    ACTIONS(439), 1,
      sym_command_block_start,
    ACTIONS(455), 1,
      sym_command_stop,
    STATE(137), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4704] = 3,
    ACTIONS(439), 1,
      sym_command_block_start,
    ACTIONS(457), 1,
      sym_command_stop,
    STATE(138), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4716] = 3,
    ACTIONS(439), 1,
      sym_command_block_start,
    ACTIONS(459), 1,
      sym_command_stop,
    STATE(136), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4728] = 4,
    ACTIONS(415), 1,
      anon_sym_title,
    ACTIONS(433), 1,
      aux_sym_keyword_token1,
    STATE(185), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [4742] = 3,
    ACTIONS(439), 1,
      sym_command_block_start,
    ACTIONS(461), 1,
      sym_command_stop,
    STATE(133), 3,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4754] = 2,
    ACTIONS(465), 1,
      anon_sym_EQ,
    ACTIONS(463), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4762] = 3,
    ACTIONS(467), 1,
      sym_command_block_stop,
    ACTIONS(469), 1,
      aux_sym_keyword_token1,
    STATE(166), 1,
      sym_keyword,
  [4772] = 3,
    ACTIONS(471), 1,
      sym_command_block_stop,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_settings_block_repeat1,
  [4782] = 3,
    ACTIONS(476), 1,
      sym_command_block_stop,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_settings_block_repeat1,
  [4792] = 3,
    ACTIONS(480), 1,
      sym_command_block_stop,
    ACTIONS(482), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_option_block_repeat1,
  [4802] = 3,
    ACTIONS(484), 1,
      sym_command_block_stop,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_option_block_repeat1,
  [4812] = 3,
    ACTIONS(469), 1,
      aux_sym_keyword_token1,
    ACTIONS(489), 1,
      sym_command_block_stop,
    STATE(166), 1,
      sym_keyword,
  [4822] = 3,
    ACTIONS(467), 1,
      sym_command_block_stop,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_option_block_repeat1,
  [4832] = 3,
    ACTIONS(431), 1,
      sym_command_block_stop,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_settings_block_repeat1,
  [4842] = 1,
    ACTIONS(463), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4847] = 1,
    ACTIONS(495), 2,
      sym_command_stop,
      sym_command_block_start,
  [4852] = 2,
    ACTIONS(497), 1,
      aux_sym_metapost_body_token1,
    STATE(180), 1,
      sym_typing_html_body,
  [4859] = 2,
    ACTIONS(499), 1,
      aux_sym_metapost_body_token1,
    STATE(117), 1,
      sym_typing_body,
  [4866] = 2,
    ACTIONS(501), 1,
      aux_sym_metapost_body_token1,
    STATE(178), 1,
      sym_tikz_body,
  [4873] = 1,
    ACTIONS(503), 2,
      sym_command_stop,
      sym_command_block_start,
  [4878] = 2,
    ACTIONS(505), 1,
      aux_sym_metapost_body_token1,
    STATE(122), 1,
      sym_metapost_body,
  [4885] = 1,
    ACTIONS(507), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4890] = 1,
    ACTIONS(509), 2,
      sym_command_stop,
      sym_command_block_start,
  [4895] = 2,
    ACTIONS(511), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(53), 1,
      sym_tikz_stop,
  [4902] = 2,
    ACTIONS(497), 1,
      aux_sym_metapost_body_token1,
    STATE(169), 1,
      sym_typing_html_body,
  [4909] = 1,
    ACTIONS(513), 2,
      sym_command_stop,
      sym_command_block_start,
  [4914] = 2,
    ACTIONS(501), 1,
      aux_sym_metapost_body_token1,
    STATE(161), 1,
      sym_tikz_body,
  [4921] = 2,
    ACTIONS(499), 1,
      aux_sym_metapost_body_token1,
    STATE(118), 1,
      sym_typing_body,
  [4928] = 1,
    ACTIONS(484), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4933] = 2,
    ACTIONS(515), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(77), 1,
      sym_tikz_stop,
  [4940] = 2,
    ACTIONS(499), 1,
      aux_sym_metapost_body_token1,
    STATE(120), 1,
      sym_typing_body,
  [4947] = 2,
    ACTIONS(517), 1,
      anon_sym_BSLASHstopHTML,
    STATE(71), 1,
      sym_typing_html_stop,
  [4954] = 2,
    ACTIONS(501), 1,
      aux_sym_metapost_body_token1,
    STATE(167), 1,
      sym_tikz_body,
  [4961] = 1,
    ACTIONS(519), 2,
      sym_command_stop,
      sym_command_block_start,
  [4966] = 2,
    ACTIONS(497), 1,
      aux_sym_metapost_body_token1,
    STATE(174), 1,
      sym_typing_html_body,
  [4973] = 2,
    ACTIONS(505), 1,
      aux_sym_metapost_body_token1,
    STATE(124), 1,
      sym_metapost_body,
  [4980] = 2,
    ACTIONS(521), 1,
      anon_sym_BSLASHstopHTML,
    STATE(57), 1,
      sym_typing_html_stop,
  [4987] = 2,
    ACTIONS(505), 1,
      aux_sym_metapost_body_token1,
    STATE(121), 1,
      sym_metapost_body,
  [4994] = 1,
    ACTIONS(471), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4999] = 1,
    ACTIONS(523), 2,
      sym_command_stop,
      sym_command_block_start,
  [5004] = 2,
    ACTIONS(525), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(31), 1,
      sym_tikz_stop,
  [5011] = 2,
    ACTIONS(469), 1,
      aux_sym_keyword_token1,
    STATE(166), 1,
      sym_keyword,
  [5018] = 2,
    ACTIONS(527), 1,
      anon_sym_BSLASHstopHTML,
    STATE(40), 1,
      sym_typing_html_stop,
  [5025] = 1,
    ACTIONS(529), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5030] = 1,
    ACTIONS(531), 2,
      sym_command_stop,
      sym_command_block_start,
  [5035] = 1,
    ACTIONS(503), 2,
      sym_command_stop,
      sym_command_block_start,
  [5040] = 1,
    ACTIONS(533), 1,
      anon_sym_BSLASHstoptikzpicture,
  [5044] = 1,
    ACTIONS(535), 1,
      anon_sym_EQ,
  [5048] = 1,
    ACTIONS(537), 1,
      anon_sym_BSLASHstopHTML,
  [5052] = 1,
    ACTIONS(465), 1,
      anon_sym_EQ,
  [5056] = 1,
    ACTIONS(539), 1,
      sym_command_block_stop,
  [5060] = 1,
    ACTIONS(541), 1,
      aux_sym_metapost_body_token1,
  [5064] = 1,
    ACTIONS(543), 1,
      aux_sym_metapost_body_token1,
  [5068] = 1,
    ACTIONS(545), 1,
      anon_sym_EQ,
  [5072] = 1,
    ACTIONS(547), 1,
      aux_sym_metapost_body_token1,
  [5076] = 1,
    ACTIONS(549), 1,
      aux_sym_metapost_body_token1,
  [5080] = 1,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 279,
  [SMALL_STATE(6)] = 372,
  [SMALL_STATE(7)] = 465,
  [SMALL_STATE(8)] = 558,
  [SMALL_STATE(9)] = 648,
  [SMALL_STATE(10)] = 737,
  [SMALL_STATE(11)] = 826,
  [SMALL_STATE(12)] = 915,
  [SMALL_STATE(13)] = 1004,
  [SMALL_STATE(14)] = 1093,
  [SMALL_STATE(15)] = 1182,
  [SMALL_STATE(16)] = 1271,
  [SMALL_STATE(17)] = 1360,
  [SMALL_STATE(18)] = 1449,
  [SMALL_STATE(19)] = 1489,
  [SMALL_STATE(20)] = 1529,
  [SMALL_STATE(21)] = 1570,
  [SMALL_STATE(22)] = 1611,
  [SMALL_STATE(23)] = 1650,
  [SMALL_STATE(24)] = 1689,
  [SMALL_STATE(25)] = 1723,
  [SMALL_STATE(26)] = 1757,
  [SMALL_STATE(27)] = 1791,
  [SMALL_STATE(28)] = 1825,
  [SMALL_STATE(29)] = 1859,
  [SMALL_STATE(30)] = 1893,
  [SMALL_STATE(31)] = 1927,
  [SMALL_STATE(32)] = 1961,
  [SMALL_STATE(33)] = 1995,
  [SMALL_STATE(34)] = 2029,
  [SMALL_STATE(35)] = 2063,
  [SMALL_STATE(36)] = 2097,
  [SMALL_STATE(37)] = 2131,
  [SMALL_STATE(38)] = 2165,
  [SMALL_STATE(39)] = 2199,
  [SMALL_STATE(40)] = 2233,
  [SMALL_STATE(41)] = 2267,
  [SMALL_STATE(42)] = 2301,
  [SMALL_STATE(43)] = 2335,
  [SMALL_STATE(44)] = 2369,
  [SMALL_STATE(45)] = 2404,
  [SMALL_STATE(46)] = 2437,
  [SMALL_STATE(47)] = 2470,
  [SMALL_STATE(48)] = 2505,
  [SMALL_STATE(49)] = 2540,
  [SMALL_STATE(50)] = 2575,
  [SMALL_STATE(51)] = 2610,
  [SMALL_STATE(52)] = 2645,
  [SMALL_STATE(53)] = 2680,
  [SMALL_STATE(54)] = 2715,
  [SMALL_STATE(55)] = 2750,
  [SMALL_STATE(56)] = 2785,
  [SMALL_STATE(57)] = 2820,
  [SMALL_STATE(58)] = 2855,
  [SMALL_STATE(59)] = 2888,
  [SMALL_STATE(60)] = 2921,
  [SMALL_STATE(61)] = 2954,
  [SMALL_STATE(62)] = 2989,
  [SMALL_STATE(63)] = 3024,
  [SMALL_STATE(64)] = 3059,
  [SMALL_STATE(65)] = 3094,
  [SMALL_STATE(66)] = 3129,
  [SMALL_STATE(67)] = 3164,
  [SMALL_STATE(68)] = 3197,
  [SMALL_STATE(69)] = 3230,
  [SMALL_STATE(70)] = 3263,
  [SMALL_STATE(71)] = 3298,
  [SMALL_STATE(72)] = 3331,
  [SMALL_STATE(73)] = 3364,
  [SMALL_STATE(74)] = 3397,
  [SMALL_STATE(75)] = 3430,
  [SMALL_STATE(76)] = 3463,
  [SMALL_STATE(77)] = 3496,
  [SMALL_STATE(78)] = 3529,
  [SMALL_STATE(79)] = 3562,
  [SMALL_STATE(80)] = 3595,
  [SMALL_STATE(81)] = 3628,
  [SMALL_STATE(82)] = 3661,
  [SMALL_STATE(83)] = 3696,
  [SMALL_STATE(84)] = 3729,
  [SMALL_STATE(85)] = 3764,
  [SMALL_STATE(86)] = 3797,
  [SMALL_STATE(87)] = 3829,
  [SMALL_STATE(88)] = 3861,
  [SMALL_STATE(89)] = 3892,
  [SMALL_STATE(90)] = 3923,
  [SMALL_STATE(91)] = 3954,
  [SMALL_STATE(92)] = 3985,
  [SMALL_STATE(93)] = 4005,
  [SMALL_STATE(94)] = 4025,
  [SMALL_STATE(95)] = 4045,
  [SMALL_STATE(96)] = 4065,
  [SMALL_STATE(97)] = 4084,
  [SMALL_STATE(98)] = 4101,
  [SMALL_STATE(99)] = 4120,
  [SMALL_STATE(100)] = 4144,
  [SMALL_STATE(101)] = 4167,
  [SMALL_STATE(102)] = 4190,
  [SMALL_STATE(103)] = 4213,
  [SMALL_STATE(104)] = 4226,
  [SMALL_STATE(105)] = 4239,
  [SMALL_STATE(106)] = 4252,
  [SMALL_STATE(107)] = 4275,
  [SMALL_STATE(108)] = 4288,
  [SMALL_STATE(109)] = 4301,
  [SMALL_STATE(110)] = 4314,
  [SMALL_STATE(111)] = 4327,
  [SMALL_STATE(112)] = 4340,
  [SMALL_STATE(113)] = 4363,
  [SMALL_STATE(114)] = 4376,
  [SMALL_STATE(115)] = 4396,
  [SMALL_STATE(116)] = 4416,
  [SMALL_STATE(117)] = 4436,
  [SMALL_STATE(118)] = 4449,
  [SMALL_STATE(119)] = 4462,
  [SMALL_STATE(120)] = 4485,
  [SMALL_STATE(121)] = 4498,
  [SMALL_STATE(122)] = 4510,
  [SMALL_STATE(123)] = 4522,
  [SMALL_STATE(124)] = 4532,
  [SMALL_STATE(125)] = 4544,
  [SMALL_STATE(126)] = 4553,
  [SMALL_STATE(127)] = 4562,
  [SMALL_STATE(128)] = 4571,
  [SMALL_STATE(129)] = 4588,
  [SMALL_STATE(130)] = 4597,
  [SMALL_STATE(131)] = 4606,
  [SMALL_STATE(132)] = 4623,
  [SMALL_STATE(133)] = 4632,
  [SMALL_STATE(134)] = 4644,
  [SMALL_STATE(135)] = 4656,
  [SMALL_STATE(136)] = 4668,
  [SMALL_STATE(137)] = 4680,
  [SMALL_STATE(138)] = 4692,
  [SMALL_STATE(139)] = 4704,
  [SMALL_STATE(140)] = 4716,
  [SMALL_STATE(141)] = 4728,
  [SMALL_STATE(142)] = 4742,
  [SMALL_STATE(143)] = 4754,
  [SMALL_STATE(144)] = 4762,
  [SMALL_STATE(145)] = 4772,
  [SMALL_STATE(146)] = 4782,
  [SMALL_STATE(147)] = 4792,
  [SMALL_STATE(148)] = 4802,
  [SMALL_STATE(149)] = 4812,
  [SMALL_STATE(150)] = 4822,
  [SMALL_STATE(151)] = 4832,
  [SMALL_STATE(152)] = 4842,
  [SMALL_STATE(153)] = 4847,
  [SMALL_STATE(154)] = 4852,
  [SMALL_STATE(155)] = 4859,
  [SMALL_STATE(156)] = 4866,
  [SMALL_STATE(157)] = 4873,
  [SMALL_STATE(158)] = 4878,
  [SMALL_STATE(159)] = 4885,
  [SMALL_STATE(160)] = 4890,
  [SMALL_STATE(161)] = 4895,
  [SMALL_STATE(162)] = 4902,
  [SMALL_STATE(163)] = 4909,
  [SMALL_STATE(164)] = 4914,
  [SMALL_STATE(165)] = 4921,
  [SMALL_STATE(166)] = 4928,
  [SMALL_STATE(167)] = 4933,
  [SMALL_STATE(168)] = 4940,
  [SMALL_STATE(169)] = 4947,
  [SMALL_STATE(170)] = 4954,
  [SMALL_STATE(171)] = 4961,
  [SMALL_STATE(172)] = 4966,
  [SMALL_STATE(173)] = 4973,
  [SMALL_STATE(174)] = 4980,
  [SMALL_STATE(175)] = 4987,
  [SMALL_STATE(176)] = 4994,
  [SMALL_STATE(177)] = 4999,
  [SMALL_STATE(178)] = 5004,
  [SMALL_STATE(179)] = 5011,
  [SMALL_STATE(180)] = 5018,
  [SMALL_STATE(181)] = 5025,
  [SMALL_STATE(182)] = 5030,
  [SMALL_STATE(183)] = 5035,
  [SMALL_STATE(184)] = 5040,
  [SMALL_STATE(185)] = 5044,
  [SMALL_STATE(186)] = 5048,
  [SMALL_STATE(187)] = 5052,
  [SMALL_STATE(188)] = 5056,
  [SMALL_STATE(189)] = 5060,
  [SMALL_STATE(190)] = 5064,
  [SMALL_STATE(191)] = 5068,
  [SMALL_STATE(192)] = 5072,
  [SMALL_STATE(193)] = 5076,
  [SMALL_STATE(194)] = 5080,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(189),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(190),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(192),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(193),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(58),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(116),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(105),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(88),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(95),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(104),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(83),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [298] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(105),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(89),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(95),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(113),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(85),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(130),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(102),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(97),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(99),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(119),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(137),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(141),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(179),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_setting, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [551] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
