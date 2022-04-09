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
#define STATE_COUNT 240
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 2
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
  sym_paragraph_text = 61,
  anon_sym_LF = 62,
  anon_sym_CR = 63,
  anon_sym_CR_LF = 64,
  sym_command_stop = 65,
  sym_paragraph_stop = 66,
  sym_document = 67,
  sym__content = 68,
  sym_main_start = 69,
  sym_main_stop = 70,
  sym_comment = 71,
  sym_escapechar = 72,
  sym_escaped = 73,
  sym_brace_group_start = 74,
  sym_brace_group_stop = 75,
  sym_brace_group = 76,
  sym_command_group = 77,
  sym_math_group = 78,
  sym__math_content = 79,
  sym_inline_math = 80,
  sym_metapost_start = 81,
  sym_metapost_stop = 82,
  sym_metapost_body = 83,
  sym_metapost_inclusion = 84,
  sym_tikz_start = 85,
  sym_tikz_stop = 86,
  sym_tikz_body = 87,
  sym_tikz_inclusion = 88,
  sym_typing_start = 89,
  sym_typing_stop = 90,
  sym_typing_body = 91,
  sym_typing_inclusion = 92,
  sym_typing_html_start = 93,
  sym_typing_html_stop = 94,
  sym_typing_html_body = 95,
  sym_typing_html_inclusion = 96,
  sym_option_block = 97,
  sym_keyword = 98,
  sym_settings_block = 99,
  sym_setting = 100,
  sym_title_setting = 101,
  sym_title_value = 102,
  sym__title_content = 103,
  sym_title_brace_group = 104,
  sym_title_text = 105,
  sym_key = 106,
  sym_value = 107,
  sym__value_content = 108,
  sym_value_text = 109,
  sym_value_brace_group = 110,
  sym_command = 111,
  sym_paragraph = 112,
  sym__paragraph_content = 113,
  sym_paragraph_escapechar = 114,
  sym_paragraph_escaped = 115,
  sym_paragraph_comment = 116,
  sym_paragraph_brace_group_start = 117,
  sym_paragraph_brace_group_stop = 118,
  sym_paragraph_brace_group = 119,
  sym__end_of_line = 120,
  aux_sym_document_repeat1 = 121,
  aux_sym_math_group_repeat1 = 122,
  aux_sym_option_block_repeat1 = 123,
  aux_sym_settings_block_repeat1 = 124,
  aux_sym_title_value_repeat1 = 125,
  aux_sym_value_repeat1 = 126,
  aux_sym_command_repeat1 = 127,
  aux_sym_paragraph_repeat1 = 128,
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
  [sym_paragraph_text] = "paragraph_text",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [sym_command_stop] = "command_stop",
  [sym_paragraph_stop] = "paragraph_stop",
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
  [sym__paragraph_content] = "_paragraph_content",
  [sym_paragraph_escapechar] = "paragraph_escapechar",
  [sym_paragraph_escaped] = "paragraph_escaped",
  [sym_paragraph_comment] = "paragraph_comment",
  [sym_paragraph_brace_group_start] = "paragraph_brace_group_start",
  [sym_paragraph_brace_group_stop] = "paragraph_brace_group_stop",
  [sym_paragraph_brace_group] = "paragraph_brace_group",
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
  [sym_paragraph_text] = sym_paragraph_text,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_command_stop] = sym_command_stop,
  [sym_paragraph_stop] = sym_paragraph_stop,
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
  [sym__paragraph_content] = sym__paragraph_content,
  [sym_paragraph_escapechar] = sym_paragraph_escapechar,
  [sym_paragraph_escaped] = sym_paragraph_escaped,
  [sym_paragraph_comment] = sym_paragraph_comment,
  [sym_paragraph_brace_group_start] = sym_paragraph_brace_group_start,
  [sym_paragraph_brace_group_stop] = sym_paragraph_brace_group_stop,
  [sym_paragraph_brace_group] = sym_paragraph_brace_group,
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
  [sym_paragraph_text] = {
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
  [sym_paragraph_stop] = {
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
  [sym__paragraph_content] = {
    .visible = false,
    .named = true,
  },
  [sym_paragraph_escapechar] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_brace_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_brace_group_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_brace_group] = {
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
      if (eof) ADVANCE(131);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '&') ADVANCE(142);
      if (lookahead == ',') ADVANCE(332);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == '^') ADVANCE(143);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '~') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '\r') ADVANCE(347);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(344);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '\r') ADVANCE(347);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(344);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '\r') ADVANCE(348);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '[') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '\r') ADVANCE(348);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == ',') ADVANCE(332);
      if (lookahead == '\\') ADVANCE(156);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(341);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '\r') ADVANCE(348);
      if (lookahead == ',') ADVANCE(332);
      if (lookahead == '=') ADVANCE(338);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '\r') ADVANCE(348);
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '%') ADVANCE(141);
      if (lookahead == '&') ADVANCE(142);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '^') ADVANCE(143);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '|') ADVANCE(147);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '~') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '}') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(344);
      END_STATE();
    case 10:
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(344);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(190);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(20);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(194);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(197);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(192);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(114);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'P') ADVANCE(191);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(68);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(195);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'U') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'X') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'X') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(337);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(174);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(189);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(110);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(102);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(129);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(160);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 129:
      if (lookahead == 'z') ADVANCE(103);
      END_STATE();
    case 130:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '\r') ADVANCE(347);
      if (lookahead == '$') ADVANCE(140);
      if (lookahead == '%') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '{') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(344);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(341);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(138);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(165);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(138);
      if (lookahead != 0) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 's') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == 's') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 's') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead == 's') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(217);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(183);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(219);
      if (lookahead == 'H') ADVANCE(221);
      if (lookahead == 'L') ADVANCE(222);
      if (lookahead == 'M') ADVANCE(213);
      if (lookahead == 'P') ADVANCE(198);
      if (lookahead == 'T') ADVANCE(202);
      if (lookahead == 'X') ADVANCE(207);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(312);
      if (lookahead == 't') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (lookahead != 0) ADVANCE(162);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 't') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 't') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(329);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(329);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(337);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_paragraph_text);
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '\r') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(344);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_paragraph_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_paragraph_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '\r') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '\r') ADVANCE(348);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(345);
      if (lookahead == '\r') ADVANCE(347);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(342);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(346);
      if (lookahead == '\r') ADVANCE(348);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 130},
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
  [12] = {.lex_state = 130},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 130},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 130, .external_lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 1, .external_lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1, .external_lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 130, .external_lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 130},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 130},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 130},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 130},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 130},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 130},
  [66] = {.lex_state = 130},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 130},
  [69] = {.lex_state = 130},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 130},
  [72] = {.lex_state = 130},
  [73] = {.lex_state = 130},
  [74] = {.lex_state = 130},
  [75] = {.lex_state = 130},
  [76] = {.lex_state = 130},
  [77] = {.lex_state = 130},
  [78] = {.lex_state = 130},
  [79] = {.lex_state = 130},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 130},
  [82] = {.lex_state = 130},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 9},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 9},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 10, .external_lex_state = 2},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 10, .external_lex_state = 2},
  [110] = {.lex_state = 10, .external_lex_state = 2},
  [111] = {.lex_state = 10, .external_lex_state = 2},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 3, .external_lex_state = 3},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 3, .external_lex_state = 3},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 3, .external_lex_state = 3},
  [120] = {.lex_state = 3, .external_lex_state = 3},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 3, .external_lex_state = 3},
  [123] = {.lex_state = 3, .external_lex_state = 3},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 3, .external_lex_state = 3},
  [127] = {.lex_state = 3, .external_lex_state = 3},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 3, .external_lex_state = 3},
  [131] = {.lex_state = 4},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 40},
  [145] = {.lex_state = 40},
  [146] = {.lex_state = 40},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 40},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 41},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 9},
  [159] = {.lex_state = 41},
  [160] = {.lex_state = 9},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 3, .external_lex_state = 3},
  [165] = {.lex_state = 42},
  [166] = {.lex_state = 5},
  [167] = {.lex_state = 3, .external_lex_state = 3},
  [168] = {.lex_state = 3, .external_lex_state = 3},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 3, .external_lex_state = 3},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 3, .external_lex_state = 3},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 10, .external_lex_state = 2},
  [175] = {.lex_state = 3, .external_lex_state = 3},
  [176] = {.lex_state = 10, .external_lex_state = 2},
  [177] = {.lex_state = 10, .external_lex_state = 2},
  [178] = {.lex_state = 3, .external_lex_state = 3},
  [179] = {.lex_state = 3, .external_lex_state = 3},
  [180] = {.lex_state = 3, .external_lex_state = 3},
  [181] = {.lex_state = 3, .external_lex_state = 3},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 41},
  [184] = {.lex_state = 3, .external_lex_state = 3},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 10, .external_lex_state = 2},
  [187] = {.lex_state = 42},
  [188] = {.lex_state = 10, .external_lex_state = 2},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 3, .external_lex_state = 3},
  [192] = {.lex_state = 10, .external_lex_state = 2},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 42},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 43},
  [204] = {.lex_state = 43},
  [205] = {.lex_state = 40},
  [206] = {.lex_state = 43},
  [207] = {.lex_state = 178},
  [208] = {.lex_state = 178},
  [209] = {.lex_state = 178},
  [210] = {.lex_state = 178},
  [211] = {.lex_state = 40},
  [212] = {.lex_state = 40},
  [213] = {.lex_state = 178},
  [214] = {.lex_state = 40},
  [215] = {.lex_state = 178},
  [216] = {.lex_state = 178},
  [217] = {.lex_state = 178},
  [218] = {.lex_state = 178},
  [219] = {.lex_state = 178},
  [220] = {.lex_state = 40},
  [221] = {.lex_state = 178},
  [222] = {.lex_state = 178},
  [223] = {.lex_state = 40},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 178},
  [232] = {.lex_state = 178},
  [233] = {.lex_state = 178},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 40},
  [236] = {.lex_state = 40},
  [237] = {.lex_state = 178},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
};

enum {
  ts_external_token_command_stop = 0,
  ts_external_token_paragraph_stop = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_command_stop] = sym_command_stop,
  [ts_external_token_paragraph_stop] = sym_paragraph_stop,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_command_stop] = true,
    [ts_external_token_paragraph_stop] = true,
  },
  [2] = {
    [ts_external_token_paragraph_stop] = true,
  },
  [3] = {
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
    [sym_paragraph_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(228),
    [sym__content] = STATE(17),
    [sym_main_start] = STATE(17),
    [sym_main_stop] = STATE(17),
    [sym_comment] = STATE(17),
    [sym_escaped] = STATE(17),
    [sym_brace_group_start] = STATE(7),
    [sym_brace_group] = STATE(17),
    [sym_command_group] = STATE(17),
    [sym_inline_math] = STATE(17),
    [sym_metapost_start] = STATE(213),
    [sym_metapost_inclusion] = STATE(17),
    [sym_tikz_start] = STATE(215),
    [sym_tikz_inclusion] = STATE(17),
    [sym_typing_start] = STATE(221),
    [sym_typing_inclusion] = STATE(17),
    [sym_typing_html_start] = STATE(222),
    [sym_typing_html_inclusion] = STATE(17),
    [sym_command] = STATE(17),
    [sym_paragraph] = STATE(17),
    [sym__paragraph_content] = STATE(109),
    [sym_paragraph_escaped] = STATE(109),
    [sym_paragraph_comment] = STATE(109),
    [sym_paragraph_brace_group_start] = STATE(97),
    [sym_paragraph_brace_group] = STATE(109),
    [sym__end_of_line] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [aux_sym_paragraph_repeat1] = STATE(109),
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
    [sym_paragraph_text] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CR_LF] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
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
      sym_paragraph_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(59), 1,
      sym_brace_group_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(207), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(209), 1,
      sym_tikz_start,
    STATE(210), 1,
      sym_metapost_start,
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
    STATE(110), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
  [109] = 24,
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
      sym_paragraph_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(39), 1,
      sym_brace_group_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(207), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(209), 1,
      sym_tikz_start,
    STATE(210), 1,
      sym_metapost_start,
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
    STATE(110), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(6), 16,
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
  [218] = 24,
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
      sym_paragraph_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(67), 1,
      sym_brace_group_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(207), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(209), 1,
      sym_tikz_start,
    STATE(210), 1,
      sym_metapost_start,
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
    ACTIONS(55), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(110), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(2), 16,
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
  [327] = 24,
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
      sym_paragraph_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(71), 1,
      sym_brace_group_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(207), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(209), 1,
      sym_tikz_start,
    STATE(210), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(57), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(49), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(110), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
  [436] = 24,
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
      sym_paragraph_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(28), 1,
      sym_brace_group_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(207), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(209), 1,
      sym_tikz_start,
    STATE(210), 1,
      sym_metapost_start,
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
    ACTIONS(49), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(110), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
  [545] = 24,
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
      sym_paragraph_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(68), 1,
      sym_brace_group_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(207), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(209), 1,
      sym_tikz_start,
    STATE(210), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(31), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(33), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(57), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(59), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(110), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(5), 16,
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
  [654] = 23,
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
      sym_paragraph_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(207), 1,
      sym_typing_html_start,
    STATE(208), 1,
      sym_typing_start,
    STATE(209), 1,
      sym_tikz_start,
    STATE(210), 1,
      sym_metapost_start,
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
    STATE(110), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
  [760] = 23,
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
      sym_paragraph_text,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(216), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_typing_start,
    STATE(218), 1,
      sym_tikz_start,
    STATE(219), 1,
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
    STATE(107), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(10), 16,
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
  [865] = 23,
    ACTIONS(76), 1,
      sym_command_group_stop,
    ACTIONS(87), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(93), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(131), 1,
      aux_sym_comment_token1,
    ACTIONS(134), 1,
      anon_sym_DOLLAR,
    ACTIONS(137), 1,
      anon_sym_BSLASH,
    ACTIONS(140), 1,
      sym_command_group_start,
    ACTIONS(143), 1,
      sym_command_name,
    ACTIONS(146), 1,
      sym_paragraph_text,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(216), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_typing_start,
    STATE(218), 1,
      sym_tikz_start,
    STATE(219), 1,
      sym_metapost_start,
    ACTIONS(73), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(125), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(128), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(149), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(10), 16,
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
  [970] = 23,
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
      sym_paragraph_text,
    ACTIONS(152), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(216), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_typing_start,
    STATE(218), 1,
      sym_tikz_start,
    STATE(219), 1,
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
    STATE(107), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(10), 16,
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
  [1075] = 23,
    ACTIONS(87), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(93), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      aux_sym_comment_token1,
    ACTIONS(165), 1,
      anon_sym_DOLLAR,
    ACTIONS(168), 1,
      anon_sym_BSLASH,
    ACTIONS(171), 1,
      sym_command_group_start,
    ACTIONS(174), 1,
      sym_command_name,
    ACTIONS(177), 1,
      sym_paragraph_text,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(213), 1,
      sym_metapost_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(221), 1,
      sym_typing_start,
    STATE(222), 1,
      sym_typing_html_start,
    ACTIONS(73), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(156), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(159), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(180), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(109), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(12), 16,
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
  [1180] = 23,
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
      sym_paragraph_text,
    ACTIONS(183), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(216), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_typing_start,
    STATE(218), 1,
      sym_tikz_start,
    STATE(219), 1,
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
    ACTIONS(185), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(9), 16,
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
  [1285] = 23,
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
      sym_paragraph_text,
    ACTIONS(187), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(216), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_typing_start,
    STATE(218), 1,
      sym_tikz_start,
    STATE(219), 1,
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
    ACTIONS(189), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
  [1390] = 23,
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
      sym_paragraph_text,
    ACTIONS(191), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(216), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_typing_start,
    STATE(218), 1,
      sym_tikz_start,
    STATE(219), 1,
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
    STATE(107), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(10), 16,
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
  [1495] = 23,
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
      sym_paragraph_text,
    ACTIONS(193), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(216), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_typing_start,
    STATE(218), 1,
      sym_tikz_start,
    STATE(219), 1,
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
    ACTIONS(195), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
  [1600] = 23,
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
      sym_paragraph_text,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_brace_group_start,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    STATE(213), 1,
      sym_metapost_start,
    STATE(215), 1,
      sym_tikz_start,
    STATE(221), 1,
      sym_typing_start,
    STATE(222), 1,
      sym_typing_html_start,
    ACTIONS(3), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(5), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(199), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(109), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
    STATE(12), 16,
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
  [1705] = 2,
    ACTIONS(203), 1,
      sym_paragraph_stop,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1743] = 3,
    ACTIONS(209), 1,
      sym_paragraph_stop,
    ACTIONS(207), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_paragraph_text,
    ACTIONS(205), 27,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
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
  [1783] = 4,
    ACTIONS(209), 1,
      sym_paragraph_stop,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_paragraph_text,
    ACTIONS(205), 25,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      anon_sym_DOLLAR,
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
  [1824] = 1,
    ACTIONS(213), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1859] = 1,
    ACTIONS(215), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1894] = 1,
    ACTIONS(217), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1929] = 2,
    ACTIONS(203), 1,
      sym_paragraph_stop,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1966] = 1,
    ACTIONS(219), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2001] = 1,
    ACTIONS(221), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2036] = 1,
    ACTIONS(223), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2071] = 1,
    ACTIONS(225), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2106] = 3,
    ACTIONS(209), 1,
      sym_paragraph_stop,
    ACTIONS(207), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_paragraph_text,
    ACTIONS(205), 26,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      anon_sym_DOLLAR,
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
  [2145] = 1,
    ACTIONS(227), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2180] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2215] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2250] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2285] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2320] = 3,
    ACTIONS(203), 1,
      sym_paragraph_stop,
    ACTIONS(237), 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2359] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2394] = 1,
    ACTIONS(241), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2429] = 1,
    ACTIONS(243), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2464] = 1,
    ACTIONS(245), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2499] = 1,
    ACTIONS(247), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2534] = 1,
    ACTIONS(249), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2569] = 1,
    ACTIONS(251), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2604] = 1,
    ACTIONS(253), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2639] = 1,
    ACTIONS(255), 32,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2674] = 2,
    ACTIONS(257), 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2710] = 1,
    ACTIONS(247), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2744] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2778] = 2,
    ACTIONS(259), 1,
      ts_builtin_sym_end,
    ACTIONS(243), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2814] = 1,
    ACTIONS(255), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2848] = 1,
    ACTIONS(213), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2882] = 1,
    ACTIONS(215), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2916] = 1,
    ACTIONS(217), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2950] = 2,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
    ACTIONS(253), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2986] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3020] = 1,
    ACTIONS(219), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3054] = 1,
    ACTIONS(221), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3088] = 1,
    ACTIONS(223), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3122] = 2,
    ACTIONS(263), 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3158] = 1,
    ACTIONS(225), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3192] = 2,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(227), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3228] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3262] = 1,
    ACTIONS(227), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3296] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3330] = 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3364] = 2,
    ACTIONS(267), 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3400] = 2,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3436] = 1,
    ACTIONS(245), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3470] = 2,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(245), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3506] = 2,
    ACTIONS(273), 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3542] = 1,
    ACTIONS(249), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3576] = 2,
    ACTIONS(275), 1,
      ts_builtin_sym_end,
    ACTIONS(225), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3612] = 2,
    ACTIONS(277), 1,
      ts_builtin_sym_end,
    ACTIONS(223), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3648] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3684] = 2,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3720] = 2,
    ACTIONS(283), 1,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3756] = 2,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3792] = 2,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3828] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3864] = 2,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(255), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3900] = 1,
    ACTIONS(251), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3934] = 2,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3970] = 2,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    ACTIONS(251), 30,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4006] = 1,
    ACTIONS(243), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4040] = 1,
    ACTIONS(253), 31,
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
      sym_paragraph_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4074] = 9,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(307), 1,
      aux_sym_title_text_token1,
    STATE(199), 1,
      sym_title_value,
    ACTIONS(305), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(309), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(88), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4112] = 8,
    ACTIONS(311), 1,
      aux_sym_comment_token1,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(319), 1,
      anon_sym_BSLASH,
    ACTIONS(322), 1,
      sym_command_name,
    ACTIONS(325), 1,
      aux_sym_title_text_token1,
    ACTIONS(317), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(328), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(86), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4148] = 8,
    ACTIONS(331), 1,
      aux_sym_comment_token1,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      anon_sym_BSLASH,
    ACTIONS(342), 1,
      sym_command_name,
    ACTIONS(345), 1,
      aux_sym_title_text_token1,
    ACTIONS(337), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(348), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(87), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4184] = 8,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(307), 1,
      aux_sym_title_text_token1,
    ACTIONS(351), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(353), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(87), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4219] = 8,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      aux_sym_title_text_token1,
    ACTIONS(357), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(361), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(86), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4254] = 8,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(307), 1,
      aux_sym_title_text_token1,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(87), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4288] = 8,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      aux_sym_title_text_token1,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(86), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4322] = 8,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      aux_sym_title_text_token1,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(91), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4356] = 8,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    ACTIONS(301), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      aux_sym_title_text_token1,
    STATE(198), 1,
      sym_value,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(89), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4390] = 8,
    ACTIONS(297), 1,
      aux_sym_comment_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(307), 1,
      aux_sym_title_text_token1,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(90), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4424] = 8,
    ACTIONS(377), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_BSLASH,
    ACTIONS(385), 1,
      sym_paragraph_text,
    STATE(95), 1,
      sym_paragraph_brace_group_start,
    STATE(155), 1,
      sym_paragraph_brace_group_stop,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(381), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(96), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4455] = 8,
    ACTIONS(377), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      sym_paragraph_text,
    STATE(95), 1,
      sym_paragraph_brace_group_start,
    STATE(158), 1,
      sym_paragraph_brace_group_stop,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(381), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(101), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4486] = 8,
    ACTIONS(377), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_BSLASH,
    ACTIONS(391), 1,
      sym_paragraph_text,
    STATE(95), 1,
      sym_paragraph_brace_group_start,
    STATE(174), 1,
      sym_paragraph_brace_group_stop,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(389), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(98), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4517] = 8,
    ACTIONS(377), 1,
      aux_sym_comment_token1,
    ACTIONS(383), 1,
      anon_sym_BSLASH,
    ACTIONS(387), 1,
      sym_paragraph_text,
    STATE(95), 1,
      sym_paragraph_brace_group_start,
    STATE(192), 1,
      sym_paragraph_brace_group_stop,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(389), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(101), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4548] = 3,
    STATE(65), 1,
      sym_escapechar,
    STATE(186), 1,
      sym_paragraph_escapechar,
    ACTIONS(393), 11,
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
  [4568] = 3,
    STATE(31), 1,
      sym_escapechar,
    STATE(186), 1,
      sym_paragraph_escapechar,
    ACTIONS(395), 11,
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
  [4588] = 7,
    ACTIONS(397), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      anon_sym_BSLASH,
    ACTIONS(408), 1,
      sym_paragraph_text,
    STATE(95), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(400), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(403), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(101), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4616] = 3,
    STATE(47), 1,
      sym_escapechar,
    STATE(186), 1,
      sym_paragraph_escapechar,
    ACTIONS(411), 11,
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
  [4636] = 2,
    STATE(147), 1,
      sym_paragraph_escapechar,
    ACTIONS(413), 11,
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
  [4653] = 2,
    STATE(186), 1,
      sym_paragraph_escapechar,
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
  [4670] = 9,
    ACTIONS(417), 1,
      sym_command_block_stop,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(421), 1,
      aux_sym_keyword_token1,
    ACTIONS(423), 1,
      anon_sym_title,
    STATE(157), 1,
      sym_keyword,
    STATE(230), 1,
      sym_key,
    STATE(234), 1,
      sym__end_of_line,
    STATE(156), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(425), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4701] = 2,
    STATE(116), 1,
      sym_escapechar,
    ACTIONS(427), 11,
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
  [4718] = 7,
    ACTIONS(429), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym_paragraph_text,
    ACTIONS(435), 1,
      sym_paragraph_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(111), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4745] = 2,
    STATE(185), 1,
      sym_escapechar,
    ACTIONS(437), 11,
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
  [4762] = 7,
    ACTIONS(429), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym_paragraph_text,
    ACTIONS(439), 1,
      sym_paragraph_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(111), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4789] = 7,
    ACTIONS(429), 1,
      aux_sym_comment_token1,
    ACTIONS(431), 1,
      anon_sym_BSLASH,
    ACTIONS(433), 1,
      sym_paragraph_text,
    ACTIONS(441), 1,
      sym_paragraph_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(111), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4816] = 7,
    ACTIONS(443), 1,
      aux_sym_comment_token1,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(449), 1,
      sym_paragraph_text,
    ACTIONS(452), 1,
      sym_paragraph_stop,
    STATE(97), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(400), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(111), 5,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4843] = 1,
    ACTIONS(235), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4857] = 1,
    ACTIONS(249), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4871] = 5,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_command_block_start,
    ACTIONS(460), 1,
      sym_command_stop,
    ACTIONS(458), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(126), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4893] = 1,
    ACTIONS(462), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4907] = 1,
    ACTIONS(229), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4921] = 5,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_command_block_start,
    ACTIONS(466), 1,
      sym_command_stop,
    ACTIONS(464), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(120), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4943] = 1,
    ACTIONS(468), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4957] = 5,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_command_block_start,
    ACTIONS(472), 1,
      sym_command_stop,
    ACTIONS(470), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4979] = 5,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_command_block_start,
    ACTIONS(474), 1,
      sym_command_stop,
    ACTIONS(458), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(126), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5001] = 1,
    ACTIONS(201), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5015] = 5,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_command_block_start,
    ACTIONS(476), 1,
      sym_command_stop,
    ACTIONS(458), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(126), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5037] = 5,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_command_block_start,
    ACTIONS(480), 1,
      sym_command_stop,
    ACTIONS(478), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(127), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5059] = 1,
    ACTIONS(482), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5073] = 6,
    ACTIONS(484), 1,
      aux_sym_comment_token1,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_BSLASH,
    ACTIONS(495), 1,
      sym_math_text,
    ACTIONS(487), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(125), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5097] = 5,
    ACTIONS(498), 1,
      aux_sym_comment_token1,
    ACTIONS(501), 1,
      sym_command_block_start,
    ACTIONS(507), 1,
      sym_command_stop,
    ACTIONS(504), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(126), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5119] = 5,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_command_block_start,
    ACTIONS(509), 1,
      sym_command_stop,
    ACTIONS(458), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(126), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5141] = 1,
    ACTIONS(205), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5155] = 1,
    ACTIONS(511), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5169] = 5,
    ACTIONS(454), 1,
      aux_sym_comment_token1,
    ACTIONS(456), 1,
      sym_command_block_start,
    ACTIONS(515), 1,
      sym_command_stop,
    ACTIONS(513), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(114), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [5191] = 1,
    ACTIONS(517), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5205] = 1,
    ACTIONS(519), 11,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5219] = 6,
    ACTIONS(521), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
    ACTIONS(527), 1,
      anon_sym_BSLASH,
    ACTIONS(529), 1,
      sym_math_text,
    STATE(125), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5242] = 7,
    ACTIONS(423), 1,
      anon_sym_title,
    ACTIONS(531), 1,
      sym_command_block_stop,
    ACTIONS(533), 1,
      aux_sym_keyword_token1,
    STATE(187), 1,
      sym__end_of_line,
    STATE(230), 1,
      sym_key,
    STATE(200), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(535), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5267] = 7,
    ACTIONS(423), 1,
      anon_sym_title,
    ACTIONS(533), 1,
      aux_sym_keyword_token1,
    ACTIONS(537), 1,
      sym_command_block_stop,
    STATE(165), 1,
      sym__end_of_line,
    STATE(230), 1,
      sym_key,
    STATE(200), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(539), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5292] = 6,
    ACTIONS(521), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_BSLASH,
    ACTIONS(529), 1,
      sym_math_text,
    ACTIONS(541), 1,
      anon_sym_DOLLAR,
    STATE(125), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5315] = 6,
    ACTIONS(521), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_BSLASH,
    ACTIONS(529), 1,
      sym_math_text,
    ACTIONS(543), 1,
      anon_sym_DOLLAR,
    STATE(125), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5338] = 6,
    ACTIONS(521), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_BSLASH,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      sym_math_text,
    STATE(133), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5361] = 6,
    ACTIONS(521), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_BSLASH,
    ACTIONS(529), 1,
      sym_math_text,
    ACTIONS(549), 1,
      anon_sym_DOLLAR,
    STATE(125), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5384] = 5,
    ACTIONS(521), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_BSLASH,
    ACTIONS(551), 1,
      sym_math_text,
    STATE(137), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5404] = 6,
    ACTIONS(423), 1,
      anon_sym_title,
    ACTIONS(533), 1,
      aux_sym_keyword_token1,
    STATE(196), 1,
      sym__end_of_line,
    STATE(230), 1,
      sym_key,
    STATE(200), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(553), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5426] = 5,
    ACTIONS(521), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_BSLASH,
    ACTIONS(555), 1,
      sym_math_text,
    STATE(139), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5446] = 5,
    ACTIONS(521), 1,
      aux_sym_comment_token1,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    ACTIONS(527), 1,
      anon_sym_BSLASH,
    ACTIONS(557), 1,
      sym_math_text,
    STATE(136), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5466] = 2,
    STATE(77), 1,
      sym_typing_stop,
    ACTIONS(559), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5479] = 2,
    STATE(22), 1,
      sym_typing_stop,
    ACTIONS(561), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5492] = 2,
    STATE(51), 1,
      sym_typing_stop,
    ACTIONS(563), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5505] = 2,
    ACTIONS(567), 1,
      sym_paragraph_text,
    ACTIONS(565), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [5517] = 5,
    ACTIONS(569), 1,
      sym_command_block_stop,
    ACTIONS(571), 1,
      aux_sym_keyword_token1,
    STATE(202), 1,
      sym_keyword,
    STATE(204), 1,
      sym__end_of_line,
    ACTIONS(573), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5535] = 1,
    ACTIONS(575), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5545] = 2,
    ACTIONS(209), 1,
      sym_paragraph_text,
    ACTIONS(207), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [5557] = 5,
    ACTIONS(571), 1,
      aux_sym_keyword_token1,
    ACTIONS(577), 1,
      sym_command_block_stop,
    STATE(202), 1,
      sym_keyword,
    STATE(203), 1,
      sym__end_of_line,
    ACTIONS(579), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5575] = 5,
    ACTIONS(577), 1,
      sym_command_block_stop,
    ACTIONS(581), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_option_block_repeat1,
    STATE(239), 1,
      sym__end_of_line,
    ACTIONS(583), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5593] = 2,
    STATE(56), 1,
      sym_metapost_stop,
    ACTIONS(585), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5605] = 2,
    ACTIONS(589), 1,
      sym_paragraph_text,
    ACTIONS(587), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [5617] = 2,
    ACTIONS(593), 1,
      sym_paragraph_text,
    ACTIONS(591), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [5629] = 5,
    ACTIONS(595), 1,
      sym_command_block_stop,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_settings_block_repeat1,
    STATE(229), 1,
      sym__end_of_line,
    ACTIONS(599), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5647] = 5,
    ACTIONS(601), 1,
      sym_command_block_stop,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_option_block_repeat1,
    STATE(238), 1,
      sym__end_of_line,
    ACTIONS(605), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5665] = 2,
    ACTIONS(609), 1,
      sym_paragraph_text,
    ACTIONS(607), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [5677] = 2,
    STATE(73), 1,
      sym_metapost_stop,
    ACTIONS(611), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5689] = 2,
    ACTIONS(615), 1,
      sym_paragraph_text,
    ACTIONS(613), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [5701] = 2,
    ACTIONS(203), 1,
      sym_paragraph_text,
    ACTIONS(617), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
  [5713] = 2,
    STATE(26), 1,
      sym_metapost_stop,
    ACTIONS(619), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5725] = 5,
    ACTIONS(537), 1,
      sym_command_block_stop,
    ACTIONS(621), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_settings_block_repeat1,
    STATE(224), 1,
      sym__end_of_line,
    ACTIONS(623), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5743] = 2,
    ACTIONS(627), 1,
      sym_command_stop,
    ACTIONS(625), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5754] = 5,
    ACTIONS(423), 1,
      anon_sym_title,
    ACTIONS(533), 1,
      aux_sym_keyword_token1,
    ACTIONS(629), 1,
      sym_command_block_stop,
    STATE(230), 1,
      sym_key,
    STATE(195), 2,
      sym_setting,
      sym_title_setting,
  [5771] = 2,
    ACTIONS(633), 1,
      anon_sym_EQ,
    ACTIONS(631), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5782] = 2,
    ACTIONS(637), 1,
      sym_command_stop,
    ACTIONS(635), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5793] = 2,
    ACTIONS(641), 1,
      sym_command_stop,
    ACTIONS(639), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5804] = 1,
    ACTIONS(205), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5813] = 2,
    ACTIONS(645), 1,
      sym_command_stop,
    ACTIONS(643), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5824] = 1,
    ACTIONS(647), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5833] = 2,
    ACTIONS(651), 1,
      sym_command_stop,
    ACTIONS(649), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5844] = 4,
    ACTIONS(571), 1,
      aux_sym_keyword_token1,
    STATE(202), 1,
      sym_keyword,
    STATE(206), 1,
      sym__end_of_line,
    ACTIONS(653), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5859] = 2,
    ACTIONS(593), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(591), 4,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
  [5870] = 2,
    ACTIONS(657), 1,
      sym_command_stop,
    ACTIONS(655), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5881] = 2,
    ACTIONS(209), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(207), 4,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
  [5892] = 2,
    ACTIONS(589), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(587), 4,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
  [5903] = 2,
    ACTIONS(661), 1,
      sym_command_stop,
    ACTIONS(659), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5914] = 2,
    ACTIONS(665), 1,
      sym_command_stop,
    ACTIONS(663), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5925] = 2,
    ACTIONS(645), 1,
      sym_command_stop,
    ACTIONS(643), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5936] = 2,
    ACTIONS(237), 1,
      sym_command_stop,
    ACTIONS(201), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5947] = 1,
    ACTIONS(667), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5956] = 1,
    ACTIONS(669), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5965] = 2,
    ACTIONS(673), 1,
      sym_command_stop,
    ACTIONS(671), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5976] = 1,
    ACTIONS(229), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5985] = 2,
    ACTIONS(567), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(565), 4,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
  [5996] = 5,
    ACTIONS(423), 1,
      anon_sym_title,
    ACTIONS(533), 1,
      aux_sym_keyword_token1,
    ACTIONS(675), 1,
      sym_command_block_stop,
    STATE(230), 1,
      sym_key,
    STATE(195), 2,
      sym_setting,
      sym_title_setting,
  [6013] = 2,
    ACTIONS(203), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(617), 4,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
  [6024] = 3,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(677), 4,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6037] = 1,
    ACTIONS(201), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [6046] = 2,
    ACTIONS(661), 1,
      sym_command_stop,
    ACTIONS(659), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6057] = 2,
    ACTIONS(609), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(607), 4,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
  [6068] = 3,
    ACTIONS(684), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(682), 4,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6081] = 3,
    ACTIONS(687), 1,
      sym_command_block_stop,
    STATE(227), 1,
      sym__end_of_line,
    ACTIONS(689), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6093] = 1,
    ACTIONS(691), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6101] = 4,
    ACTIONS(423), 1,
      anon_sym_title,
    ACTIONS(533), 1,
      aux_sym_keyword_token1,
    STATE(230), 1,
      sym_key,
    STATE(195), 2,
      sym_setting,
      sym_title_setting,
  [6115] = 1,
    ACTIONS(693), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6123] = 1,
    ACTIONS(695), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6131] = 1,
    ACTIONS(697), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6139] = 1,
    ACTIONS(682), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6147] = 1,
    ACTIONS(631), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6155] = 1,
    ACTIONS(677), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6163] = 3,
    ACTIONS(699), 1,
      sym_command_block_stop,
    ACTIONS(701), 1,
      aux_sym_keyword_token1,
    STATE(197), 1,
      sym_keyword,
  [6173] = 3,
    ACTIONS(701), 1,
      aux_sym_keyword_token1,
    ACTIONS(703), 1,
      sym_command_block_stop,
    STATE(197), 1,
      sym_keyword,
  [6183] = 2,
    ACTIONS(705), 1,
      anon_sym_BSLASHstopHTML,
    STATE(44), 1,
      sym_typing_html_stop,
  [6190] = 2,
    ACTIONS(701), 1,
      aux_sym_keyword_token1,
    STATE(197), 1,
      sym_keyword,
  [6197] = 2,
    ACTIONS(707), 1,
      aux_sym_metapost_body_token1,
    STATE(205), 1,
      sym_typing_html_body,
  [6204] = 2,
    ACTIONS(709), 1,
      aux_sym_metapost_body_token1,
    STATE(145), 1,
      sym_typing_body,
  [6211] = 2,
    ACTIONS(711), 1,
      aux_sym_metapost_body_token1,
    STATE(223), 1,
      sym_tikz_body,
  [6218] = 2,
    ACTIONS(713), 1,
      aux_sym_metapost_body_token1,
    STATE(162), 1,
      sym_metapost_body,
  [6225] = 2,
    ACTIONS(715), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(75), 1,
      sym_tikz_stop,
  [6232] = 2,
    ACTIONS(717), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(54), 1,
      sym_tikz_stop,
  [6239] = 2,
    ACTIONS(713), 1,
      aux_sym_metapost_body_token1,
    STATE(159), 1,
      sym_metapost_body,
  [6246] = 2,
    ACTIONS(719), 1,
      anon_sym_BSLASHstopHTML,
    STATE(49), 1,
      sym_typing_html_stop,
  [6253] = 2,
    ACTIONS(711), 1,
      aux_sym_metapost_body_token1,
    STATE(211), 1,
      sym_tikz_body,
  [6260] = 2,
    ACTIONS(707), 1,
      aux_sym_metapost_body_token1,
    STATE(214), 1,
      sym_typing_html_body,
  [6267] = 2,
    ACTIONS(709), 1,
      aux_sym_metapost_body_token1,
    STATE(146), 1,
      sym_typing_body,
  [6274] = 2,
    ACTIONS(711), 1,
      aux_sym_metapost_body_token1,
    STATE(212), 1,
      sym_tikz_body,
  [6281] = 2,
    ACTIONS(713), 1,
      aux_sym_metapost_body_token1,
    STATE(153), 1,
      sym_metapost_body,
  [6288] = 2,
    ACTIONS(721), 1,
      anon_sym_BSLASHstopHTML,
    STATE(79), 1,
      sym_typing_html_stop,
  [6295] = 2,
    ACTIONS(709), 1,
      aux_sym_metapost_body_token1,
    STATE(144), 1,
      sym_typing_body,
  [6302] = 2,
    ACTIONS(707), 1,
      aux_sym_metapost_body_token1,
    STATE(220), 1,
      sym_typing_html_body,
  [6309] = 2,
    ACTIONS(723), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(32), 1,
      sym_tikz_stop,
  [6316] = 1,
    ACTIONS(629), 1,
      sym_command_block_stop,
  [6320] = 1,
    ACTIONS(725), 1,
      anon_sym_EQ,
  [6324] = 1,
    ACTIONS(727), 1,
      anon_sym_EQ,
  [6328] = 1,
    ACTIONS(729), 1,
      sym_command_block_stop,
  [6332] = 1,
    ACTIONS(731), 1,
      ts_builtin_sym_end,
  [6336] = 1,
    ACTIONS(733), 1,
      sym_command_block_stop,
  [6340] = 1,
    ACTIONS(735), 1,
      anon_sym_EQ,
  [6344] = 1,
    ACTIONS(737), 1,
      aux_sym_metapost_body_token1,
  [6348] = 1,
    ACTIONS(739), 1,
      aux_sym_metapost_body_token1,
  [6352] = 1,
    ACTIONS(741), 1,
      aux_sym_metapost_body_token1,
  [6356] = 1,
    ACTIONS(743), 1,
      sym_command_block_stop,
  [6360] = 1,
    ACTIONS(745), 1,
      anon_sym_BSLASHstopHTML,
  [6364] = 1,
    ACTIONS(747), 1,
      anon_sym_BSLASHstoptikzpicture,
  [6368] = 1,
    ACTIONS(749), 1,
      aux_sym_metapost_body_token1,
  [6372] = 1,
    ACTIONS(751), 1,
      sym_command_block_stop,
  [6376] = 1,
    ACTIONS(699), 1,
      sym_command_block_stop,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 109,
  [SMALL_STATE(4)] = 218,
  [SMALL_STATE(5)] = 327,
  [SMALL_STATE(6)] = 436,
  [SMALL_STATE(7)] = 545,
  [SMALL_STATE(8)] = 654,
  [SMALL_STATE(9)] = 760,
  [SMALL_STATE(10)] = 865,
  [SMALL_STATE(11)] = 970,
  [SMALL_STATE(12)] = 1075,
  [SMALL_STATE(13)] = 1180,
  [SMALL_STATE(14)] = 1285,
  [SMALL_STATE(15)] = 1390,
  [SMALL_STATE(16)] = 1495,
  [SMALL_STATE(17)] = 1600,
  [SMALL_STATE(18)] = 1705,
  [SMALL_STATE(19)] = 1743,
  [SMALL_STATE(20)] = 1783,
  [SMALL_STATE(21)] = 1824,
  [SMALL_STATE(22)] = 1859,
  [SMALL_STATE(23)] = 1894,
  [SMALL_STATE(24)] = 1929,
  [SMALL_STATE(25)] = 1966,
  [SMALL_STATE(26)] = 2001,
  [SMALL_STATE(27)] = 2036,
  [SMALL_STATE(28)] = 2071,
  [SMALL_STATE(29)] = 2106,
  [SMALL_STATE(30)] = 2145,
  [SMALL_STATE(31)] = 2180,
  [SMALL_STATE(32)] = 2215,
  [SMALL_STATE(33)] = 2250,
  [SMALL_STATE(34)] = 2285,
  [SMALL_STATE(35)] = 2320,
  [SMALL_STATE(36)] = 2359,
  [SMALL_STATE(37)] = 2394,
  [SMALL_STATE(38)] = 2429,
  [SMALL_STATE(39)] = 2464,
  [SMALL_STATE(40)] = 2499,
  [SMALL_STATE(41)] = 2534,
  [SMALL_STATE(42)] = 2569,
  [SMALL_STATE(43)] = 2604,
  [SMALL_STATE(44)] = 2639,
  [SMALL_STATE(45)] = 2674,
  [SMALL_STATE(46)] = 2710,
  [SMALL_STATE(47)] = 2744,
  [SMALL_STATE(48)] = 2778,
  [SMALL_STATE(49)] = 2814,
  [SMALL_STATE(50)] = 2848,
  [SMALL_STATE(51)] = 2882,
  [SMALL_STATE(52)] = 2916,
  [SMALL_STATE(53)] = 2950,
  [SMALL_STATE(54)] = 2986,
  [SMALL_STATE(55)] = 3020,
  [SMALL_STATE(56)] = 3054,
  [SMALL_STATE(57)] = 3088,
  [SMALL_STATE(58)] = 3122,
  [SMALL_STATE(59)] = 3158,
  [SMALL_STATE(60)] = 3192,
  [SMALL_STATE(61)] = 3228,
  [SMALL_STATE(62)] = 3262,
  [SMALL_STATE(63)] = 3296,
  [SMALL_STATE(64)] = 3330,
  [SMALL_STATE(65)] = 3364,
  [SMALL_STATE(66)] = 3400,
  [SMALL_STATE(67)] = 3436,
  [SMALL_STATE(68)] = 3470,
  [SMALL_STATE(69)] = 3506,
  [SMALL_STATE(70)] = 3542,
  [SMALL_STATE(71)] = 3576,
  [SMALL_STATE(72)] = 3612,
  [SMALL_STATE(73)] = 3648,
  [SMALL_STATE(74)] = 3684,
  [SMALL_STATE(75)] = 3720,
  [SMALL_STATE(76)] = 3756,
  [SMALL_STATE(77)] = 3792,
  [SMALL_STATE(78)] = 3828,
  [SMALL_STATE(79)] = 3864,
  [SMALL_STATE(80)] = 3900,
  [SMALL_STATE(81)] = 3934,
  [SMALL_STATE(82)] = 3970,
  [SMALL_STATE(83)] = 4006,
  [SMALL_STATE(84)] = 4040,
  [SMALL_STATE(85)] = 4074,
  [SMALL_STATE(86)] = 4112,
  [SMALL_STATE(87)] = 4148,
  [SMALL_STATE(88)] = 4184,
  [SMALL_STATE(89)] = 4219,
  [SMALL_STATE(90)] = 4254,
  [SMALL_STATE(91)] = 4288,
  [SMALL_STATE(92)] = 4322,
  [SMALL_STATE(93)] = 4356,
  [SMALL_STATE(94)] = 4390,
  [SMALL_STATE(95)] = 4424,
  [SMALL_STATE(96)] = 4455,
  [SMALL_STATE(97)] = 4486,
  [SMALL_STATE(98)] = 4517,
  [SMALL_STATE(99)] = 4548,
  [SMALL_STATE(100)] = 4568,
  [SMALL_STATE(101)] = 4588,
  [SMALL_STATE(102)] = 4616,
  [SMALL_STATE(103)] = 4636,
  [SMALL_STATE(104)] = 4653,
  [SMALL_STATE(105)] = 4670,
  [SMALL_STATE(106)] = 4701,
  [SMALL_STATE(107)] = 4718,
  [SMALL_STATE(108)] = 4745,
  [SMALL_STATE(109)] = 4762,
  [SMALL_STATE(110)] = 4789,
  [SMALL_STATE(111)] = 4816,
  [SMALL_STATE(112)] = 4843,
  [SMALL_STATE(113)] = 4857,
  [SMALL_STATE(114)] = 4871,
  [SMALL_STATE(115)] = 4893,
  [SMALL_STATE(116)] = 4907,
  [SMALL_STATE(117)] = 4921,
  [SMALL_STATE(118)] = 4943,
  [SMALL_STATE(119)] = 4957,
  [SMALL_STATE(120)] = 4979,
  [SMALL_STATE(121)] = 5001,
  [SMALL_STATE(122)] = 5015,
  [SMALL_STATE(123)] = 5037,
  [SMALL_STATE(124)] = 5059,
  [SMALL_STATE(125)] = 5073,
  [SMALL_STATE(126)] = 5097,
  [SMALL_STATE(127)] = 5119,
  [SMALL_STATE(128)] = 5141,
  [SMALL_STATE(129)] = 5155,
  [SMALL_STATE(130)] = 5169,
  [SMALL_STATE(131)] = 5191,
  [SMALL_STATE(132)] = 5205,
  [SMALL_STATE(133)] = 5219,
  [SMALL_STATE(134)] = 5242,
  [SMALL_STATE(135)] = 5267,
  [SMALL_STATE(136)] = 5292,
  [SMALL_STATE(137)] = 5315,
  [SMALL_STATE(138)] = 5338,
  [SMALL_STATE(139)] = 5361,
  [SMALL_STATE(140)] = 5384,
  [SMALL_STATE(141)] = 5404,
  [SMALL_STATE(142)] = 5426,
  [SMALL_STATE(143)] = 5446,
  [SMALL_STATE(144)] = 5466,
  [SMALL_STATE(145)] = 5479,
  [SMALL_STATE(146)] = 5492,
  [SMALL_STATE(147)] = 5505,
  [SMALL_STATE(148)] = 5517,
  [SMALL_STATE(149)] = 5535,
  [SMALL_STATE(150)] = 5545,
  [SMALL_STATE(151)] = 5557,
  [SMALL_STATE(152)] = 5575,
  [SMALL_STATE(153)] = 5593,
  [SMALL_STATE(154)] = 5605,
  [SMALL_STATE(155)] = 5617,
  [SMALL_STATE(156)] = 5629,
  [SMALL_STATE(157)] = 5647,
  [SMALL_STATE(158)] = 5665,
  [SMALL_STATE(159)] = 5677,
  [SMALL_STATE(160)] = 5689,
  [SMALL_STATE(161)] = 5701,
  [SMALL_STATE(162)] = 5713,
  [SMALL_STATE(163)] = 5725,
  [SMALL_STATE(164)] = 5743,
  [SMALL_STATE(165)] = 5754,
  [SMALL_STATE(166)] = 5771,
  [SMALL_STATE(167)] = 5782,
  [SMALL_STATE(168)] = 5793,
  [SMALL_STATE(169)] = 5804,
  [SMALL_STATE(170)] = 5813,
  [SMALL_STATE(171)] = 5824,
  [SMALL_STATE(172)] = 5833,
  [SMALL_STATE(173)] = 5844,
  [SMALL_STATE(174)] = 5859,
  [SMALL_STATE(175)] = 5870,
  [SMALL_STATE(176)] = 5881,
  [SMALL_STATE(177)] = 5892,
  [SMALL_STATE(178)] = 5903,
  [SMALL_STATE(179)] = 5914,
  [SMALL_STATE(180)] = 5925,
  [SMALL_STATE(181)] = 5936,
  [SMALL_STATE(182)] = 5947,
  [SMALL_STATE(183)] = 5956,
  [SMALL_STATE(184)] = 5965,
  [SMALL_STATE(185)] = 5976,
  [SMALL_STATE(186)] = 5985,
  [SMALL_STATE(187)] = 5996,
  [SMALL_STATE(188)] = 6013,
  [SMALL_STATE(189)] = 6024,
  [SMALL_STATE(190)] = 6037,
  [SMALL_STATE(191)] = 6046,
  [SMALL_STATE(192)] = 6057,
  [SMALL_STATE(193)] = 6068,
  [SMALL_STATE(194)] = 6081,
  [SMALL_STATE(195)] = 6093,
  [SMALL_STATE(196)] = 6101,
  [SMALL_STATE(197)] = 6115,
  [SMALL_STATE(198)] = 6123,
  [SMALL_STATE(199)] = 6131,
  [SMALL_STATE(200)] = 6139,
  [SMALL_STATE(201)] = 6147,
  [SMALL_STATE(202)] = 6155,
  [SMALL_STATE(203)] = 6163,
  [SMALL_STATE(204)] = 6173,
  [SMALL_STATE(205)] = 6183,
  [SMALL_STATE(206)] = 6190,
  [SMALL_STATE(207)] = 6197,
  [SMALL_STATE(208)] = 6204,
  [SMALL_STATE(209)] = 6211,
  [SMALL_STATE(210)] = 6218,
  [SMALL_STATE(211)] = 6225,
  [SMALL_STATE(212)] = 6232,
  [SMALL_STATE(213)] = 6239,
  [SMALL_STATE(214)] = 6246,
  [SMALL_STATE(215)] = 6253,
  [SMALL_STATE(216)] = 6260,
  [SMALL_STATE(217)] = 6267,
  [SMALL_STATE(218)] = 6274,
  [SMALL_STATE(219)] = 6281,
  [SMALL_STATE(220)] = 6288,
  [SMALL_STATE(221)] = 6295,
  [SMALL_STATE(222)] = 6302,
  [SMALL_STATE(223)] = 6309,
  [SMALL_STATE(224)] = 6316,
  [SMALL_STATE(225)] = 6320,
  [SMALL_STATE(226)] = 6324,
  [SMALL_STATE(227)] = 6328,
  [SMALL_STATE(228)] = 6332,
  [SMALL_STATE(229)] = 6336,
  [SMALL_STATE(230)] = 6340,
  [SMALL_STATE(231)] = 6344,
  [SMALL_STATE(232)] = 6348,
  [SMALL_STATE(233)] = 6352,
  [SMALL_STATE(234)] = 6356,
  [SMALL_STATE(235)] = 6360,
  [SMALL_STATE(236)] = 6364,
  [SMALL_STATE(237)] = 6368,
  [SMALL_STATE(238)] = 6372,
  [SMALL_STATE(239)] = 6376,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(140),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(231),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(233),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(237),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(232),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(110),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(84),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(142),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(102),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(119),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [159] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(143),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(117),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_comment, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_escapechar, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_escapechar, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(121),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(92),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(106),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(130),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(115),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(86),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(121),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(94),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(106),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(130),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(124),
  [348] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(87),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(161),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(160),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(103),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(101),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [443] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(188),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(104),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(111),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(190),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [489] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(138),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(108),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(125),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(181),
  [501] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(105),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(126),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_escaped, 2),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_escaped, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_brace_group_stop, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_brace_group_stop, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_brace_group, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_brace_group, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_brace_group, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_brace_group, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_brace_group_start, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_brace_group_start, 1),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_comment, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(173),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [684] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(141),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [691] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [731] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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
