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
#define STATE_COUNT 225
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  aux_sym_paragraph_token1 = 61,
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
  sym_paragraph = 111,
  sym__end_of_line = 112,
  aux_sym_document_repeat1 = 113,
  aux_sym_math_group_repeat1 = 114,
  aux_sym_option_block_repeat1 = 115,
  aux_sym_settings_block_repeat1 = 116,
  aux_sym_title_value_repeat1 = 117,
  aux_sym_value_repeat1 = 118,
  aux_sym_command_repeat1 = 119,
  aux_sym_paragraph_repeat1 = 120,
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
  [aux_sym_paragraph_token1] = "paragraph_token1",
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
  [sym_paragraph] = "paragraph",
  [sym__end_of_line] = "_end_of_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_math_group_repeat1] = "math_group_repeat1",
  [aux_sym_option_block_repeat1] = "option_block_repeat1",
  [aux_sym_settings_block_repeat1] = "settings_block_repeat1",
  [aux_sym_title_value_repeat1] = "title_value_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
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
  [aux_sym_paragraph_token1] = aux_sym_paragraph_token1,
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
  [sym_paragraph] = sym_paragraph,
  [sym__end_of_line] = sym__end_of_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_math_group_repeat1] = aux_sym_math_group_repeat1,
  [aux_sym_option_block_repeat1] = aux_sym_option_block_repeat1,
  [aux_sym_settings_block_repeat1] = aux_sym_settings_block_repeat1,
  [aux_sym_title_value_repeat1] = aux_sym_title_value_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
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
  [aux_sym_paragraph_token1] = {
    .visible = false,
    .named = false,
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
  [sym_paragraph] = {
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
  [aux_sym_paragraph_repeat1] = {
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
      if (eof) ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '=') ADVANCE(319);
      if (lookahead == '[') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(135);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '~') ADVANCE(133);
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(171);
      END_STATE();
    case 3:
      if (lookahead == 'C') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == 'M') ADVANCE(17);
      if (lookahead == 'P') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == 'X') ADVANCE(10);
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == 'D') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'L') ADVANCE(175);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(178);
      END_STATE();
    case 9:
      if (lookahead == 'L') ADVANCE(173);
      END_STATE();
    case 10:
      if (lookahead == 'M') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 12:
      if (lookahead == 'M') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'M') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(172);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(51);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(56);
      END_STATE();
    case 22:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'S') ADVANCE(176);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(6);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(2);
      END_STATE();
    case 28:
      if (lookahead == 'X') ADVANCE(174);
      END_STATE();
    case 29:
      if (lookahead == 'X') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(320);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'f') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 68:
      if (lookahead == 'k') ADVANCE(105);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(3);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 101:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 105:
      if (lookahead == 'z') ADVANCE(83);
      END_STATE();
    case 106:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(327);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(137);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(324);
      END_STATE();
    case 107:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(327);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(136);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(324);
      END_STATE();
    case 108:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(108)
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '%') ADVANCE(121);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(322);
      END_STATE();
    case 109:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(109)
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == '&') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(134);
      if (lookahead == '^') ADVANCE(128);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '|') ADVANCE(132);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '~') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(110)
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(318);
      END_STATE();
    case 111:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(111)
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '[') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(90);
      END_STATE();
    case 112:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 113:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(113)
      if (lookahead == '\\') ADVANCE(94);
      END_STATE();
    case 114:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(114)
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(326);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(318);
      END_STATE();
    case 115:
      if (eof) ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '\n') ADVANCE(325);
      if (lookahead == '\r') ADVANCE(327);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(324);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(322);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(123);
      if (lookahead != 0) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(123);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 's') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 's') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 's') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 's') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(264);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'p') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(198);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(164);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(200);
      if (lookahead == 'H') ADVANCE(202);
      if (lookahead == 'L') ADVANCE(203);
      if (lookahead == 'M') ADVANCE(194);
      if (lookahead == 'P') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(183);
      if (lookahead == 'X') ADVANCE(188);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(293);
      if (lookahead == 't') ADVANCE(230);
      if (lookahead == 'u') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 't') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(263);
      if (lookahead == 't') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      if (lookahead != 0) ADVANCE(144);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(250);
      if (lookahead == 'y') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(318);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(318);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(318);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(318);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(323);
      if (lookahead == '\r') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_paragraph_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(328);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(324);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 115},
  [2] = {.lex_state = 107},
  [3] = {.lex_state = 107},
  [4] = {.lex_state = 107},
  [5] = {.lex_state = 107},
  [6] = {.lex_state = 107},
  [7] = {.lex_state = 107},
  [8] = {.lex_state = 107},
  [9] = {.lex_state = 106},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 106},
  [13] = {.lex_state = 106},
  [14] = {.lex_state = 115},
  [15] = {.lex_state = 106},
  [16] = {.lex_state = 115},
  [17] = {.lex_state = 106},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 107},
  [20] = {.lex_state = 107},
  [21] = {.lex_state = 115},
  [22] = {.lex_state = 107},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 107},
  [25] = {.lex_state = 115},
  [26] = {.lex_state = 107},
  [27] = {.lex_state = 107},
  [28] = {.lex_state = 107},
  [29] = {.lex_state = 107},
  [30] = {.lex_state = 115},
  [31] = {.lex_state = 107},
  [32] = {.lex_state = 106},
  [33] = {.lex_state = 107},
  [34] = {.lex_state = 107},
  [35] = {.lex_state = 107},
  [36] = {.lex_state = 107},
  [37] = {.lex_state = 107},
  [38] = {.lex_state = 107},
  [39] = {.lex_state = 107},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 107},
  [42] = {.lex_state = 107},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 107},
  [45] = {.lex_state = 106},
  [46] = {.lex_state = 107},
  [47] = {.lex_state = 106},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 107},
  [50] = {.lex_state = 106},
  [51] = {.lex_state = 106},
  [52] = {.lex_state = 106},
  [53] = {.lex_state = 115},
  [54] = {.lex_state = 106},
  [55] = {.lex_state = 106},
  [56] = {.lex_state = 106},
  [57] = {.lex_state = 106},
  [58] = {.lex_state = 106},
  [59] = {.lex_state = 115},
  [60] = {.lex_state = 106},
  [61] = {.lex_state = 115},
  [62] = {.lex_state = 115},
  [63] = {.lex_state = 115},
  [64] = {.lex_state = 115},
  [65] = {.lex_state = 115},
  [66] = {.lex_state = 115},
  [67] = {.lex_state = 115},
  [68] = {.lex_state = 115},
  [69] = {.lex_state = 115},
  [70] = {.lex_state = 106},
  [71] = {.lex_state = 115},
  [72] = {.lex_state = 115},
  [73] = {.lex_state = 106},
  [74] = {.lex_state = 106},
  [75] = {.lex_state = 106},
  [76] = {.lex_state = 106},
  [77] = {.lex_state = 106},
  [78] = {.lex_state = 115},
  [79] = {.lex_state = 115},
  [80] = {.lex_state = 115},
  [81] = {.lex_state = 115},
  [82] = {.lex_state = 115},
  [83] = {.lex_state = 115},
  [84] = {.lex_state = 115},
  [85] = {.lex_state = 106},
  [86] = {.lex_state = 106},
  [87] = {.lex_state = 106},
  [88] = {.lex_state = 106},
  [89] = {.lex_state = 106},
  [90] = {.lex_state = 115},
  [91] = {.lex_state = 115},
  [92] = {.lex_state = 106},
  [93] = {.lex_state = 106},
  [94] = {.lex_state = 108},
  [95] = {.lex_state = 108},
  [96] = {.lex_state = 108},
  [97] = {.lex_state = 108},
  [98] = {.lex_state = 108},
  [99] = {.lex_state = 108},
  [100] = {.lex_state = 108},
  [101] = {.lex_state = 108},
  [102] = {.lex_state = 108},
  [103] = {.lex_state = 108},
  [104] = {.lex_state = 109},
  [105] = {.lex_state = 109},
  [106] = {.lex_state = 109},
  [107] = {.lex_state = 110},
  [108] = {.lex_state = 109},
  [109] = {.lex_state = 109},
  [110] = {.lex_state = 108},
  [111] = {.lex_state = 111, .external_lex_state = 1},
  [112] = {.lex_state = 108},
  [113] = {.lex_state = 108},
  [114] = {.lex_state = 111, .external_lex_state = 1},
  [115] = {.lex_state = 108},
  [116] = {.lex_state = 108},
  [117] = {.lex_state = 111, .external_lex_state = 1},
  [118] = {.lex_state = 108},
  [119] = {.lex_state = 108},
  [120] = {.lex_state = 108},
  [121] = {.lex_state = 111, .external_lex_state = 1},
  [122] = {.lex_state = 111, .external_lex_state = 1},
  [123] = {.lex_state = 112},
  [124] = {.lex_state = 111, .external_lex_state = 1},
  [125] = {.lex_state = 111, .external_lex_state = 1},
  [126] = {.lex_state = 108},
  [127] = {.lex_state = 108},
  [128] = {.lex_state = 108},
  [129] = {.lex_state = 111, .external_lex_state = 1},
  [130] = {.lex_state = 111, .external_lex_state = 1},
  [131] = {.lex_state = 112},
  [132] = {.lex_state = 110},
  [133] = {.lex_state = 112},
  [134] = {.lex_state = 112},
  [135] = {.lex_state = 112},
  [136] = {.lex_state = 112},
  [137] = {.lex_state = 110},
  [138] = {.lex_state = 110},
  [139] = {.lex_state = 112},
  [140] = {.lex_state = 112},
  [141] = {.lex_state = 112},
  [142] = {.lex_state = 111},
  [143] = {.lex_state = 111},
  [144] = {.lex_state = 111},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 113},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 114},
  [150] = {.lex_state = 114},
  [151] = {.lex_state = 113},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 111},
  [154] = {.lex_state = 113},
  [155] = {.lex_state = 113},
  [156] = {.lex_state = 112},
  [157] = {.lex_state = 111, .external_lex_state = 1},
  [158] = {.lex_state = 111, .external_lex_state = 1},
  [159] = {.lex_state = 114},
  [160] = {.lex_state = 111, .external_lex_state = 1},
  [161] = {.lex_state = 112},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 111, .external_lex_state = 1},
  [164] = {.lex_state = 110},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 111, .external_lex_state = 1},
  [167] = {.lex_state = 111, .external_lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 112},
  [170] = {.lex_state = 112},
  [171] = {.lex_state = 111, .external_lex_state = 1},
  [172] = {.lex_state = 111, .external_lex_state = 1},
  [173] = {.lex_state = 111, .external_lex_state = 1},
  [174] = {.lex_state = 111, .external_lex_state = 1},
  [175] = {.lex_state = 110},
  [176] = {.lex_state = 111, .external_lex_state = 1},
  [177] = {.lex_state = 112},
  [178] = {.lex_state = 111, .external_lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 110},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 114},
  [189] = {.lex_state = 114},
  [190] = {.lex_state = 159},
  [191] = {.lex_state = 159},
  [192] = {.lex_state = 114},
  [193] = {.lex_state = 159},
  [194] = {.lex_state = 159},
  [195] = {.lex_state = 159},
  [196] = {.lex_state = 159},
  [197] = {.lex_state = 111},
  [198] = {.lex_state = 111},
  [199] = {.lex_state = 111},
  [200] = {.lex_state = 159},
  [201] = {.lex_state = 159},
  [202] = {.lex_state = 111},
  [203] = {.lex_state = 159},
  [204] = {.lex_state = 159},
  [205] = {.lex_state = 159},
  [206] = {.lex_state = 111},
  [207] = {.lex_state = 159},
  [208] = {.lex_state = 111},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 111},
  [211] = {.lex_state = 159},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 159},
  [215] = {.lex_state = 159},
  [216] = {.lex_state = 111},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 159},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
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
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [sym_command_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(213),
    [sym__content] = STATE(14),
    [sym_main_start] = STATE(14),
    [sym_main_stop] = STATE(14),
    [sym_comment] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_brace_group_start] = STATE(5),
    [sym_brace_group] = STATE(14),
    [sym_command_group] = STATE(14),
    [sym_inline_math] = STATE(14),
    [sym_metapost_start] = STATE(200),
    [sym_metapost_inclusion] = STATE(14),
    [sym_tikz_start] = STATE(201),
    [sym_tikz_inclusion] = STATE(14),
    [sym_typing_start] = STATE(207),
    [sym_typing_inclusion] = STATE(14),
    [sym_typing_html_start] = STATE(205),
    [sym_typing_html_inclusion] = STATE(14),
    [sym_command] = STATE(14),
    [sym_paragraph] = STATE(14),
    [sym__end_of_line] = STATE(14),
    [aux_sym_document_repeat1] = STATE(14),
    [aux_sym_paragraph_repeat1] = STATE(30),
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
    [sym_command_name] = ACTIONS(25),
    [aux_sym_paragraph_token1] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CR_LF] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    ACTIONS(45), 1,
      sym_command_name,
    ACTIONS(47), 1,
      aux_sym_paragraph_token1,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    STATE(50), 1,
      sym_brace_group_stop,
    STATE(194), 1,
      sym_tikz_start,
    STATE(196), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(39), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(49), 3,
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
    STATE(7), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [102] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    ACTIONS(45), 1,
      sym_command_name,
    ACTIONS(47), 1,
      aux_sym_paragraph_token1,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    STATE(29), 1,
      sym_brace_group_stop,
    STATE(194), 1,
      sym_tikz_start,
    STATE(196), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(51), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(53), 3,
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
    STATE(8), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [204] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    ACTIONS(45), 1,
      sym_command_name,
    ACTIONS(47), 1,
      aux_sym_paragraph_token1,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    STATE(61), 1,
      sym_brace_group_stop,
    STATE(194), 1,
      sym_tikz_start,
    STATE(196), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(55), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(53), 3,
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
    STATE(8), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [306] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    ACTIONS(45), 1,
      sym_command_name,
    ACTIONS(47), 1,
      aux_sym_paragraph_token1,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    STATE(78), 1,
      sym_brace_group_stop,
    STATE(194), 1,
      sym_tikz_start,
    STATE(196), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(55), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(57), 3,
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
    STATE(4), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [408] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    ACTIONS(45), 1,
      sym_command_name,
    ACTIONS(47), 1,
      aux_sym_paragraph_token1,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    STATE(24), 1,
      sym_brace_group_stop,
    STATE(194), 1,
      sym_tikz_start,
    STATE(196), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(51), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(59), 3,
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
    STATE(3), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [510] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    ACTIONS(45), 1,
      sym_command_name,
    ACTIONS(47), 1,
      aux_sym_paragraph_token1,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    STATE(88), 1,
      sym_brace_group_stop,
    STATE(194), 1,
      sym_tikz_start,
    STATE(196), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(39), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(53), 3,
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
    STATE(8), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [612] = 22,
    ACTIONS(67), 1,
      aux_sym_comment_token1,
    ACTIONS(70), 1,
      anon_sym_DOLLAR,
    ACTIONS(78), 1,
      anon_sym_BSLASH,
    ACTIONS(81), 1,
      sym_command_group_start,
    ACTIONS(87), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(93), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(96), 1,
      sym_command_name,
    ACTIONS(99), 1,
      aux_sym_paragraph_token1,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(20), 1,
      aux_sym_paragraph_repeat1,
    STATE(194), 1,
      sym_tikz_start,
    STATE(196), 1,
      sym_typing_start,
    STATE(203), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_typing_html_start,
    ACTIONS(61), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(64), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(73), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(76), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(102), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(84), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(90), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [711] = 22,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_command_group_start,
    ACTIONS(117), 1,
      sym_command_group_stop,
    ACTIONS(119), 1,
      sym_command_name,
    ACTIONS(121), 1,
      aux_sym_paragraph_token1,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_tikz_start,
    STATE(195), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(105), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(107), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(123), 3,
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
    STATE(17), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [809] = 22,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_command_group_start,
    ACTIONS(119), 1,
      sym_command_name,
    ACTIONS(121), 1,
      aux_sym_paragraph_token1,
    ACTIONS(125), 1,
      sym_command_group_stop,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_tikz_start,
    STATE(195), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(105), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(107), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(127), 3,
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
    STATE(13), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [907] = 22,
    ACTIONS(76), 1,
      sym_command_group_stop,
    ACTIONS(87), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(93), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(135), 1,
      aux_sym_comment_token1,
    ACTIONS(138), 1,
      anon_sym_DOLLAR,
    ACTIONS(141), 1,
      anon_sym_BSLASH,
    ACTIONS(144), 1,
      sym_command_group_start,
    ACTIONS(147), 1,
      sym_command_name,
    ACTIONS(150), 1,
      aux_sym_paragraph_token1,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_tikz_start,
    STATE(195), 1,
      sym_metapost_start,
    ACTIONS(73), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(129), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(132), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(153), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(84), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(90), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(11), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1005] = 22,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_command_group_start,
    ACTIONS(119), 1,
      sym_command_name,
    ACTIONS(121), 1,
      aux_sym_paragraph_token1,
    ACTIONS(156), 1,
      sym_command_group_stop,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_tikz_start,
    STATE(195), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(105), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(107), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(158), 3,
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
    STATE(15), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1103] = 22,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_command_group_start,
    ACTIONS(119), 1,
      sym_command_name,
    ACTIONS(121), 1,
      aux_sym_paragraph_token1,
    ACTIONS(160), 1,
      sym_command_group_stop,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_tikz_start,
    STATE(195), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(105), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(107), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(162), 3,
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
    STATE(11), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1201] = 22,
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
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      aux_sym_paragraph_token1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(30), 1,
      aux_sym_paragraph_repeat1,
    STATE(200), 1,
      sym_metapost_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(205), 1,
      sym_typing_html_start,
    STATE(207), 1,
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
    ACTIONS(166), 3,
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
    STATE(16), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1299] = 22,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_command_group_start,
    ACTIONS(119), 1,
      sym_command_name,
    ACTIONS(121), 1,
      aux_sym_paragraph_token1,
    ACTIONS(168), 1,
      sym_command_group_stop,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_tikz_start,
    STATE(195), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(105), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(107), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(162), 3,
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
    STATE(11), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1397] = 22,
    ACTIONS(87), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(93), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(178), 1,
      aux_sym_comment_token1,
    ACTIONS(181), 1,
      anon_sym_DOLLAR,
    ACTIONS(184), 1,
      anon_sym_BSLASH,
    ACTIONS(187), 1,
      sym_command_group_start,
    ACTIONS(190), 1,
      sym_command_name,
    ACTIONS(193), 1,
      aux_sym_paragraph_token1,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(30), 1,
      aux_sym_paragraph_repeat1,
    STATE(200), 1,
      sym_metapost_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(205), 1,
      sym_typing_html_start,
    STATE(207), 1,
      sym_typing_start,
    ACTIONS(73), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(172), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(175), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(196), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(84), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(90), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(16), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1495] = 22,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(109), 1,
      aux_sym_comment_token1,
    ACTIONS(111), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(115), 1,
      sym_command_group_start,
    ACTIONS(119), 1,
      sym_command_name,
    ACTIONS(121), 1,
      aux_sym_paragraph_token1,
    ACTIONS(199), 1,
      sym_command_group_stop,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(45), 1,
      aux_sym_paragraph_repeat1,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_tikz_start,
    STATE(195), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(105), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(107), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(162), 3,
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
    STATE(11), 16,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1593] = 3,
    ACTIONS(203), 1,
      aux_sym_paragraph_token1,
    STATE(18), 1,
      aux_sym_paragraph_repeat1,
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
      sym_command_name,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1633] = 3,
    STATE(46), 1,
      sym__end_of_line,
    ACTIONS(208), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(206), 29,
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
      sym_command_name,
      aux_sym_paragraph_token1,
  [1673] = 2,
    STATE(18), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(211), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1711] = 4,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      aux_sym_paragraph_token1,
    STATE(21), 1,
      aux_sym_paragraph_repeat1,
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
      sym_command_name,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1752] = 1,
    ACTIONS(218), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1787] = 1,
    ACTIONS(220), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1822] = 1,
    ACTIONS(222), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1857] = 4,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(80), 1,
      sym__end_of_line,
    ACTIONS(226), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(206), 27,
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
      sym_command_name,
      aux_sym_paragraph_token1,
  [1898] = 1,
    ACTIONS(229), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1933] = 1,
    ACTIONS(231), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1968] = 1,
    ACTIONS(233), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2003] = 1,
    ACTIONS(235), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2038] = 3,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_paragraph_repeat1,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2077] = 1,
    ACTIONS(239), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2112] = 3,
    ACTIONS(241), 1,
      aux_sym_paragraph_token1,
    STATE(32), 1,
      aux_sym_paragraph_repeat1,
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
      sym_command_name,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2151] = 1,
    ACTIONS(244), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2186] = 1,
    ACTIONS(246), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2221] = 1,
    ACTIONS(248), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2256] = 1,
    ACTIONS(250), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2291] = 1,
    ACTIONS(252), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2326] = 1,
    ACTIONS(254), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2361] = 1,
    ACTIONS(256), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2396] = 1,
    ACTIONS(258), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2431] = 1,
    ACTIONS(260), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2466] = 1,
    ACTIONS(262), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2501] = 1,
    ACTIONS(264), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2536] = 1,
    ACTIONS(266), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2571] = 2,
    STATE(32), 1,
      aux_sym_paragraph_repeat1,
    ACTIONS(211), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2608] = 1,
    ACTIONS(201), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2643] = 3,
    STATE(75), 1,
      sym__end_of_line,
    ACTIONS(268), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(206), 28,
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
      sym_command_name,
      aux_sym_paragraph_token1,
  [2682] = 1,
    ACTIONS(271), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2717] = 1,
    ACTIONS(273), 32,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2752] = 1,
    ACTIONS(222), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2786] = 1,
    ACTIONS(218), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2820] = 1,
    ACTIONS(264), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2854] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(264), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2890] = 1,
    ACTIONS(250), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2924] = 1,
    ACTIONS(271), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2958] = 1,
    ACTIONS(252), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2992] = 1,
    ACTIONS(254), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3026] = 1,
    ACTIONS(246), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3060] = 2,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(233), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3096] = 1,
    ACTIONS(258), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3130] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3166] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3202] = 2,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3238] = 2,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
    ACTIONS(246), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3274] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
    ACTIONS(248), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3310] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3346] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3382] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(254), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3418] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(256), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3454] = 1,
    ACTIONS(260), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3488] = 2,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
    ACTIONS(231), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3524] = 2,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
    ACTIONS(229), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3560] = 1,
    ACTIONS(266), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3594] = 1,
    ACTIONS(262), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3628] = 1,
    ACTIONS(201), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3662] = 1,
    ACTIONS(220), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3696] = 1,
    ACTIONS(248), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3730] = 2,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
    ACTIONS(222), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3766] = 2,
    ACTIONS(303), 1,
      ts_builtin_sym_end,
    ACTIONS(220), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3802] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3838] = 2,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
    ACTIONS(262), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3874] = 2,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
    ACTIONS(266), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3910] = 2,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3946] = 2,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
    ACTIONS(258), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3982] = 1,
    ACTIONS(229), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4016] = 1,
    ACTIONS(231), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4050] = 1,
    ACTIONS(233), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4084] = 1,
    ACTIONS(235), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4118] = 1,
    ACTIONS(256), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4152] = 2,
    ACTIONS(313), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4188] = 2,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 30,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4224] = 1,
    ACTIONS(239), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4258] = 1,
    ACTIONS(244), 31,
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
      sym_command_name,
      aux_sym_paragraph_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4292] = 10,
    ACTIONS(317), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(331), 1,
      anon_sym_CR,
    STATE(183), 1,
      sym_title_value,
    ACTIONS(325), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(329), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(97), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4332] = 9,
    ACTIONS(333), 1,
      aux_sym_comment_token1,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      anon_sym_BSLASH,
    ACTIONS(344), 1,
      sym_command_name,
    ACTIONS(347), 1,
      aux_sym_title_text_token1,
    ACTIONS(353), 1,
      anon_sym_CR,
    ACTIONS(350), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(339), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(95), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4370] = 9,
    ACTIONS(356), 1,
      aux_sym_comment_token1,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    ACTIONS(364), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      sym_command_name,
    ACTIONS(370), 1,
      aux_sym_title_text_token1,
    ACTIONS(376), 1,
      anon_sym_CR,
    ACTIONS(373), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(362), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(96), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4408] = 9,
    ACTIONS(317), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(383), 1,
      anon_sym_CR,
    ACTIONS(379), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(381), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(96), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4445] = 9,
    ACTIONS(317), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    ACTIONS(389), 1,
      aux_sym_title_text_token1,
    ACTIONS(393), 1,
      anon_sym_CR,
    ACTIONS(387), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(391), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(95), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4482] = 9,
    ACTIONS(317), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    ACTIONS(389), 1,
      aux_sym_title_text_token1,
    ACTIONS(397), 1,
      anon_sym_CR,
    STATE(182), 1,
      sym_value,
    ACTIONS(395), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(98), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4518] = 9,
    ACTIONS(317), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    ACTIONS(403), 1,
      anon_sym_CR,
    ACTIONS(401), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(102), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4554] = 9,
    ACTIONS(317), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    ACTIONS(389), 1,
      aux_sym_title_text_token1,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    ACTIONS(409), 1,
      anon_sym_CR,
    ACTIONS(407), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(103), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4590] = 9,
    ACTIONS(317), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(383), 1,
      anon_sym_CR,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    ACTIONS(381), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(96), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4626] = 9,
    ACTIONS(317), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(385), 1,
      anon_sym_LBRACE,
    ACTIONS(389), 1,
      aux_sym_title_text_token1,
    ACTIONS(393), 1,
      anon_sym_CR,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(391), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(95), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4662] = 2,
    STATE(83), 1,
      sym_escapechar,
    ACTIONS(415), 11,
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
  [4679] = 2,
    STATE(115), 1,
      sym_escapechar,
    ACTIONS(417), 11,
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
  [4696] = 2,
    STATE(41), 1,
      sym_escapechar,
    ACTIONS(419), 11,
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
  [4713] = 10,
    ACTIONS(421), 1,
      sym_command_block_stop,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      aux_sym_keyword_token1,
    ACTIONS(427), 1,
      anon_sym_title,
    ACTIONS(431), 1,
      anon_sym_CR,
    STATE(152), 1,
      sym_keyword,
    STATE(221), 1,
      sym_key,
    STATE(222), 1,
      sym__end_of_line,
    ACTIONS(429), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(145), 2,
      sym_setting,
      sym_title_setting,
  [4746] = 2,
    STATE(70), 1,
      sym_escapechar,
    ACTIONS(433), 11,
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
  [4763] = 2,
    STATE(177), 1,
      sym_escapechar,
    ACTIONS(435), 11,
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
  [4780] = 2,
    ACTIONS(437), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(439), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4796] = 6,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_command_block_start,
    ACTIONS(447), 1,
      anon_sym_CR,
    ACTIONS(449), 1,
      sym_command_stop,
    ACTIONS(445), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(114), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4820] = 2,
    ACTIONS(233), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(277), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4836] = 2,
    ACTIONS(258), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(311), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4852] = 6,
    ACTIONS(451), 1,
      aux_sym_comment_token1,
    ACTIONS(454), 1,
      sym_command_block_start,
    ACTIONS(460), 1,
      anon_sym_CR,
    ACTIONS(463), 1,
      sym_command_stop,
    ACTIONS(457), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(114), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4876] = 2,
    ACTIONS(260), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(309), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4892] = 2,
    ACTIONS(271), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(313), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4908] = 6,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_command_block_start,
    ACTIONS(447), 1,
      anon_sym_CR,
    ACTIONS(465), 1,
      sym_command_stop,
    ACTIONS(445), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(114), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4932] = 2,
    ACTIONS(467), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(469), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4948] = 2,
    ACTIONS(471), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(473), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4964] = 2,
    ACTIONS(475), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(477), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4980] = 6,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_command_block_start,
    ACTIONS(481), 1,
      anon_sym_CR,
    ACTIONS(483), 1,
      sym_command_stop,
    ACTIONS(479), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(125), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5004] = 6,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_command_block_start,
    ACTIONS(487), 1,
      anon_sym_CR,
    ACTIONS(489), 1,
      sym_command_stop,
    ACTIONS(485), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(130), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5028] = 6,
    ACTIONS(491), 1,
      aux_sym_comment_token1,
    ACTIONS(496), 1,
      anon_sym_LBRACE,
    ACTIONS(499), 1,
      anon_sym_BSLASH,
    ACTIONS(502), 1,
      sym_math_text,
    ACTIONS(494), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(123), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5052] = 6,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_command_block_start,
    ACTIONS(507), 1,
      anon_sym_CR,
    ACTIONS(509), 1,
      sym_command_stop,
    ACTIONS(505), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(117), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5076] = 6,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_command_block_start,
    ACTIONS(447), 1,
      anon_sym_CR,
    ACTIONS(511), 1,
      sym_command_stop,
    ACTIONS(445), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(114), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5100] = 2,
    ACTIONS(513), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(515), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5116] = 2,
    ACTIONS(517), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(519), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5132] = 2,
    ACTIONS(262), 4,
      aux_sym_comment_token1,
      anon_sym_BSLASH,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(305), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5148] = 6,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_command_block_start,
    ACTIONS(523), 1,
      anon_sym_CR,
    ACTIONS(525), 1,
      sym_command_stop,
    ACTIONS(521), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(111), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5172] = 6,
    ACTIONS(441), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      sym_command_block_start,
    ACTIONS(447), 1,
      anon_sym_CR,
    ACTIONS(527), 1,
      sym_command_stop,
    ACTIONS(445), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(114), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5196] = 6,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(531), 1,
      anon_sym_DOLLAR,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_BSLASH,
    ACTIONS(537), 1,
      sym_math_text,
    STATE(123), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5219] = 8,
    ACTIONS(427), 1,
      anon_sym_title,
    ACTIONS(539), 1,
      sym_command_block_stop,
    ACTIONS(541), 1,
      aux_sym_keyword_token1,
    ACTIONS(545), 1,
      anon_sym_CR,
    STATE(164), 1,
      sym__end_of_line,
    STATE(221), 1,
      sym_key,
    ACTIONS(543), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(179), 2,
      sym_setting,
      sym_title_setting,
  [5246] = 6,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_BSLASH,
    ACTIONS(537), 1,
      sym_math_text,
    ACTIONS(547), 1,
      anon_sym_DOLLAR,
    STATE(123), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5269] = 6,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_BSLASH,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    ACTIONS(551), 1,
      sym_math_text,
    STATE(135), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5292] = 6,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_BSLASH,
    ACTIONS(537), 1,
      sym_math_text,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(123), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5315] = 6,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_BSLASH,
    ACTIONS(537), 1,
      sym_math_text,
    ACTIONS(555), 1,
      anon_sym_DOLLAR,
    STATE(123), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5338] = 8,
    ACTIONS(427), 1,
      anon_sym_title,
    ACTIONS(541), 1,
      aux_sym_keyword_token1,
    ACTIONS(557), 1,
      sym_command_block_stop,
    ACTIONS(561), 1,
      anon_sym_CR,
    STATE(175), 1,
      sym__end_of_line,
    STATE(221), 1,
      sym_key,
    ACTIONS(559), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(179), 2,
      sym_setting,
      sym_title_setting,
  [5365] = 7,
    ACTIONS(427), 1,
      anon_sym_title,
    ACTIONS(541), 1,
      aux_sym_keyword_token1,
    ACTIONS(565), 1,
      anon_sym_CR,
    STATE(185), 1,
      sym__end_of_line,
    STATE(221), 1,
      sym_key,
    ACTIONS(563), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(179), 2,
      sym_setting,
      sym_title_setting,
  [5389] = 5,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_BSLASH,
    ACTIONS(567), 1,
      sym_math_text,
    STATE(133), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5409] = 5,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_BSLASH,
    ACTIONS(569), 1,
      sym_math_text,
    STATE(136), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5429] = 5,
    ACTIONS(529), 1,
      aux_sym_comment_token1,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
    ACTIONS(535), 1,
      anon_sym_BSLASH,
    ACTIONS(571), 1,
      sym_math_text,
    STATE(131), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5449] = 2,
    STATE(67), 1,
      sym_typing_stop,
    ACTIONS(573), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5462] = 2,
    STATE(37), 1,
      sym_typing_stop,
    ACTIONS(575), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5475] = 2,
    STATE(56), 1,
      sym_typing_stop,
    ACTIONS(577), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5488] = 6,
    ACTIONS(579), 1,
      sym_command_block_stop,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_CR,
    STATE(147), 1,
      aux_sym_settings_block_repeat1,
    STATE(212), 1,
      sym__end_of_line,
    ACTIONS(583), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5508] = 2,
    STATE(63), 1,
      sym_metapost_stop,
    ACTIONS(587), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5520] = 6,
    ACTIONS(539), 1,
      sym_command_block_stop,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_CR,
    STATE(162), 1,
      aux_sym_settings_block_repeat1,
    STATE(217), 1,
      sym__end_of_line,
    ACTIONS(591), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5540] = 6,
    ACTIONS(595), 1,
      sym_command_block_stop,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_CR,
    STATE(168), 1,
      aux_sym_option_block_repeat1,
    STATE(219), 1,
      sym__end_of_line,
    ACTIONS(599), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5560] = 6,
    ACTIONS(595), 1,
      sym_command_block_stop,
    ACTIONS(603), 1,
      aux_sym_keyword_token1,
    ACTIONS(607), 1,
      anon_sym_CR,
    STATE(186), 1,
      sym_keyword,
    STATE(189), 1,
      sym__end_of_line,
    ACTIONS(605), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5580] = 6,
    ACTIONS(603), 1,
      aux_sym_keyword_token1,
    ACTIONS(609), 1,
      sym_command_block_stop,
    ACTIONS(613), 1,
      anon_sym_CR,
    STATE(186), 1,
      sym_keyword,
    STATE(188), 1,
      sym__end_of_line,
    ACTIONS(611), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5600] = 2,
    STATE(33), 1,
      sym_metapost_stop,
    ACTIONS(615), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5612] = 6,
    ACTIONS(617), 1,
      sym_command_block_stop,
    ACTIONS(619), 1,
      anon_sym_COMMA,
    ACTIONS(623), 1,
      anon_sym_CR,
    STATE(148), 1,
      aux_sym_option_block_repeat1,
    STATE(224), 1,
      sym__end_of_line,
    ACTIONS(621), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5632] = 1,
    ACTIONS(625), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5642] = 2,
    STATE(93), 1,
      sym_metapost_stop,
    ACTIONS(627), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5654] = 1,
    ACTIONS(629), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5663] = 1,
    ACTIONS(258), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5672] = 2,
    ACTIONS(633), 1,
      anon_sym_CR,
    ACTIONS(631), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5683] = 2,
    ACTIONS(637), 1,
      anon_sym_CR,
    ACTIONS(635), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5694] = 5,
    ACTIONS(603), 1,
      aux_sym_keyword_token1,
    ACTIONS(641), 1,
      anon_sym_CR,
    STATE(186), 1,
      sym_keyword,
    STATE(192), 1,
      sym__end_of_line,
    ACTIONS(639), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5711] = 2,
    ACTIONS(645), 1,
      anon_sym_CR,
    ACTIONS(643), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5722] = 1,
    ACTIONS(647), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5731] = 4,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_CR,
    STATE(162), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(649), 3,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5746] = 2,
    ACTIONS(658), 1,
      anon_sym_CR,
    ACTIONS(656), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5757] = 5,
    ACTIONS(427), 1,
      anon_sym_title,
    ACTIONS(541), 1,
      aux_sym_keyword_token1,
    ACTIONS(557), 1,
      sym_command_block_stop,
    STATE(221), 1,
      sym_key,
    STATE(181), 2,
      sym_setting,
      sym_title_setting,
  [5774] = 3,
    ACTIONS(662), 1,
      anon_sym_EQ,
    ACTIONS(664), 1,
      anon_sym_CR,
    ACTIONS(660), 4,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5787] = 2,
    ACTIONS(668), 1,
      anon_sym_CR,
    ACTIONS(666), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5798] = 2,
    ACTIONS(672), 1,
      anon_sym_CR,
    ACTIONS(670), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5809] = 4,
    ACTIONS(676), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_CR,
    STATE(168), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(674), 3,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5824] = 1,
    ACTIONS(681), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5833] = 1,
    ACTIONS(271), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5842] = 2,
    ACTIONS(633), 1,
      anon_sym_CR,
    ACTIONS(631), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5853] = 2,
    ACTIONS(685), 1,
      anon_sym_CR,
    ACTIONS(683), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5864] = 2,
    ACTIONS(689), 1,
      anon_sym_CR,
    ACTIONS(687), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5875] = 2,
    ACTIONS(693), 1,
      anon_sym_CR,
    ACTIONS(691), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5886] = 5,
    ACTIONS(427), 1,
      anon_sym_title,
    ACTIONS(541), 1,
      aux_sym_keyword_token1,
    ACTIONS(695), 1,
      sym_command_block_stop,
    STATE(221), 1,
      sym_key,
    STATE(181), 2,
      sym_setting,
      sym_title_setting,
  [5903] = 2,
    ACTIONS(672), 1,
      anon_sym_CR,
    ACTIONS(670), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5914] = 1,
    ACTIONS(260), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5923] = 2,
    ACTIONS(271), 1,
      anon_sym_CR,
    ACTIONS(313), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5934] = 2,
    ACTIONS(654), 1,
      anon_sym_CR,
    ACTIONS(649), 4,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5944] = 2,
    ACTIONS(699), 1,
      anon_sym_CR,
    ACTIONS(697), 4,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5954] = 2,
    ACTIONS(703), 1,
      anon_sym_CR,
    ACTIONS(701), 4,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5964] = 2,
    ACTIONS(707), 1,
      anon_sym_CR,
    ACTIONS(705), 4,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5974] = 2,
    ACTIONS(711), 1,
      anon_sym_CR,
    ACTIONS(709), 4,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5984] = 2,
    ACTIONS(664), 1,
      anon_sym_CR,
    ACTIONS(660), 4,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [5994] = 4,
    ACTIONS(427), 1,
      anon_sym_title,
    ACTIONS(541), 1,
      aux_sym_keyword_token1,
    STATE(221), 1,
      sym_key,
    STATE(181), 2,
      sym_setting,
      sym_title_setting,
  [6008] = 2,
    ACTIONS(679), 1,
      anon_sym_CR,
    ACTIONS(674), 4,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [6018] = 4,
    ACTIONS(713), 1,
      sym_command_block_stop,
    ACTIONS(717), 1,
      anon_sym_CR,
    STATE(223), 1,
      sym__end_of_line,
    ACTIONS(715), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [6032] = 3,
    ACTIONS(603), 1,
      aux_sym_keyword_token1,
    ACTIONS(719), 1,
      sym_command_block_stop,
    STATE(180), 1,
      sym_keyword,
  [6042] = 3,
    ACTIONS(603), 1,
      aux_sym_keyword_token1,
    ACTIONS(609), 1,
      sym_command_block_stop,
    STATE(180), 1,
      sym_keyword,
  [6052] = 2,
    ACTIONS(721), 1,
      aux_sym_metapost_body_token1,
    STATE(199), 1,
      sym_typing_html_body,
  [6059] = 2,
    ACTIONS(723), 1,
      aux_sym_metapost_body_token1,
    STATE(144), 1,
      sym_typing_body,
  [6066] = 2,
    ACTIONS(603), 1,
      aux_sym_keyword_token1,
    STATE(180), 1,
      sym_keyword,
  [6073] = 2,
    ACTIONS(725), 1,
      aux_sym_metapost_body_token1,
    STATE(197), 1,
      sym_tikz_body,
  [6080] = 2,
    ACTIONS(725), 1,
      aux_sym_metapost_body_token1,
    STATE(206), 1,
      sym_tikz_body,
  [6087] = 2,
    ACTIONS(727), 1,
      aux_sym_metapost_body_token1,
    STATE(154), 1,
      sym_metapost_body,
  [6094] = 2,
    ACTIONS(723), 1,
      aux_sym_metapost_body_token1,
    STATE(143), 1,
      sym_typing_body,
  [6101] = 2,
    ACTIONS(729), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(77), 1,
      sym_tikz_stop,
  [6108] = 2,
    ACTIONS(731), 1,
      anon_sym_BSLASHstopHTML,
    STATE(69), 1,
      sym_typing_html_stop,
  [6115] = 2,
    ACTIONS(733), 1,
      anon_sym_BSLASHstopHTML,
    STATE(89), 1,
      sym_typing_html_stop,
  [6122] = 2,
    ACTIONS(727), 1,
      aux_sym_metapost_body_token1,
    STATE(146), 1,
      sym_metapost_body,
  [6129] = 2,
    ACTIONS(725), 1,
      aux_sym_metapost_body_token1,
    STATE(202), 1,
      sym_tikz_body,
  [6136] = 2,
    ACTIONS(735), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(65), 1,
      sym_tikz_stop,
  [6143] = 2,
    ACTIONS(727), 1,
      aux_sym_metapost_body_token1,
    STATE(151), 1,
      sym_metapost_body,
  [6150] = 2,
    ACTIONS(721), 1,
      aux_sym_metapost_body_token1,
    STATE(208), 1,
      sym_typing_html_body,
  [6157] = 2,
    ACTIONS(721), 1,
      aux_sym_metapost_body_token1,
    STATE(198), 1,
      sym_typing_html_body,
  [6164] = 2,
    ACTIONS(737), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(35), 1,
      sym_tikz_stop,
  [6171] = 2,
    ACTIONS(723), 1,
      aux_sym_metapost_body_token1,
    STATE(142), 1,
      sym_typing_body,
  [6178] = 2,
    ACTIONS(739), 1,
      anon_sym_BSLASHstopHTML,
    STATE(39), 1,
      sym_typing_html_stop,
  [6185] = 1,
    ACTIONS(741), 1,
      anon_sym_EQ,
  [6189] = 1,
    ACTIONS(743), 1,
      anon_sym_BSLASHstoptikzpicture,
  [6193] = 1,
    ACTIONS(745), 1,
      aux_sym_metapost_body_token1,
  [6197] = 1,
    ACTIONS(539), 1,
      sym_command_block_stop,
  [6201] = 1,
    ACTIONS(747), 1,
      ts_builtin_sym_end,
  [6205] = 1,
    ACTIONS(749), 1,
      aux_sym_metapost_body_token1,
  [6209] = 1,
    ACTIONS(751), 1,
      aux_sym_metapost_body_token1,
  [6213] = 1,
    ACTIONS(753), 1,
      anon_sym_BSLASHstopHTML,
  [6217] = 1,
    ACTIONS(557), 1,
      sym_command_block_stop,
  [6221] = 1,
    ACTIONS(662), 1,
      anon_sym_EQ,
  [6225] = 1,
    ACTIONS(609), 1,
      sym_command_block_stop,
  [6229] = 1,
    ACTIONS(755), 1,
      aux_sym_metapost_body_token1,
  [6233] = 1,
    ACTIONS(757), 1,
      anon_sym_EQ,
  [6237] = 1,
    ACTIONS(713), 1,
      sym_command_block_stop,
  [6241] = 1,
    ACTIONS(759), 1,
      sym_command_block_stop,
  [6245] = 1,
    ACTIONS(595), 1,
      sym_command_block_stop,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 204,
  [SMALL_STATE(5)] = 306,
  [SMALL_STATE(6)] = 408,
  [SMALL_STATE(7)] = 510,
  [SMALL_STATE(8)] = 612,
  [SMALL_STATE(9)] = 711,
  [SMALL_STATE(10)] = 809,
  [SMALL_STATE(11)] = 907,
  [SMALL_STATE(12)] = 1005,
  [SMALL_STATE(13)] = 1103,
  [SMALL_STATE(14)] = 1201,
  [SMALL_STATE(15)] = 1299,
  [SMALL_STATE(16)] = 1397,
  [SMALL_STATE(17)] = 1495,
  [SMALL_STATE(18)] = 1593,
  [SMALL_STATE(19)] = 1633,
  [SMALL_STATE(20)] = 1673,
  [SMALL_STATE(21)] = 1711,
  [SMALL_STATE(22)] = 1752,
  [SMALL_STATE(23)] = 1787,
  [SMALL_STATE(24)] = 1822,
  [SMALL_STATE(25)] = 1857,
  [SMALL_STATE(26)] = 1898,
  [SMALL_STATE(27)] = 1933,
  [SMALL_STATE(28)] = 1968,
  [SMALL_STATE(29)] = 2003,
  [SMALL_STATE(30)] = 2038,
  [SMALL_STATE(31)] = 2077,
  [SMALL_STATE(32)] = 2112,
  [SMALL_STATE(33)] = 2151,
  [SMALL_STATE(34)] = 2186,
  [SMALL_STATE(35)] = 2221,
  [SMALL_STATE(36)] = 2256,
  [SMALL_STATE(37)] = 2291,
  [SMALL_STATE(38)] = 2326,
  [SMALL_STATE(39)] = 2361,
  [SMALL_STATE(40)] = 2396,
  [SMALL_STATE(41)] = 2431,
  [SMALL_STATE(42)] = 2466,
  [SMALL_STATE(43)] = 2501,
  [SMALL_STATE(44)] = 2536,
  [SMALL_STATE(45)] = 2571,
  [SMALL_STATE(46)] = 2608,
  [SMALL_STATE(47)] = 2643,
  [SMALL_STATE(48)] = 2682,
  [SMALL_STATE(49)] = 2717,
  [SMALL_STATE(50)] = 2752,
  [SMALL_STATE(51)] = 2786,
  [SMALL_STATE(52)] = 2820,
  [SMALL_STATE(53)] = 2854,
  [SMALL_STATE(54)] = 2890,
  [SMALL_STATE(55)] = 2924,
  [SMALL_STATE(56)] = 2958,
  [SMALL_STATE(57)] = 2992,
  [SMALL_STATE(58)] = 3026,
  [SMALL_STATE(59)] = 3060,
  [SMALL_STATE(60)] = 3096,
  [SMALL_STATE(61)] = 3130,
  [SMALL_STATE(62)] = 3166,
  [SMALL_STATE(63)] = 3202,
  [SMALL_STATE(64)] = 3238,
  [SMALL_STATE(65)] = 3274,
  [SMALL_STATE(66)] = 3310,
  [SMALL_STATE(67)] = 3346,
  [SMALL_STATE(68)] = 3382,
  [SMALL_STATE(69)] = 3418,
  [SMALL_STATE(70)] = 3454,
  [SMALL_STATE(71)] = 3488,
  [SMALL_STATE(72)] = 3524,
  [SMALL_STATE(73)] = 3560,
  [SMALL_STATE(74)] = 3594,
  [SMALL_STATE(75)] = 3628,
  [SMALL_STATE(76)] = 3662,
  [SMALL_STATE(77)] = 3696,
  [SMALL_STATE(78)] = 3730,
  [SMALL_STATE(79)] = 3766,
  [SMALL_STATE(80)] = 3802,
  [SMALL_STATE(81)] = 3838,
  [SMALL_STATE(82)] = 3874,
  [SMALL_STATE(83)] = 3910,
  [SMALL_STATE(84)] = 3946,
  [SMALL_STATE(85)] = 3982,
  [SMALL_STATE(86)] = 4016,
  [SMALL_STATE(87)] = 4050,
  [SMALL_STATE(88)] = 4084,
  [SMALL_STATE(89)] = 4118,
  [SMALL_STATE(90)] = 4152,
  [SMALL_STATE(91)] = 4188,
  [SMALL_STATE(92)] = 4224,
  [SMALL_STATE(93)] = 4258,
  [SMALL_STATE(94)] = 4292,
  [SMALL_STATE(95)] = 4332,
  [SMALL_STATE(96)] = 4370,
  [SMALL_STATE(97)] = 4408,
  [SMALL_STATE(98)] = 4445,
  [SMALL_STATE(99)] = 4482,
  [SMALL_STATE(100)] = 4518,
  [SMALL_STATE(101)] = 4554,
  [SMALL_STATE(102)] = 4590,
  [SMALL_STATE(103)] = 4626,
  [SMALL_STATE(104)] = 4662,
  [SMALL_STATE(105)] = 4679,
  [SMALL_STATE(106)] = 4696,
  [SMALL_STATE(107)] = 4713,
  [SMALL_STATE(108)] = 4746,
  [SMALL_STATE(109)] = 4763,
  [SMALL_STATE(110)] = 4780,
  [SMALL_STATE(111)] = 4796,
  [SMALL_STATE(112)] = 4820,
  [SMALL_STATE(113)] = 4836,
  [SMALL_STATE(114)] = 4852,
  [SMALL_STATE(115)] = 4876,
  [SMALL_STATE(116)] = 4892,
  [SMALL_STATE(117)] = 4908,
  [SMALL_STATE(118)] = 4932,
  [SMALL_STATE(119)] = 4948,
  [SMALL_STATE(120)] = 4964,
  [SMALL_STATE(121)] = 4980,
  [SMALL_STATE(122)] = 5004,
  [SMALL_STATE(123)] = 5028,
  [SMALL_STATE(124)] = 5052,
  [SMALL_STATE(125)] = 5076,
  [SMALL_STATE(126)] = 5100,
  [SMALL_STATE(127)] = 5116,
  [SMALL_STATE(128)] = 5132,
  [SMALL_STATE(129)] = 5148,
  [SMALL_STATE(130)] = 5172,
  [SMALL_STATE(131)] = 5196,
  [SMALL_STATE(132)] = 5219,
  [SMALL_STATE(133)] = 5246,
  [SMALL_STATE(134)] = 5269,
  [SMALL_STATE(135)] = 5292,
  [SMALL_STATE(136)] = 5315,
  [SMALL_STATE(137)] = 5338,
  [SMALL_STATE(138)] = 5365,
  [SMALL_STATE(139)] = 5389,
  [SMALL_STATE(140)] = 5409,
  [SMALL_STATE(141)] = 5429,
  [SMALL_STATE(142)] = 5449,
  [SMALL_STATE(143)] = 5462,
  [SMALL_STATE(144)] = 5475,
  [SMALL_STATE(145)] = 5488,
  [SMALL_STATE(146)] = 5508,
  [SMALL_STATE(147)] = 5520,
  [SMALL_STATE(148)] = 5540,
  [SMALL_STATE(149)] = 5560,
  [SMALL_STATE(150)] = 5580,
  [SMALL_STATE(151)] = 5600,
  [SMALL_STATE(152)] = 5612,
  [SMALL_STATE(153)] = 5632,
  [SMALL_STATE(154)] = 5642,
  [SMALL_STATE(155)] = 5654,
  [SMALL_STATE(156)] = 5663,
  [SMALL_STATE(157)] = 5672,
  [SMALL_STATE(158)] = 5683,
  [SMALL_STATE(159)] = 5694,
  [SMALL_STATE(160)] = 5711,
  [SMALL_STATE(161)] = 5722,
  [SMALL_STATE(162)] = 5731,
  [SMALL_STATE(163)] = 5746,
  [SMALL_STATE(164)] = 5757,
  [SMALL_STATE(165)] = 5774,
  [SMALL_STATE(166)] = 5787,
  [SMALL_STATE(167)] = 5798,
  [SMALL_STATE(168)] = 5809,
  [SMALL_STATE(169)] = 5824,
  [SMALL_STATE(170)] = 5833,
  [SMALL_STATE(171)] = 5842,
  [SMALL_STATE(172)] = 5853,
  [SMALL_STATE(173)] = 5864,
  [SMALL_STATE(174)] = 5875,
  [SMALL_STATE(175)] = 5886,
  [SMALL_STATE(176)] = 5903,
  [SMALL_STATE(177)] = 5914,
  [SMALL_STATE(178)] = 5923,
  [SMALL_STATE(179)] = 5934,
  [SMALL_STATE(180)] = 5944,
  [SMALL_STATE(181)] = 5954,
  [SMALL_STATE(182)] = 5964,
  [SMALL_STATE(183)] = 5974,
  [SMALL_STATE(184)] = 5984,
  [SMALL_STATE(185)] = 5994,
  [SMALL_STATE(186)] = 6008,
  [SMALL_STATE(187)] = 6018,
  [SMALL_STATE(188)] = 6032,
  [SMALL_STATE(189)] = 6042,
  [SMALL_STATE(190)] = 6052,
  [SMALL_STATE(191)] = 6059,
  [SMALL_STATE(192)] = 6066,
  [SMALL_STATE(193)] = 6073,
  [SMALL_STATE(194)] = 6080,
  [SMALL_STATE(195)] = 6087,
  [SMALL_STATE(196)] = 6094,
  [SMALL_STATE(197)] = 6101,
  [SMALL_STATE(198)] = 6108,
  [SMALL_STATE(199)] = 6115,
  [SMALL_STATE(200)] = 6122,
  [SMALL_STATE(201)] = 6129,
  [SMALL_STATE(202)] = 6136,
  [SMALL_STATE(203)] = 6143,
  [SMALL_STATE(204)] = 6150,
  [SMALL_STATE(205)] = 6157,
  [SMALL_STATE(206)] = 6164,
  [SMALL_STATE(207)] = 6171,
  [SMALL_STATE(208)] = 6178,
  [SMALL_STATE(209)] = 6185,
  [SMALL_STATE(210)] = 6189,
  [SMALL_STATE(211)] = 6193,
  [SMALL_STATE(212)] = 6197,
  [SMALL_STATE(213)] = 6201,
  [SMALL_STATE(214)] = 6205,
  [SMALL_STATE(215)] = 6209,
  [SMALL_STATE(216)] = 6213,
  [SMALL_STATE(217)] = 6217,
  [SMALL_STATE(218)] = 6221,
  [SMALL_STATE(219)] = 6225,
  [SMALL_STATE(220)] = 6229,
  [SMALL_STATE(221)] = 6233,
  [SMALL_STATE(222)] = 6237,
  [SMALL_STATE(223)] = 6241,
  [SMALL_STATE(224)] = 6245,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(141),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(106),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(211),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(220),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(215),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(214),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(129),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(55),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(91),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(90),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(139),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(122),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(19),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 1),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 1), SHIFT_REPEAT(46),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(25),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 1),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 1), SHIFT_REPEAT(80),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(47),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 1), SHIFT_REPEAT(75),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_setting, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(116),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(101),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(105),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(124),
  [347] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(126),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(95),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(95),
  [356] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(116),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(100),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(105),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(124),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(119),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(96),
  [376] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(96),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_value, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_brace_group, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(178),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(107),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(114),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(114),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_brace_group, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_text, 1),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_brace_group, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(170),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(134),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(109),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(123),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_text, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_brace_group, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [651] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(138),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(159),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [699] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_setting, 3),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [747] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
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
