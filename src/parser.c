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
      if (eof) ADVANCE(123);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == ',') ADVANCE(322);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '^') ADVANCE(135);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '~') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(338);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(338);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == ',') ADVANCE(322);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(331);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(338);
      if (lookahead == ',') ADVANCE(322);
      if (lookahead == '=') ADVANCE(328);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(327);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(338);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(327);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '%') ADVANCE(133);
      if (lookahead == '&') ADVANCE(134);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead == '^') ADVANCE(135);
      if (lookahead == '_') ADVANCE(136);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '|') ADVANCE(139);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '~') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '}') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(180);
      END_STATE();
    case 15:
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'H') ADVANCE(38);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'M') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(13);
      if (lookahead == 'T') ADVANCE(17);
      if (lookahead == 'X') ADVANCE(22);
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(187);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(182);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(181);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(69);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(72);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(185);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 'U') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'X') ADVANCE(183);
      END_STATE();
    case 41:
      if (lookahead == 'X') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == 't') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(327);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(327);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 51:
      if (lookahead == 'b') ADVANCE(87);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(163);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(329);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(81);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(120);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(83);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(78);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 121:
      if (lookahead == 'z') ADVANCE(99);
      END_STATE();
    case 122:
      if (eof) ADVANCE(123);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '$') ADVANCE(132);
      if (lookahead == '%') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '{') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(331);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(130);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(155);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(130);
      if (lookahead != 0) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 's') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 's') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'e') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 's') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 's') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(155);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(129);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(264);
      if (lookahead == 'p') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(207);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(173);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(209);
      if (lookahead == 'H') ADVANCE(211);
      if (lookahead == 'L') ADVANCE(212);
      if (lookahead == 'M') ADVANCE(203);
      if (lookahead == 'P') ADVANCE(188);
      if (lookahead == 'T') ADVANCE(192);
      if (lookahead == 'X') ADVANCE(197);
      if (lookahead == 'c') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(236);
      if (lookahead == 's') ADVANCE(302);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead == 'u') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(290);
      if (lookahead == 'o') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 't') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 't') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'y') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(327);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(327);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(327);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(327);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_paragraph_text);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_paragraph_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_paragraph_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(336);
      if (lookahead == '\r') ADVANCE(338);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 122},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 122},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 122},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2, .external_lex_state = 2},
  [19] = {.lex_state = 2, .external_lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 1, .external_lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 122, .external_lex_state = 2},
  [32] = {.lex_state = 1, .external_lex_state = 2},
  [33] = {.lex_state = 122, .external_lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 122},
  [55] = {.lex_state = 122},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 122},
  [60] = {.lex_state = 122},
  [61] = {.lex_state = 122},
  [62] = {.lex_state = 122},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 122},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 122},
  [67] = {.lex_state = 122},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 122},
  [71] = {.lex_state = 122},
  [72] = {.lex_state = 122},
  [73] = {.lex_state = 122},
  [74] = {.lex_state = 122},
  [75] = {.lex_state = 122},
  [76] = {.lex_state = 122},
  [77] = {.lex_state = 122},
  [78] = {.lex_state = 122},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 9},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 9},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 10, .external_lex_state = 2},
  [95] = {.lex_state = 10, .external_lex_state = 2},
  [96] = {.lex_state = 10, .external_lex_state = 2},
  [97] = {.lex_state = 10, .external_lex_state = 2},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 5, .external_lex_state = 3},
  [109] = {.lex_state = 5, .external_lex_state = 3},
  [110] = {.lex_state = 5, .external_lex_state = 3},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 5, .external_lex_state = 3},
  [113] = {.lex_state = 5, .external_lex_state = 3},
  [114] = {.lex_state = 5, .external_lex_state = 3},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 5, .external_lex_state = 3},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 4, .external_lex_state = 2},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 9},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 42},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 42},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 42},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 9},
  [151] = {.lex_state = 43},
  [152] = {.lex_state = 10, .external_lex_state = 2},
  [153] = {.lex_state = 42},
  [154] = {.lex_state = 10, .external_lex_state = 2},
  [155] = {.lex_state = 10, .external_lex_state = 2},
  [156] = {.lex_state = 10, .external_lex_state = 2},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 10, .external_lex_state = 2},
  [160] = {.lex_state = 43},
  [161] = {.lex_state = 10, .external_lex_state = 2},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 10, .external_lex_state = 2},
  [167] = {.lex_state = 43},
  [168] = {.lex_state = 10, .external_lex_state = 2},
  [169] = {.lex_state = 10, .external_lex_state = 2},
  [170] = {.lex_state = 5, .external_lex_state = 3},
  [171] = {.lex_state = 5, .external_lex_state = 3},
  [172] = {.lex_state = 5, .external_lex_state = 3},
  [173] = {.lex_state = 5, .external_lex_state = 3},
  [174] = {.lex_state = 12},
  [175] = {.lex_state = 12},
  [176] = {.lex_state = 5, .external_lex_state = 3},
  [177] = {.lex_state = 5, .external_lex_state = 3},
  [178] = {.lex_state = 5, .external_lex_state = 3},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 12},
  [181] = {.lex_state = 5, .external_lex_state = 3},
  [182] = {.lex_state = 43},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 5, .external_lex_state = 3},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 5, .external_lex_state = 3},
  [187] = {.lex_state = 44},
  [188] = {.lex_state = 5, .external_lex_state = 3},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 5, .external_lex_state = 3},
  [191] = {.lex_state = 44},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 12},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 6},
  [199] = {.lex_state = 44},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 6},
  [203] = {.lex_state = 45},
  [204] = {.lex_state = 45},
  [205] = {.lex_state = 168},
  [206] = {.lex_state = 168},
  [207] = {.lex_state = 45},
  [208] = {.lex_state = 168},
  [209] = {.lex_state = 168},
  [210] = {.lex_state = 168},
  [211] = {.lex_state = 168},
  [212] = {.lex_state = 168},
  [213] = {.lex_state = 168},
  [214] = {.lex_state = 42},
  [215] = {.lex_state = 42},
  [216] = {.lex_state = 42},
  [217] = {.lex_state = 168},
  [218] = {.lex_state = 168},
  [219] = {.lex_state = 168},
  [220] = {.lex_state = 42},
  [221] = {.lex_state = 168},
  [222] = {.lex_state = 42},
  [223] = {.lex_state = 42},
  [224] = {.lex_state = 168},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 42},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 168},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 42},
  [236] = {.lex_state = 168},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 168},
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
    [sym_document] = STATE(238),
    [sym__content] = STATE(16),
    [sym_main_start] = STATE(16),
    [sym_main_stop] = STATE(16),
    [sym_comment] = STATE(16),
    [sym_escaped] = STATE(16),
    [sym_brace_group_start] = STATE(6),
    [sym_brace_group] = STATE(16),
    [sym_command_group] = STATE(16),
    [sym_inline_math] = STATE(16),
    [sym_metapost_start] = STATE(210),
    [sym_metapost_inclusion] = STATE(16),
    [sym_tikz_start] = STATE(217),
    [sym_tikz_inclusion] = STATE(16),
    [sym_typing_start] = STATE(218),
    [sym_typing_inclusion] = STATE(16),
    [sym_typing_html_start] = STATE(213),
    [sym_typing_html_inclusion] = STATE(16),
    [sym_command] = STATE(96),
    [sym_paragraph] = STATE(16),
    [sym__paragraph_content] = STATE(96),
    [sym_paragraph_escaped] = STATE(96),
    [sym_paragraph_comment] = STATE(96),
    [sym_paragraph_brace_group_start] = STATE(90),
    [sym_paragraph_brace_group] = STATE(96),
    [sym__end_of_line] = STATE(16),
    [aux_sym_document_repeat1] = STATE(16),
    [aux_sym_paragraph_repeat1] = STATE(96),
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
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(53), 1,
      sym_brace_group_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(206), 1,
      sym_typing_start,
    STATE(208), 1,
      sym_tikz_start,
    STATE(209), 1,
      sym_metapost_start,
    STATE(221), 1,
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
    ACTIONS(45), 3,
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
    STATE(95), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [109] = 24,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(34), 1,
      sym_brace_group_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(206), 1,
      sym_typing_start,
    STATE(208), 1,
      sym_tikz_start,
    STATE(209), 1,
      sym_metapost_start,
    STATE(221), 1,
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
    ACTIONS(47), 2,
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
    STATE(95), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(7), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [218] = 24,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(43), 1,
      sym_brace_group_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(206), 1,
      sym_typing_start,
    STATE(208), 1,
      sym_tikz_start,
    STATE(209), 1,
      sym_metapost_start,
    STATE(221), 1,
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
    ACTIONS(51), 3,
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
    STATE(95), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [327] = 24,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(73), 1,
      sym_brace_group_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(206), 1,
      sym_typing_start,
    STATE(208), 1,
      sym_tikz_start,
    STATE(209), 1,
      sym_metapost_start,
    STATE(221), 1,
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
    ACTIONS(53), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(45), 3,
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
    STATE(95), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [436] = 24,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(54), 1,
      sym_brace_group_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(206), 1,
      sym_typing_start,
    STATE(208), 1,
      sym_tikz_start,
    STATE(209), 1,
      sym_metapost_start,
    STATE(221), 1,
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
    ACTIONS(53), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(55), 3,
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
    STATE(95), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [545] = 24,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(35), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_BSLASH,
    ACTIONS(43), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(27), 1,
      sym_brace_group_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(206), 1,
      sym_typing_start,
    STATE(208), 1,
      sym_tikz_start,
    STATE(209), 1,
      sym_metapost_start,
    STATE(221), 1,
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
    ACTIONS(47), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(45), 3,
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
    STATE(95), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [654] = 23,
    ACTIONS(63), 1,
      aux_sym_comment_token1,
    ACTIONS(66), 1,
      anon_sym_DOLLAR,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(77), 1,
      sym_command_group_start,
    ACTIONS(83), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(89), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(92), 1,
      sym_command_name,
    ACTIONS(95), 1,
      sym_paragraph_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(206), 1,
      sym_typing_start,
    STATE(208), 1,
      sym_tikz_start,
    STATE(209), 1,
      sym_metapost_start,
    STATE(221), 1,
      sym_typing_html_start,
    ACTIONS(57), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(60), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(69), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(98), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(80), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    STATE(95), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(86), 7,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [760] = 23,
    ACTIONS(72), 1,
      sym_command_group_stop,
    ACTIONS(83), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(89), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(92), 1,
      sym_command_name,
    ACTIONS(95), 1,
      sym_paragraph_text,
    ACTIONS(107), 1,
      aux_sym_comment_token1,
    ACTIONS(110), 1,
      anon_sym_DOLLAR,
    ACTIONS(113), 1,
      anon_sym_BSLASH,
    ACTIONS(116), 1,
      sym_command_group_start,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(205), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_html_start,
    STATE(212), 1,
      sym_typing_start,
    STATE(219), 1,
      sym_metapost_start,
    ACTIONS(69), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(101), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(104), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(119), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(80), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    STATE(94), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(86), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(9), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [865] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      sym_command_group_start,
    ACTIONS(134), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(205), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_html_start,
    STATE(212), 1,
      sym_typing_start,
    STATE(219), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(122), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(124), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(136), 3,
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
    STATE(94), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(9), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [970] = 23,
    ACTIONS(83), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(89), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(92), 1,
      sym_command_name,
    ACTIONS(95), 1,
      sym_paragraph_text,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(146), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(152), 1,
      anon_sym_BSLASH,
    ACTIONS(155), 1,
      sym_command_group_start,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(210), 1,
      sym_metapost_start,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_tikz_start,
    STATE(218), 1,
      sym_typing_start,
    ACTIONS(69), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(140), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(143), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(158), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(80), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    STATE(96), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(86), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(11), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1075] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      sym_command_group_start,
    ACTIONS(161), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(205), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_html_start,
    STATE(212), 1,
      sym_typing_start,
    STATE(219), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(122), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(124), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(163), 3,
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
    STATE(94), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1180] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      sym_command_group_start,
    ACTIONS(165), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(205), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_html_start,
    STATE(212), 1,
      sym_typing_start,
    STATE(219), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(122), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(124), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(167), 3,
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
    STATE(94), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(10), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1285] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      sym_command_group_start,
    ACTIONS(169), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(205), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_html_start,
    STATE(212), 1,
      sym_typing_start,
    STATE(219), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(122), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(124), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(136), 3,
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
    STATE(94), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(9), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1390] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      sym_command_group_start,
    ACTIONS(171), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(205), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_html_start,
    STATE(212), 1,
      sym_typing_start,
    STATE(219), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(122), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(124), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(173), 3,
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
    STATE(94), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(14), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1495] = 23,
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
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(210), 1,
      sym_metapost_start,
    STATE(213), 1,
      sym_typing_html_start,
    STATE(217), 1,
      sym_tikz_start,
    STATE(218), 1,
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
    ACTIONS(177), 3,
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
    STATE(96), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(11), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1600] = 23,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_paragraph_text,
    ACTIONS(126), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(130), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      sym_command_group_start,
    ACTIONS(179), 1,
      sym_command_group_stop,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    STATE(205), 1,
      sym_tikz_start,
    STATE(211), 1,
      sym_typing_html_start,
    STATE(212), 1,
      sym_typing_start,
    STATE(219), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(122), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(124), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(136), 3,
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
    STATE(94), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(9), 15,
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
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1705] = 2,
    ACTIONS(183), 1,
      sym_paragraph_stop,
    ACTIONS(181), 32,
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
    ACTIONS(189), 1,
      sym_paragraph_stop,
    ACTIONS(187), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_paragraph_text,
    ACTIONS(185), 26,
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
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1783] = 1,
    ACTIONS(191), 32,
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
  [1818] = 2,
    ACTIONS(183), 1,
      sym_paragraph_stop,
    ACTIONS(181), 31,
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
  [1855] = 1,
    ACTIONS(193), 32,
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
  [1890] = 1,
    ACTIONS(195), 32,
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
  [1925] = 1,
    ACTIONS(197), 32,
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
  [1960] = 1,
    ACTIONS(199), 32,
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
  [1995] = 1,
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
  [2030] = 1,
    ACTIONS(203), 32,
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
  [2065] = 1,
    ACTIONS(205), 32,
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
  [2100] = 1,
    ACTIONS(207), 32,
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
  [2135] = 1,
    ACTIONS(209), 32,
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
  [2170] = 4,
    ACTIONS(189), 1,
      sym_paragraph_stop,
    ACTIONS(211), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_paragraph_text,
    ACTIONS(185), 24,
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
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2211] = 3,
    ACTIONS(189), 1,
      sym_paragraph_stop,
    ACTIONS(187), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_paragraph_text,
    ACTIONS(185), 25,
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
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2250] = 3,
    ACTIONS(183), 1,
      sym_paragraph_stop,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 30,
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
  [2289] = 1,
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
  [2324] = 1,
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
  [2359] = 1,
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
  [2394] = 1,
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
  [2429] = 1,
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
  [2464] = 1,
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
  [2499] = 1,
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
  [2534] = 1,
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
  [2569] = 1,
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
  [2604] = 1,
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
  [2638] = 1,
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
  [2672] = 1,
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
  [2706] = 1,
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
  [2740] = 1,
    ACTIONS(197), 31,
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
  [2774] = 1,
    ACTIONS(193), 31,
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
  [2808] = 1,
    ACTIONS(195), 31,
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
  [2842] = 1,
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
  [2876] = 1,
    ACTIONS(199), 31,
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
  [2910] = 1,
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
  [2944] = 1,
    ACTIONS(203), 31,
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
  [2978] = 2,
    ACTIONS(233), 1,
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
  [3014] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
  [3050] = 1,
    ACTIONS(205), 31,
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
  [3084] = 1,
    ACTIONS(207), 31,
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
  [3118] = 1,
    ACTIONS(209), 31,
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
  [3152] = 2,
    ACTIONS(237), 1,
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
  [3188] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
  [3224] = 2,
    ACTIONS(241), 1,
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
  [3260] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
    ACTIONS(191), 31,
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
  [3330] = 2,
    ACTIONS(245), 1,
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
  [3366] = 1,
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
  [3400] = 2,
    ACTIONS(247), 1,
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
  [3436] = 2,
    ACTIONS(249), 1,
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
  [3472] = 1,
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
  [3506] = 1,
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
  [3540] = 2,
    ACTIONS(251), 1,
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
  [3576] = 2,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
    ACTIONS(255), 1,
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
  [3648] = 2,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
    ACTIONS(259), 1,
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
  [3720] = 2,
    ACTIONS(261), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
    ACTIONS(263), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
    ACTIONS(265), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
    ACTIONS(267), 1,
      ts_builtin_sym_end,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
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
  [3864] = 8,
    ACTIONS(269), 1,
      aux_sym_comment_token1,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_BSLASH,
    ACTIONS(280), 1,
      sym_command_name,
    ACTIONS(283), 1,
      aux_sym_title_text_token1,
    ACTIONS(275), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(286), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(79), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3900] = 8,
    ACTIONS(289), 1,
      aux_sym_comment_token1,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_BSLASH,
    ACTIONS(300), 1,
      sym_command_name,
    ACTIONS(303), 1,
      aux_sym_title_text_token1,
    ACTIONS(295), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(306), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(80), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3936] = 9,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_command_name,
    ACTIONS(319), 1,
      aux_sym_title_text_token1,
    STATE(194), 1,
      sym_title_value,
    ACTIONS(317), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(321), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(82), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3974] = 8,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_command_name,
    ACTIONS(319), 1,
      aux_sym_title_text_token1,
    ACTIONS(323), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(79), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4009] = 8,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_command_name,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(331), 1,
      aux_sym_title_text_token1,
    ACTIONS(329), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(80), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4044] = 8,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_command_name,
    ACTIONS(319), 1,
      aux_sym_title_text_token1,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(79), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4078] = 8,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_command_name,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(331), 1,
      aux_sym_title_text_token1,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(333), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(80), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4112] = 8,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_command_name,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(331), 1,
      aux_sym_title_text_token1,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 3,
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
  [4146] = 8,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_command_name,
    ACTIONS(319), 1,
      aux_sym_title_text_token1,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(84), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [4180] = 8,
    ACTIONS(309), 1,
      aux_sym_comment_token1,
    ACTIONS(313), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_command_name,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    ACTIONS(331), 1,
      aux_sym_title_text_token1,
    STATE(201), 1,
      sym_value,
    ACTIONS(347), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(83), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [4214] = 9,
    ACTIONS(349), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      sym_command_name,
    ACTIONS(359), 1,
      sym_paragraph_text,
    STATE(92), 1,
      sym_paragraph_brace_group_start,
    STATE(139), 1,
      sym_paragraph_brace_group_stop,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(353), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(93), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4249] = 9,
    ACTIONS(349), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      sym_command_name,
    ACTIONS(359), 1,
      sym_paragraph_text,
    STATE(92), 1,
      sym_paragraph_brace_group_start,
    STATE(166), 1,
      sym_paragraph_brace_group_stop,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(361), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(91), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4284] = 9,
    ACTIONS(349), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      sym_command_name,
    ACTIONS(359), 1,
      sym_paragraph_text,
    STATE(92), 1,
      sym_paragraph_brace_group_start,
    STATE(152), 1,
      sym_paragraph_brace_group_stop,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(361), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(93), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4319] = 9,
    ACTIONS(349), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_BSLASH,
    ACTIONS(357), 1,
      sym_command_name,
    ACTIONS(359), 1,
      sym_paragraph_text,
    STATE(92), 1,
      sym_paragraph_brace_group_start,
    STATE(145), 1,
      sym_paragraph_brace_group_stop,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(353), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(89), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4354] = 8,
    ACTIONS(363), 1,
      aux_sym_comment_token1,
    ACTIONS(371), 1,
      anon_sym_BSLASH,
    ACTIONS(374), 1,
      sym_command_name,
    ACTIONS(377), 1,
      sym_paragraph_text,
    STATE(92), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(366), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(369), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(93), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4386] = 8,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(380), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      sym_paragraph_text,
    ACTIONS(386), 1,
      sym_paragraph_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(97), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4417] = 8,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(380), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      sym_paragraph_text,
    ACTIONS(388), 1,
      sym_paragraph_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(97), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4448] = 8,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(380), 1,
      aux_sym_comment_token1,
    ACTIONS(382), 1,
      anon_sym_BSLASH,
    ACTIONS(384), 1,
      sym_paragraph_text,
    ACTIONS(390), 1,
      sym_paragraph_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(97), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4479] = 8,
    ACTIONS(392), 1,
      aux_sym_comment_token1,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(398), 1,
      sym_command_name,
    ACTIONS(401), 1,
      sym_paragraph_text,
    ACTIONS(404), 1,
      sym_paragraph_stop,
    STATE(90), 1,
      sym_paragraph_brace_group_start,
    ACTIONS(366), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(97), 6,
      sym_command,
      sym__paragraph_content,
      sym_paragraph_escaped,
      sym_paragraph_comment,
      sym_paragraph_brace_group,
      aux_sym_paragraph_repeat1,
  [4510] = 3,
    STATE(66), 1,
      sym_escapechar,
    STATE(156), 1,
      sym_paragraph_escapechar,
    ACTIONS(406), 11,
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
  [4530] = 3,
    STATE(44), 1,
      sym_escapechar,
    STATE(156), 1,
      sym_paragraph_escapechar,
    ACTIONS(408), 11,
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
  [4550] = 3,
    STATE(38), 1,
      sym_escapechar,
    STATE(156), 1,
      sym_paragraph_escapechar,
    ACTIONS(410), 11,
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
  [4570] = 2,
    STATE(156), 1,
      sym_paragraph_escapechar,
    ACTIONS(412), 11,
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
  [4587] = 2,
    STATE(118), 1,
      sym_escapechar,
    ACTIONS(414), 11,
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
  [4604] = 9,
    ACTIONS(416), 1,
      sym_command_block_stop,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      aux_sym_keyword_token1,
    ACTIONS(422), 1,
      anon_sym_title,
    STATE(157), 1,
      sym_keyword,
    STATE(231), 1,
      sym_key,
    STATE(234), 1,
      sym__end_of_line,
    STATE(163), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(424), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4635] = 2,
    STATE(183), 1,
      sym_escapechar,
    ACTIONS(426), 11,
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
  [4652] = 2,
    STATE(138), 1,
      sym_paragraph_escapechar,
    ACTIONS(428), 11,
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
  [4669] = 3,
    STATE(150), 1,
      sym__end_of_line,
    ACTIONS(432), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(430), 8,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
      sym_paragraph_text,
  [4688] = 1,
    ACTIONS(434), 11,
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
  [4702] = 5,
    ACTIONS(436), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      sym_command_block_start,
    ACTIONS(442), 1,
      sym_command_stop,
    ACTIONS(440), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4724] = 5,
    ACTIONS(436), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      sym_command_block_start,
    ACTIONS(444), 1,
      sym_command_stop,
    ACTIONS(440), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4746] = 5,
    ACTIONS(436), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      sym_command_block_start,
    ACTIONS(446), 1,
      sym_command_stop,
    ACTIONS(440), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4768] = 1,
    ACTIONS(448), 11,
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
  [4782] = 5,
    ACTIONS(436), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      sym_command_block_start,
    ACTIONS(452), 1,
      sym_command_stop,
    ACTIONS(450), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(109), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4804] = 5,
    ACTIONS(436), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      sym_command_block_start,
    ACTIONS(456), 1,
      sym_command_stop,
    ACTIONS(454), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(108), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4826] = 5,
    ACTIONS(436), 1,
      aux_sym_comment_token1,
    ACTIONS(438), 1,
      sym_command_block_start,
    ACTIONS(460), 1,
      sym_command_stop,
    ACTIONS(458), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(110), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4848] = 1,
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
  [4862] = 1,
    ACTIONS(464), 11,
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
  [4876] = 1,
    ACTIONS(466), 11,
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
  [4890] = 1,
    ACTIONS(223), 11,
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
  [4904] = 6,
    ACTIONS(468), 1,
      aux_sym_comment_token1,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
    ACTIONS(476), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 1,
      sym_math_text,
    ACTIONS(471), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4928] = 1,
    ACTIONS(185), 11,
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
  [4942] = 1,
    ACTIONS(181), 11,
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
  [4956] = 5,
    ACTIONS(482), 1,
      aux_sym_comment_token1,
    ACTIONS(485), 1,
      sym_command_block_start,
    ACTIONS(491), 1,
      sym_command_stop,
    ACTIONS(488), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4978] = 1,
    ACTIONS(493), 11,
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
  [4992] = 4,
    ACTIONS(497), 1,
      sym_paragraph_stop,
    STATE(169), 1,
      sym__end_of_line,
    ACTIONS(495), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(430), 6,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_paragraph_text,
  [5012] = 1,
    ACTIONS(499), 11,
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
  [5026] = 1,
    ACTIONS(501), 11,
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
  [5040] = 6,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(511), 1,
      sym_math_text,
    STATE(130), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5063] = 7,
    ACTIONS(422), 1,
      anon_sym_title,
    ACTIONS(513), 1,
      sym_command_block_stop,
    ACTIONS(515), 1,
      aux_sym_keyword_token1,
    STATE(187), 1,
      sym__end_of_line,
    STATE(231), 1,
      sym_key,
    STATE(200), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(517), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5088] = 6,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(519), 1,
      anon_sym_DOLLAR,
    ACTIONS(521), 1,
      sym_math_text,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5111] = 6,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(521), 1,
      sym_math_text,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5134] = 6,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(521), 1,
      sym_math_text,
    ACTIONS(525), 1,
      anon_sym_DOLLAR,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5157] = 7,
    ACTIONS(422), 1,
      anon_sym_title,
    ACTIONS(515), 1,
      aux_sym_keyword_token1,
    ACTIONS(527), 1,
      sym_command_block_stop,
    STATE(191), 1,
      sym__end_of_line,
    STATE(231), 1,
      sym_key,
    STATE(200), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(529), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5182] = 6,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(521), 1,
      sym_math_text,
    ACTIONS(531), 1,
      anon_sym_DOLLAR,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5205] = 5,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(533), 1,
      sym_math_text,
    STATE(131), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5225] = 6,
    ACTIONS(422), 1,
      anon_sym_title,
    ACTIONS(515), 1,
      aux_sym_keyword_token1,
    STATE(199), 1,
      sym__end_of_line,
    STATE(231), 1,
      sym_key,
    STATE(200), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(535), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5247] = 5,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(537), 1,
      sym_math_text,
    STATE(133), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5267] = 5,
    ACTIONS(503), 1,
      aux_sym_comment_token1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    ACTIONS(509), 1,
      anon_sym_BSLASH,
    ACTIONS(539), 1,
      sym_math_text,
    STATE(129), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [5287] = 2,
    ACTIONS(543), 1,
      sym_paragraph_text,
    ACTIONS(541), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5300] = 2,
    ACTIONS(547), 1,
      sym_paragraph_text,
    ACTIONS(545), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5313] = 2,
    ACTIONS(551), 1,
      sym_paragraph_text,
    ACTIONS(549), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5326] = 2,
    ACTIONS(553), 1,
      sym_paragraph_text,
    ACTIONS(501), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5339] = 2,
    STATE(47), 1,
      sym_typing_stop,
    ACTIONS(555), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5352] = 2,
    ACTIONS(189), 1,
      sym_paragraph_text,
    ACTIONS(187), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5365] = 2,
    STATE(24), 1,
      sym_typing_stop,
    ACTIONS(557), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5378] = 2,
    ACTIONS(561), 1,
      sym_paragraph_text,
    ACTIONS(559), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5391] = 2,
    ACTIONS(565), 1,
      sym_paragraph_text,
    ACTIONS(563), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5404] = 2,
    ACTIONS(183), 1,
      sym_paragraph_text,
    ACTIONS(567), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5417] = 2,
    STATE(71), 1,
      sym_typing_stop,
    ACTIONS(569), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5430] = 2,
    ACTIONS(571), 1,
      sym_paragraph_text,
    ACTIONS(493), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5443] = 2,
    ACTIONS(575), 1,
      sym_paragraph_text,
    ACTIONS(573), 7,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_name,
  [5456] = 2,
    STATE(75), 1,
      sym_metapost_stop,
    ACTIONS(577), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5468] = 2,
    ACTIONS(547), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(545), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5480] = 1,
    ACTIONS(579), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [5490] = 2,
    ACTIONS(183), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(567), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5502] = 2,
    ACTIONS(571), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(493), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5514] = 2,
    ACTIONS(543), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(541), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5526] = 5,
    ACTIONS(581), 1,
      sym_command_block_stop,
    ACTIONS(583), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_option_block_repeat1,
    STATE(226), 1,
      sym__end_of_line,
    ACTIONS(585), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5544] = 5,
    ACTIONS(587), 1,
      sym_command_block_stop,
    ACTIONS(589), 1,
      aux_sym_keyword_token1,
    STATE(198), 1,
      sym_keyword,
    STATE(204), 1,
      sym__end_of_line,
    ACTIONS(591), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5562] = 2,
    ACTIONS(189), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(187), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5574] = 2,
    STATE(51), 1,
      sym_metapost_stop,
    ACTIONS(593), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5586] = 2,
    ACTIONS(553), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(501), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5598] = 5,
    ACTIONS(513), 1,
      sym_command_block_stop,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_settings_block_repeat1,
    STATE(229), 1,
      sym__end_of_line,
    ACTIONS(597), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5616] = 5,
    ACTIONS(599), 1,
      sym_command_block_stop,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(162), 1,
      aux_sym_settings_block_repeat1,
    STATE(228), 1,
      sym__end_of_line,
    ACTIONS(603), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5634] = 5,
    ACTIONS(605), 1,
      sym_command_block_stop,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_option_block_repeat1,
    STATE(233), 1,
      sym__end_of_line,
    ACTIONS(609), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5652] = 5,
    ACTIONS(589), 1,
      aux_sym_keyword_token1,
    ACTIONS(605), 1,
      sym_command_block_stop,
    STATE(198), 1,
      sym_keyword,
    STATE(203), 1,
      sym__end_of_line,
    ACTIONS(611), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5670] = 2,
    ACTIONS(561), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(559), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5682] = 2,
    STATE(25), 1,
      sym_metapost_stop,
    ACTIONS(613), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5694] = 2,
    ACTIONS(565), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(563), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5706] = 2,
    ACTIONS(575), 2,
      sym_paragraph_stop,
      sym_paragraph_text,
    ACTIONS(573), 5,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [5718] = 2,
    ACTIONS(617), 1,
      sym_command_stop,
    ACTIONS(615), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5729] = 2,
    ACTIONS(621), 1,
      sym_command_stop,
    ACTIONS(619), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5740] = 2,
    ACTIONS(625), 1,
      sym_command_stop,
    ACTIONS(623), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5751] = 2,
    ACTIONS(629), 1,
      sym_command_stop,
    ACTIONS(627), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5762] = 1,
    ACTIONS(631), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5771] = 1,
    ACTIONS(185), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5780] = 2,
    ACTIONS(635), 1,
      sym_command_stop,
    ACTIONS(633), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5791] = 2,
    ACTIONS(625), 1,
      sym_command_stop,
    ACTIONS(623), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5802] = 2,
    ACTIONS(639), 1,
      sym_command_stop,
    ACTIONS(637), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5813] = 2,
    ACTIONS(643), 1,
      anon_sym_EQ,
    ACTIONS(641), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5824] = 1,
    ACTIONS(645), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5833] = 2,
    ACTIONS(649), 1,
      sym_command_stop,
    ACTIONS(647), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5844] = 1,
    ACTIONS(651), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5853] = 1,
    ACTIONS(223), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5862] = 2,
    ACTIONS(213), 1,
      sym_command_stop,
    ACTIONS(181), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5873] = 3,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(653), 4,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5886] = 2,
    ACTIONS(639), 1,
      sym_command_stop,
    ACTIONS(637), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5897] = 5,
    ACTIONS(422), 1,
      anon_sym_title,
    ACTIONS(515), 1,
      aux_sym_keyword_token1,
    ACTIONS(658), 1,
      sym_command_block_stop,
    STATE(231), 1,
      sym_key,
    STATE(196), 2,
      sym_setting,
      sym_title_setting,
  [5914] = 2,
    ACTIONS(662), 1,
      sym_command_stop,
    ACTIONS(660), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5925] = 3,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    STATE(189), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(664), 4,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5938] = 2,
    ACTIONS(671), 1,
      sym_command_stop,
    ACTIONS(669), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5949] = 5,
    ACTIONS(422), 1,
      anon_sym_title,
    ACTIONS(515), 1,
      aux_sym_keyword_token1,
    ACTIONS(673), 1,
      sym_command_block_stop,
    STATE(231), 1,
      sym_key,
    STATE(196), 2,
      sym_setting,
      sym_title_setting,
  [5966] = 4,
    ACTIONS(589), 1,
      aux_sym_keyword_token1,
    STATE(198), 1,
      sym_keyword,
    STATE(207), 1,
      sym__end_of_line,
    ACTIONS(675), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5981] = 1,
    ACTIONS(181), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5990] = 1,
    ACTIONS(677), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5998] = 3,
    ACTIONS(679), 1,
      sym_command_block_stop,
    STATE(230), 1,
      sym__end_of_line,
    ACTIONS(681), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6010] = 1,
    ACTIONS(683), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6018] = 1,
    ACTIONS(641), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6026] = 1,
    ACTIONS(653), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6034] = 4,
    ACTIONS(422), 1,
      anon_sym_title,
    ACTIONS(515), 1,
      aux_sym_keyword_token1,
    STATE(231), 1,
      sym_key,
    STATE(196), 2,
      sym_setting,
      sym_title_setting,
  [6048] = 1,
    ACTIONS(664), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6056] = 1,
    ACTIONS(685), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6064] = 1,
    ACTIONS(687), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [6072] = 3,
    ACTIONS(689), 1,
      sym_command_block_stop,
    ACTIONS(691), 1,
      aux_sym_keyword_token1,
    STATE(202), 1,
      sym_keyword,
  [6082] = 3,
    ACTIONS(691), 1,
      aux_sym_keyword_token1,
    ACTIONS(693), 1,
      sym_command_block_stop,
    STATE(202), 1,
      sym_keyword,
  [6092] = 2,
    ACTIONS(695), 1,
      aux_sym_metapost_body_token1,
    STATE(214), 1,
      sym_tikz_body,
  [6099] = 2,
    ACTIONS(697), 1,
      aux_sym_metapost_body_token1,
    STATE(144), 1,
      sym_typing_body,
  [6106] = 2,
    ACTIONS(691), 1,
      aux_sym_keyword_token1,
    STATE(202), 1,
      sym_keyword,
  [6113] = 2,
    ACTIONS(695), 1,
      aux_sym_metapost_body_token1,
    STATE(223), 1,
      sym_tikz_body,
  [6120] = 2,
    ACTIONS(699), 1,
      aux_sym_metapost_body_token1,
    STATE(167), 1,
      sym_metapost_body,
  [6127] = 2,
    ACTIONS(699), 1,
      aux_sym_metapost_body_token1,
    STATE(151), 1,
      sym_metapost_body,
  [6134] = 2,
    ACTIONS(701), 1,
      aux_sym_metapost_body_token1,
    STATE(216), 1,
      sym_typing_html_body,
  [6141] = 2,
    ACTIONS(697), 1,
      aux_sym_metapost_body_token1,
    STATE(142), 1,
      sym_typing_body,
  [6148] = 2,
    ACTIONS(701), 1,
      aux_sym_metapost_body_token1,
    STATE(215), 1,
      sym_typing_html_body,
  [6155] = 2,
    ACTIONS(703), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(49), 1,
      sym_tikz_stop,
  [6162] = 2,
    ACTIONS(705), 1,
      anon_sym_BSLASHstopHTML,
    STATE(67), 1,
      sym_typing_html_stop,
  [6169] = 2,
    ACTIONS(707), 1,
      anon_sym_BSLASHstopHTML,
    STATE(45), 1,
      sym_typing_html_stop,
  [6176] = 2,
    ACTIONS(695), 1,
      aux_sym_metapost_body_token1,
    STATE(222), 1,
      sym_tikz_body,
  [6183] = 2,
    ACTIONS(697), 1,
      aux_sym_metapost_body_token1,
    STATE(148), 1,
      sym_typing_body,
  [6190] = 2,
    ACTIONS(699), 1,
      aux_sym_metapost_body_token1,
    STATE(160), 1,
      sym_metapost_body,
  [6197] = 2,
    ACTIONS(709), 1,
      anon_sym_BSLASHstopHTML,
    STATE(42), 1,
      sym_typing_html_stop,
  [6204] = 2,
    ACTIONS(701), 1,
      aux_sym_metapost_body_token1,
    STATE(220), 1,
      sym_typing_html_body,
  [6211] = 2,
    ACTIONS(711), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(77), 1,
      sym_tikz_stop,
  [6218] = 2,
    ACTIONS(713), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(23), 1,
      sym_tikz_stop,
  [6225] = 1,
    ACTIONS(715), 1,
      aux_sym_metapost_body_token1,
  [6229] = 1,
    ACTIONS(717), 1,
      anon_sym_EQ,
  [6233] = 1,
    ACTIONS(719), 1,
      sym_command_block_stop,
  [6237] = 1,
    ACTIONS(721), 1,
      anon_sym_BSLASHstoptikzpicture,
  [6241] = 1,
    ACTIONS(723), 1,
      sym_command_block_stop,
  [6245] = 1,
    ACTIONS(658), 1,
      sym_command_block_stop,
  [6249] = 1,
    ACTIONS(725), 1,
      sym_command_block_stop,
  [6253] = 1,
    ACTIONS(727), 1,
      anon_sym_EQ,
  [6257] = 1,
    ACTIONS(729), 1,
      aux_sym_metapost_body_token1,
  [6261] = 1,
    ACTIONS(689), 1,
      sym_command_block_stop,
  [6265] = 1,
    ACTIONS(731), 1,
      sym_command_block_stop,
  [6269] = 1,
    ACTIONS(733), 1,
      anon_sym_BSLASHstopHTML,
  [6273] = 1,
    ACTIONS(735), 1,
      aux_sym_metapost_body_token1,
  [6277] = 1,
    ACTIONS(737), 1,
      anon_sym_EQ,
  [6281] = 1,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
  [6285] = 1,
    ACTIONS(741), 1,
      aux_sym_metapost_body_token1,
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
  [SMALL_STATE(21)] = 1818,
  [SMALL_STATE(22)] = 1855,
  [SMALL_STATE(23)] = 1890,
  [SMALL_STATE(24)] = 1925,
  [SMALL_STATE(25)] = 1960,
  [SMALL_STATE(26)] = 1995,
  [SMALL_STATE(27)] = 2030,
  [SMALL_STATE(28)] = 2065,
  [SMALL_STATE(29)] = 2100,
  [SMALL_STATE(30)] = 2135,
  [SMALL_STATE(31)] = 2170,
  [SMALL_STATE(32)] = 2211,
  [SMALL_STATE(33)] = 2250,
  [SMALL_STATE(34)] = 2289,
  [SMALL_STATE(35)] = 2324,
  [SMALL_STATE(36)] = 2359,
  [SMALL_STATE(37)] = 2394,
  [SMALL_STATE(38)] = 2429,
  [SMALL_STATE(39)] = 2464,
  [SMALL_STATE(40)] = 2499,
  [SMALL_STATE(41)] = 2534,
  [SMALL_STATE(42)] = 2569,
  [SMALL_STATE(43)] = 2604,
  [SMALL_STATE(44)] = 2638,
  [SMALL_STATE(45)] = 2672,
  [SMALL_STATE(46)] = 2706,
  [SMALL_STATE(47)] = 2740,
  [SMALL_STATE(48)] = 2774,
  [SMALL_STATE(49)] = 2808,
  [SMALL_STATE(50)] = 2842,
  [SMALL_STATE(51)] = 2876,
  [SMALL_STATE(52)] = 2910,
  [SMALL_STATE(53)] = 2944,
  [SMALL_STATE(54)] = 2978,
  [SMALL_STATE(55)] = 3014,
  [SMALL_STATE(56)] = 3050,
  [SMALL_STATE(57)] = 3084,
  [SMALL_STATE(58)] = 3118,
  [SMALL_STATE(59)] = 3152,
  [SMALL_STATE(60)] = 3188,
  [SMALL_STATE(61)] = 3224,
  [SMALL_STATE(62)] = 3260,
  [SMALL_STATE(63)] = 3296,
  [SMALL_STATE(64)] = 3330,
  [SMALL_STATE(65)] = 3366,
  [SMALL_STATE(66)] = 3400,
  [SMALL_STATE(67)] = 3436,
  [SMALL_STATE(68)] = 3472,
  [SMALL_STATE(69)] = 3506,
  [SMALL_STATE(70)] = 3540,
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
  [SMALL_STATE(81)] = 3936,
  [SMALL_STATE(82)] = 3974,
  [SMALL_STATE(83)] = 4009,
  [SMALL_STATE(84)] = 4044,
  [SMALL_STATE(85)] = 4078,
  [SMALL_STATE(86)] = 4112,
  [SMALL_STATE(87)] = 4146,
  [SMALL_STATE(88)] = 4180,
  [SMALL_STATE(89)] = 4214,
  [SMALL_STATE(90)] = 4249,
  [SMALL_STATE(91)] = 4284,
  [SMALL_STATE(92)] = 4319,
  [SMALL_STATE(93)] = 4354,
  [SMALL_STATE(94)] = 4386,
  [SMALL_STATE(95)] = 4417,
  [SMALL_STATE(96)] = 4448,
  [SMALL_STATE(97)] = 4479,
  [SMALL_STATE(98)] = 4510,
  [SMALL_STATE(99)] = 4530,
  [SMALL_STATE(100)] = 4550,
  [SMALL_STATE(101)] = 4570,
  [SMALL_STATE(102)] = 4587,
  [SMALL_STATE(103)] = 4604,
  [SMALL_STATE(104)] = 4635,
  [SMALL_STATE(105)] = 4652,
  [SMALL_STATE(106)] = 4669,
  [SMALL_STATE(107)] = 4688,
  [SMALL_STATE(108)] = 4702,
  [SMALL_STATE(109)] = 4724,
  [SMALL_STATE(110)] = 4746,
  [SMALL_STATE(111)] = 4768,
  [SMALL_STATE(112)] = 4782,
  [SMALL_STATE(113)] = 4804,
  [SMALL_STATE(114)] = 4826,
  [SMALL_STATE(115)] = 4848,
  [SMALL_STATE(116)] = 4862,
  [SMALL_STATE(117)] = 4876,
  [SMALL_STATE(118)] = 4890,
  [SMALL_STATE(119)] = 4904,
  [SMALL_STATE(120)] = 4928,
  [SMALL_STATE(121)] = 4942,
  [SMALL_STATE(122)] = 4956,
  [SMALL_STATE(123)] = 4978,
  [SMALL_STATE(124)] = 4992,
  [SMALL_STATE(125)] = 5012,
  [SMALL_STATE(126)] = 5026,
  [SMALL_STATE(127)] = 5040,
  [SMALL_STATE(128)] = 5063,
  [SMALL_STATE(129)] = 5088,
  [SMALL_STATE(130)] = 5111,
  [SMALL_STATE(131)] = 5134,
  [SMALL_STATE(132)] = 5157,
  [SMALL_STATE(133)] = 5182,
  [SMALL_STATE(134)] = 5205,
  [SMALL_STATE(135)] = 5225,
  [SMALL_STATE(136)] = 5247,
  [SMALL_STATE(137)] = 5267,
  [SMALL_STATE(138)] = 5287,
  [SMALL_STATE(139)] = 5300,
  [SMALL_STATE(140)] = 5313,
  [SMALL_STATE(141)] = 5326,
  [SMALL_STATE(142)] = 5339,
  [SMALL_STATE(143)] = 5352,
  [SMALL_STATE(144)] = 5365,
  [SMALL_STATE(145)] = 5378,
  [SMALL_STATE(146)] = 5391,
  [SMALL_STATE(147)] = 5404,
  [SMALL_STATE(148)] = 5417,
  [SMALL_STATE(149)] = 5430,
  [SMALL_STATE(150)] = 5443,
  [SMALL_STATE(151)] = 5456,
  [SMALL_STATE(152)] = 5468,
  [SMALL_STATE(153)] = 5480,
  [SMALL_STATE(154)] = 5490,
  [SMALL_STATE(155)] = 5502,
  [SMALL_STATE(156)] = 5514,
  [SMALL_STATE(157)] = 5526,
  [SMALL_STATE(158)] = 5544,
  [SMALL_STATE(159)] = 5562,
  [SMALL_STATE(160)] = 5574,
  [SMALL_STATE(161)] = 5586,
  [SMALL_STATE(162)] = 5598,
  [SMALL_STATE(163)] = 5616,
  [SMALL_STATE(164)] = 5634,
  [SMALL_STATE(165)] = 5652,
  [SMALL_STATE(166)] = 5670,
  [SMALL_STATE(167)] = 5682,
  [SMALL_STATE(168)] = 5694,
  [SMALL_STATE(169)] = 5706,
  [SMALL_STATE(170)] = 5718,
  [SMALL_STATE(171)] = 5729,
  [SMALL_STATE(172)] = 5740,
  [SMALL_STATE(173)] = 5751,
  [SMALL_STATE(174)] = 5762,
  [SMALL_STATE(175)] = 5771,
  [SMALL_STATE(176)] = 5780,
  [SMALL_STATE(177)] = 5791,
  [SMALL_STATE(178)] = 5802,
  [SMALL_STATE(179)] = 5813,
  [SMALL_STATE(180)] = 5824,
  [SMALL_STATE(181)] = 5833,
  [SMALL_STATE(182)] = 5844,
  [SMALL_STATE(183)] = 5853,
  [SMALL_STATE(184)] = 5862,
  [SMALL_STATE(185)] = 5873,
  [SMALL_STATE(186)] = 5886,
  [SMALL_STATE(187)] = 5897,
  [SMALL_STATE(188)] = 5914,
  [SMALL_STATE(189)] = 5925,
  [SMALL_STATE(190)] = 5938,
  [SMALL_STATE(191)] = 5949,
  [SMALL_STATE(192)] = 5966,
  [SMALL_STATE(193)] = 5981,
  [SMALL_STATE(194)] = 5990,
  [SMALL_STATE(195)] = 5998,
  [SMALL_STATE(196)] = 6010,
  [SMALL_STATE(197)] = 6018,
  [SMALL_STATE(198)] = 6026,
  [SMALL_STATE(199)] = 6034,
  [SMALL_STATE(200)] = 6048,
  [SMALL_STATE(201)] = 6056,
  [SMALL_STATE(202)] = 6064,
  [SMALL_STATE(203)] = 6072,
  [SMALL_STATE(204)] = 6082,
  [SMALL_STATE(205)] = 6092,
  [SMALL_STATE(206)] = 6099,
  [SMALL_STATE(207)] = 6106,
  [SMALL_STATE(208)] = 6113,
  [SMALL_STATE(209)] = 6120,
  [SMALL_STATE(210)] = 6127,
  [SMALL_STATE(211)] = 6134,
  [SMALL_STATE(212)] = 6141,
  [SMALL_STATE(213)] = 6148,
  [SMALL_STATE(214)] = 6155,
  [SMALL_STATE(215)] = 6162,
  [SMALL_STATE(216)] = 6169,
  [SMALL_STATE(217)] = 6176,
  [SMALL_STATE(218)] = 6183,
  [SMALL_STATE(219)] = 6190,
  [SMALL_STATE(220)] = 6197,
  [SMALL_STATE(221)] = 6204,
  [SMALL_STATE(222)] = 6211,
  [SMALL_STATE(223)] = 6218,
  [SMALL_STATE(224)] = 6225,
  [SMALL_STATE(225)] = 6229,
  [SMALL_STATE(226)] = 6233,
  [SMALL_STATE(227)] = 6237,
  [SMALL_STATE(228)] = 6241,
  [SMALL_STATE(229)] = 6245,
  [SMALL_STATE(230)] = 6249,
  [SMALL_STATE(231)] = 6253,
  [SMALL_STATE(232)] = 6257,
  [SMALL_STATE(233)] = 6261,
  [SMALL_STATE(234)] = 6265,
  [SMALL_STATE(235)] = 6269,
  [SMALL_STATE(236)] = 6273,
  [SMALL_STATE(237)] = 6277,
  [SMALL_STATE(238)] = 6281,
  [SMALL_STATE(239)] = 6285,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(39),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(40),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(137),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(37),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(100),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(224),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(232),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(236),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(239),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(68),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(136),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(33),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(98),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_comment, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_escapechar, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_escapechar, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(121),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(87),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(102),
  [280] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(113),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(125),
  [286] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(79),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(121),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(86),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(102),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(113),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(117),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(80),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(147),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(140),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(105),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(112),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(106),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(154),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(101),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(114),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(124),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(193),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(127),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(104),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(119),
  [482] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(184),
  [485] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(103),
  [488] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(122),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_escaped, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_escaped, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_brace_group, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_brace_group, 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_brace_group_start, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_brace_group_start, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_brace_group, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_brace_group, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_brace_group_stop, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph_brace_group_stop, 1),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph_comment, 1),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(192),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [666] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(135),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [739] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
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
