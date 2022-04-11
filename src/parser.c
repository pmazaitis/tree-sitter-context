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
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHstarttext = 1,
  anon_sym_BSLASHstartcomponent = 2,
  anon_sym_BSLASHstoptext = 3,
  anon_sym_BSLASHstopcomponent = 4,
  sym_text = 5,
  anon_sym_LF = 6,
  anon_sym_CR = 7,
  anon_sym_CR_LF = 8,
  aux_sym_comment_token1 = 9,
  anon_sym_POUND = 10,
  anon_sym_DOLLAR = 11,
  anon_sym_PERCENT = 12,
  anon_sym_AMP = 13,
  anon_sym_CARET = 14,
  anon_sym__ = 15,
  anon_sym_LBRACE = 16,
  anon_sym_RBRACE = 17,
  anon_sym_PIPE = 18,
  anon_sym_TILDE = 19,
  anon_sym_BSLASH = 20,
  anon_sym_BSLASHbgroup = 21,
  anon_sym_BSLASHegroup = 22,
  sym_command_group_start = 23,
  sym_command_group_stop = 24,
  sym_math_text = 25,
  anon_sym_BSLASHstartMPinclusions = 26,
  anon_sym_BSLASHstartuseMPgraphic = 27,
  anon_sym_BSLASHstartreusableMPgraphic = 28,
  anon_sym_BSLASHstartMPcode = 29,
  anon_sym_BSLASHstartMPpage = 30,
  anon_sym_BSLASHstartstaticMPfigure = 31,
  anon_sym_BSLASHstopMPinclusions = 32,
  anon_sym_BSLASHstopuseMPgraphic = 33,
  anon_sym_BSLASHstopreusableMPgraphic = 34,
  anon_sym_BSLASHstopMPcode = 35,
  anon_sym_BSLASHstopMPpage = 36,
  anon_sym_BSLASHstopstaticMPfigure = 37,
  aux_sym_metapost_body_token1 = 38,
  anon_sym_BSLASHstarttikzpicture = 39,
  anon_sym_BSLASHstoptikzpicture = 40,
  anon_sym_BSLASHstarttyping = 41,
  anon_sym_BSLASHstartLUA = 42,
  anon_sym_BSLASHstartMP = 43,
  anon_sym_BSLASHstartPARSEDXML = 44,
  anon_sym_BSLASHstartTEX = 45,
  anon_sym_BSLASHstartXML = 46,
  anon_sym_BSLASHstartCSS = 47,
  anon_sym_BSLASHstoptyping = 48,
  anon_sym_BSLASHstopLUA = 49,
  anon_sym_BSLASHstopMP = 50,
  anon_sym_BSLASHstopPARSEDXML = 51,
  anon_sym_BSLASHstopTEX = 52,
  anon_sym_BSLASHstopXML = 53,
  anon_sym_BSLASHstopCSS = 54,
  anon_sym_BSLASHstartHTML = 55,
  anon_sym_BSLASHstopHTML = 56,
  sym_command_name = 57,
  sym_command_block_start = 58,
  sym_command_block_stop = 59,
  anon_sym_COMMA = 60,
  aux_sym_keyword_token1 = 61,
  anon_sym_EQ = 62,
  anon_sym_title = 63,
  aux_sym_title_text_token1 = 64,
  sym_command_stop = 65,
  sym_paragraph_stop = 66,
  sym__eol = 67,
  sym_preamble_stop = 68,
  sym_document = 69,
  sym__document_content = 70,
  sym_main_start = 71,
  sym_main_stop = 72,
  sym__end_of_line_or_paragraph = 73,
  sym_paragraph = 74,
  sym__paragraph_content = 75,
  sym__end_of_line = 76,
  sym_comment = 77,
  sym_escapechar = 78,
  sym_escaped = 79,
  sym_brace_group_start = 80,
  sym_brace_group_stop = 81,
  sym__group_content = 82,
  sym_brace_group = 83,
  sym_command_group = 84,
  sym_math_group = 85,
  sym__math_content = 86,
  sym_inline_math = 87,
  sym_metapost_start = 88,
  sym_metapost_stop = 89,
  sym_metapost_body = 90,
  sym_metapost_inclusion = 91,
  sym_tikz_start = 92,
  sym_tikz_stop = 93,
  sym_tikz_body = 94,
  sym_tikz_inclusion = 95,
  sym_typing_start = 96,
  sym_typing_stop = 97,
  sym_typing_body = 98,
  sym_typing_inclusion = 99,
  sym_typing_html_start = 100,
  sym_typing_html_stop = 101,
  sym_typing_html_body = 102,
  sym_typing_html_inclusion = 103,
  sym_option_block = 104,
  sym_keyword = 105,
  sym_settings_block = 106,
  sym_setting = 107,
  sym_title_setting = 108,
  sym_title_value = 109,
  sym__title_content = 110,
  sym_title_brace_group = 111,
  sym_title_text = 112,
  sym_key = 113,
  sym_value = 114,
  sym__value_content = 115,
  sym_value_text = 116,
  sym_value_brace_group = 117,
  sym_command = 118,
  aux_sym_document_repeat1 = 119,
  aux_sym_paragraph_repeat1 = 120,
  aux_sym_brace_group_repeat1 = 121,
  aux_sym_math_group_repeat1 = 122,
  aux_sym_option_block_repeat1 = 123,
  aux_sym_settings_block_repeat1 = 124,
  aux_sym_title_value_repeat1 = 125,
  aux_sym_value_repeat1 = 126,
  aux_sym_command_repeat1 = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHstarttext] = "\\starttext",
  [anon_sym_BSLASHstartcomponent] = "\\startcomponent",
  [anon_sym_BSLASHstoptext] = "\\stoptext",
  [anon_sym_BSLASHstopcomponent] = "\\stopcomponent",
  [sym_text] = "text",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
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
  [sym_command_stop] = "command_stop",
  [sym_paragraph_stop] = "paragraph_stop",
  [sym__eol] = "_eol",
  [sym_preamble_stop] = "preamble_stop",
  [sym_document] = "document",
  [sym__document_content] = "_document_content",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
  [sym__end_of_line_or_paragraph] = "_end_of_line_or_paragraph",
  [sym_paragraph] = "paragraph",
  [sym__paragraph_content] = "_paragraph_content",
  [sym__end_of_line] = "_end_of_line",
  [sym_comment] = "comment",
  [sym_escapechar] = "escapechar",
  [sym_escaped] = "escaped",
  [sym_brace_group_start] = "brace_group_start",
  [sym_brace_group_stop] = "brace_group_stop",
  [sym__group_content] = "_group_content",
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
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_paragraph_repeat1] = "paragraph_repeat1",
  [aux_sym_brace_group_repeat1] = "brace_group_repeat1",
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
  [sym_text] = sym_text,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
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
  [sym_command_stop] = sym_command_stop,
  [sym_paragraph_stop] = sym_paragraph_stop,
  [sym__eol] = sym__eol,
  [sym_preamble_stop] = sym_preamble_stop,
  [sym_document] = sym_document,
  [sym__document_content] = sym__document_content,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
  [sym__end_of_line_or_paragraph] = sym__end_of_line_or_paragraph,
  [sym_paragraph] = sym_paragraph,
  [sym__paragraph_content] = sym__paragraph_content,
  [sym__end_of_line] = sym__end_of_line,
  [sym_comment] = sym_comment,
  [sym_escapechar] = sym_escapechar,
  [sym_escaped] = sym_escaped,
  [sym_brace_group_start] = sym_brace_group_start,
  [sym_brace_group_stop] = sym_brace_group_stop,
  [sym__group_content] = sym__group_content,
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
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_paragraph_repeat1] = aux_sym_paragraph_repeat1,
  [aux_sym_brace_group_repeat1] = aux_sym_brace_group_repeat1,
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
  [sym_command_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_paragraph_stop] = {
    .visible = true,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym_preamble_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__document_content] = {
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
  [sym__end_of_line_or_paragraph] = {
    .visible = false,
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
  [sym__end_of_line] = {
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
  [sym_brace_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group_stop] = {
    .visible = true,
    .named = true,
  },
  [sym__group_content] = {
    .visible = false,
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_paragraph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_brace_group_repeat1] = {
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
      if (eof) ADVANCE(123);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(140);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '=') ADVANCE(344);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '^') ADVANCE(142);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '~') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(153);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(347);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == ',') ADVANCE(338);
      if (lookahead == '=') ADVANCE(344);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(343);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(343);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(151);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(140);
      if (lookahead == '&') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '^') ADVANCE(142);
      if (lookahead == '_') ADVANCE(143);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '|') ADVANCE(146);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '~') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(161);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(186);
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
      if (lookahead == 'L') ADVANCE(190);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(193);
      END_STATE();
    case 21:
      if (lookahead == 'L') ADVANCE(188);
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
      if (lookahead == 'P') ADVANCE(187);
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
      if (lookahead == 'S') ADVANCE(191);
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
      if (lookahead == 'X') ADVANCE(189);
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
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == 't') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(343);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(337);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(343);
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
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(170);
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
      if (lookahead == 'e') ADVANCE(345);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(173);
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
      if (lookahead == 'g') ADVANCE(185);
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
      if (lookahead == 's') ADVANCE(168);
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
      if (lookahead == '\n') SKIP(122)
      if (lookahead == '$') ADVANCE(139);
      if (lookahead == '%') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(152);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(128);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(347);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(137);
      if (lookahead != 0) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(137);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 's') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 's') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(252);
      if (lookahead == 's') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(136);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(283);
      if (lookahead == 'i') ADVANCE(274);
      if (lookahead == 'p') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(214);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(179);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == 'X') ADVANCE(204);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(216);
      if (lookahead == 'H') ADVANCE(218);
      if (lookahead == 'L') ADVANCE(219);
      if (lookahead == 'M') ADVANCE(210);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(199);
      if (lookahead == 'X') ADVANCE(204);
      if (lookahead == 'r') ADVANCE(245);
      if (lookahead == 's') ADVANCE(314);
      if (lookahead == 't') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'o') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 't') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(282);
      if (lookahead == 't') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(269);
      if (lookahead == 'y') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(343);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(347);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 122},
  [3] = {.lex_state = 122},
  [4] = {.lex_state = 122},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 10, .external_lex_state = 3},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 10, .external_lex_state = 3},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 122},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 122},
  [25] = {.lex_state = 1, .external_lex_state = 4},
  [26] = {.lex_state = 122},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 3, .external_lex_state = 3},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 1, .external_lex_state = 4},
  [46] = {.lex_state = 3, .external_lex_state = 3},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 2, .external_lex_state = 4},
  [49] = {.lex_state = 3, .external_lex_state = 3},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 3, .external_lex_state = 3},
  [52] = {.lex_state = 3, .external_lex_state = 3},
  [53] = {.lex_state = 1, .external_lex_state = 4},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 3, .external_lex_state = 3},
  [57] = {.lex_state = 3, .external_lex_state = 3},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 3, .external_lex_state = 3},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 3, .external_lex_state = 3},
  [71] = {.lex_state = 3, .external_lex_state = 3},
  [72] = {.lex_state = 3, .external_lex_state = 3},
  [73] = {.lex_state = 3, .external_lex_state = 3},
  [74] = {.lex_state = 3, .external_lex_state = 3},
  [75] = {.lex_state = 3, .external_lex_state = 3},
  [76] = {.lex_state = 3, .external_lex_state = 3},
  [77] = {.lex_state = 3, .external_lex_state = 3},
  [78] = {.lex_state = 3, .external_lex_state = 3},
  [79] = {.lex_state = 2, .external_lex_state = 4},
  [80] = {.lex_state = 10, .external_lex_state = 4},
  [81] = {.lex_state = 2, .external_lex_state = 4},
  [82] = {.lex_state = 10, .external_lex_state = 4},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 10, .external_lex_state = 4},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 10, .external_lex_state = 3},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 6, .external_lex_state = 5},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 6, .external_lex_state = 5},
  [111] = {.lex_state = 6, .external_lex_state = 5},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 6, .external_lex_state = 5},
  [117] = {.lex_state = 6, .external_lex_state = 5},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 6, .external_lex_state = 5},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 6, .external_lex_state = 5},
  [122] = {.lex_state = 6, .external_lex_state = 5},
  [123] = {.lex_state = 6, .external_lex_state = 5},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 42},
  [137] = {.lex_state = 42},
  [138] = {.lex_state = 42},
  [139] = {.lex_state = 9},
  [140] = {.lex_state = 43},
  [141] = {.lex_state = 42},
  [142] = {.lex_state = 43},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 43},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 12},
  [151] = {.lex_state = 6, .external_lex_state = 5},
  [152] = {.lex_state = 6, .external_lex_state = 5},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 6, .external_lex_state = 5},
  [155] = {.lex_state = 6, .external_lex_state = 5},
  [156] = {.lex_state = 6, .external_lex_state = 5},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 6, .external_lex_state = 5},
  [159] = {.lex_state = 6, .external_lex_state = 5},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 6, .external_lex_state = 5},
  [162] = {.lex_state = 8},
  [163] = {.lex_state = 6, .external_lex_state = 5},
  [164] = {.lex_state = 6, .external_lex_state = 5},
  [165] = {.lex_state = 44},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 43},
  [170] = {.lex_state = 6, .external_lex_state = 5},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 6, .external_lex_state = 5},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 7},
  [178] = {.lex_state = 44},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 7},
  [185] = {.lex_state = 45},
  [186] = {.lex_state = 45},
  [187] = {.lex_state = 174},
  [188] = {.lex_state = 42},
  [189] = {.lex_state = 45},
  [190] = {.lex_state = 174},
  [191] = {.lex_state = 174},
  [192] = {.lex_state = 174},
  [193] = {.lex_state = 174},
  [194] = {.lex_state = 42},
  [195] = {.lex_state = 174},
  [196] = {.lex_state = 42},
  [197] = {.lex_state = 174},
  [198] = {.lex_state = 174},
  [199] = {.lex_state = 42},
  [200] = {.lex_state = 174},
  [201] = {.lex_state = 174},
  [202] = {.lex_state = 174},
  [203] = {.lex_state = 42},
  [204] = {.lex_state = 174},
  [205] = {.lex_state = 42},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 174},
  [215] = {.lex_state = 42},
  [216] = {.lex_state = 174},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 174},
  [219] = {.lex_state = 174},
  [220] = {.lex_state = 42},
  [221] = {.lex_state = 0},
};

enum {
  ts_external_token_command_stop = 0,
  ts_external_token_paragraph_stop = 1,
  ts_external_token__eol = 2,
  ts_external_token_preamble_stop = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_command_stop] = sym_command_stop,
  [ts_external_token_paragraph_stop] = sym_paragraph_stop,
  [ts_external_token__eol] = sym__eol,
  [ts_external_token_preamble_stop] = sym_preamble_stop,
};

static const bool ts_external_scanner_states[6][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_command_stop] = true,
    [ts_external_token_paragraph_stop] = true,
    [ts_external_token__eol] = true,
    [ts_external_token_preamble_stop] = true,
  },
  [2] = {
    [ts_external_token_preamble_stop] = true,
  },
  [3] = {
    [ts_external_token_paragraph_stop] = true,
  },
  [4] = {
    [ts_external_token_paragraph_stop] = true,
    [ts_external_token__eol] = true,
  },
  [5] = {
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
    [sym__eol] = ACTIONS(1),
    [sym_preamble_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(210),
    [sym_preamble_stop] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(5), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_command_group_start,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(187), 1,
      sym_tikz_start,
    STATE(192), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_typing_html_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(7), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(9), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(18), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(4), 5,
      sym__document_content,
      sym_main_start,
      sym_main_stop,
      sym_paragraph,
      aux_sym_document_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(30), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [99] = 24,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(44), 1,
      aux_sym_comment_token1,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(53), 1,
      anon_sym_BSLASH,
    ACTIONS(56), 1,
      sym_command_group_start,
    ACTIONS(62), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(68), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(71), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(187), 1,
      sym_tikz_start,
    STATE(192), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_typing_html_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(35), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(38), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(50), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(18), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(3), 5,
      sym__document_content,
      sym_main_start,
      sym_main_stop,
      sym_paragraph,
      aux_sym_document_repeat1,
    ACTIONS(59), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(65), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(30), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [198] = 24,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_command_group_start,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      sym_command_name,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(187), 1,
      sym_tikz_start,
    STATE(192), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_typing_html_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(7), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(9), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(18), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(3), 5,
      sym__document_content,
      sym_main_start,
      sym_main_stop,
      sym_paragraph,
      aux_sym_document_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(30), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [297] = 22,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(76), 1,
      sym_text,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      sym_command_group_start,
    ACTIONS(86), 1,
      sym_command_name,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(25), 1,
      sym_command_group,
    STATE(39), 1,
      sym_brace_group_stop,
    STATE(183), 1,
      sym_comment,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(195), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(80), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(10), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(21), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [385] = 22,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(76), 1,
      sym_text,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      sym_command_group_start,
    ACTIONS(86), 1,
      sym_command_name,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(25), 1,
      sym_command_group,
    STATE(70), 1,
      sym_brace_group_stop,
    STATE(183), 1,
      sym_comment,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(195), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(11), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(21), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [473] = 22,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(76), 1,
      sym_text,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      sym_command_group_start,
    ACTIONS(86), 1,
      sym_command_name,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(25), 1,
      sym_command_group,
    STATE(59), 1,
      sym_brace_group_stop,
    STATE(183), 1,
      sym_comment,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(195), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(11), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(21), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [561] = 22,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(76), 1,
      sym_text,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      sym_command_group_start,
    ACTIONS(86), 1,
      sym_command_name,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(25), 1,
      sym_command_group,
    STATE(52), 1,
      sym_brace_group_stop,
    STATE(183), 1,
      sym_comment,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(195), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(6), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(21), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [649] = 22,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(76), 1,
      sym_text,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      sym_command_group_start,
    ACTIONS(86), 1,
      sym_command_name,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(25), 1,
      sym_command_group,
    STATE(54), 1,
      sym_brace_group_stop,
    STATE(183), 1,
      sym_comment,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(195), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(7), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(21), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [737] = 22,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(76), 1,
      sym_text,
    ACTIONS(78), 1,
      anon_sym_DOLLAR,
    ACTIONS(82), 1,
      anon_sym_BSLASH,
    ACTIONS(84), 1,
      sym_command_group_start,
    ACTIONS(86), 1,
      sym_command_name,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(25), 1,
      sym_command_group,
    STATE(36), 1,
      sym_brace_group_stop,
    STATE(183), 1,
      sym_comment,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(195), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(80), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(11), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(21), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [825] = 21,
    ACTIONS(92), 1,
      sym_text,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(98), 1,
      anon_sym_DOLLAR,
    ACTIONS(106), 1,
      anon_sym_BSLASH,
    ACTIONS(109), 1,
      sym_command_group_start,
    ACTIONS(115), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(121), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(124), 1,
      sym_command_name,
    STATE(5), 1,
      sym_brace_group_start,
    STATE(25), 1,
      sym_command_group,
    STATE(183), 1,
      sym_comment,
    STATE(190), 1,
      sym_typing_html_start,
    STATE(191), 1,
      sym_typing_start,
    STATE(195), 1,
      sym_tikz_start,
    STATE(197), 1,
      sym_metapost_start,
    ACTIONS(101), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(11), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(112), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(118), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(21), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [910] = 21,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(127), 1,
      sym_text,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      sym_command_group_start,
    ACTIONS(135), 1,
      sym_command_group_stop,
    ACTIONS(137), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(48), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_typing_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(202), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(17), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(35), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [994] = 21,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(127), 1,
      sym_text,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      sym_command_group_start,
    ACTIONS(137), 1,
      sym_command_name,
    ACTIONS(139), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(48), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_typing_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(202), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(20), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(35), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1078] = 21,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(127), 1,
      sym_text,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      sym_command_group_start,
    ACTIONS(137), 1,
      sym_command_name,
    ACTIONS(141), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(48), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_typing_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(202), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(19), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(35), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1162] = 21,
    ACTIONS(143), 1,
      sym_text,
    ACTIONS(146), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      anon_sym_DOLLAR,
    ACTIONS(155), 1,
      anon_sym_BSLASH,
    ACTIONS(158), 1,
      sym_command_group_start,
    ACTIONS(164), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(170), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(173), 1,
      sym_command_name,
    ACTIONS(176), 1,
      sym_paragraph_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(187), 1,
      sym_tikz_start,
    STATE(192), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_typing_html_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(152), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(15), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(161), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(167), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(30), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1246] = 21,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(127), 1,
      sym_text,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      sym_command_group_start,
    ACTIONS(137), 1,
      sym_command_name,
    ACTIONS(178), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(48), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_typing_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(202), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(14), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(35), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1330] = 21,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(127), 1,
      sym_text,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      sym_command_group_start,
    ACTIONS(137), 1,
      sym_command_name,
    ACTIONS(180), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(48), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_typing_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(202), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(19), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(35), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1414] = 21,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      anon_sym_DOLLAR,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_command_group_start,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      sym_command_name,
    ACTIONS(182), 1,
      sym_paragraph_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(80), 1,
      sym_command_group,
    STATE(184), 1,
      sym_comment,
    STATE(187), 1,
      sym_tikz_start,
    STATE(192), 1,
      sym_typing_start,
    STATE(193), 1,
      sym_typing_html_start,
    STATE(204), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(15), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(30), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1498] = 21,
    ACTIONS(95), 1,
      aux_sym_comment_token1,
    ACTIONS(104), 1,
      sym_command_group_stop,
    ACTIONS(115), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(121), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(184), 1,
      sym_text,
    ACTIONS(187), 1,
      anon_sym_DOLLAR,
    ACTIONS(190), 1,
      anon_sym_BSLASH,
    ACTIONS(193), 1,
      sym_command_group_start,
    ACTIONS(196), 1,
      sym_command_name,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(48), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_typing_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(202), 1,
      sym_metapost_start,
    ACTIONS(101), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(19), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(112), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(118), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(35), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1582] = 21,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(25), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(29), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(127), 1,
      sym_text,
    ACTIONS(129), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(133), 1,
      sym_command_group_start,
    ACTIONS(137), 1,
      sym_command_name,
    ACTIONS(199), 1,
      sym_command_group_stop,
    STATE(9), 1,
      sym_brace_group_start,
    STATE(48), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_typing_start,
    STATE(201), 1,
      sym_tikz_start,
    STATE(202), 1,
      sym_metapost_start,
    ACTIONS(17), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(19), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(23), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(27), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(35), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1666] = 3,
    STATE(83), 1,
      sym__end_of_line,
    ACTIONS(203), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(201), 25,
      sym_text,
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
  [1702] = 2,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(207), 26,
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
  [1735] = 1,
    ACTIONS(209), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [1766] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(213), 26,
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
  [1799] = 4,
    ACTIONS(215), 1,
      sym_text,
    STATE(83), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(217), 2,
      sym_paragraph_stop,
      sym__eol,
    ACTIONS(201), 24,
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
  [1836] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(221), 26,
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
  [1869] = 1,
    ACTIONS(223), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [1900] = 1,
    ACTIONS(225), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [1931] = 1,
    ACTIONS(227), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [1962] = 4,
    ACTIONS(233), 1,
      sym_paragraph_stop,
    STATE(87), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(229), 23,
      sym_text,
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
  [1999] = 1,
    ACTIONS(235), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2030] = 1,
    ACTIONS(237), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2061] = 1,
    ACTIONS(239), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2092] = 1,
    ACTIONS(241), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2123] = 3,
    STATE(86), 1,
      sym__end_of_line,
    ACTIONS(243), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(201), 24,
      sym_text,
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
  [2158] = 1,
    ACTIONS(245), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2189] = 1,
    ACTIONS(247), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2220] = 1,
    ACTIONS(249), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2251] = 1,
    ACTIONS(251), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2282] = 1,
    ACTIONS(253), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2313] = 1,
    ACTIONS(255), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2344] = 1,
    ACTIONS(257), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2375] = 1,
    ACTIONS(259), 28,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2406] = 1,
    ACTIONS(225), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2436] = 2,
    ACTIONS(261), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(263), 24,
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
  [2468] = 2,
    ACTIONS(265), 1,
      sym_paragraph_stop,
    ACTIONS(223), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2500] = 1,
    ACTIONS(259), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2530] = 4,
    ACTIONS(215), 1,
      sym_text,
    STATE(86), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(267), 2,
      sym_paragraph_stop,
      sym__eol,
    ACTIONS(201), 23,
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
  [2566] = 2,
    ACTIONS(269), 1,
      sym_paragraph_stop,
    ACTIONS(259), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2598] = 1,
    ACTIONS(257), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2628] = 2,
    ACTIONS(271), 1,
      sym_paragraph_stop,
    ACTIONS(257), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2660] = 2,
    ACTIONS(273), 1,
      sym_paragraph_stop,
    ACTIONS(251), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2692] = 2,
    ACTIONS(275), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(277), 24,
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
  [2724] = 1,
    ACTIONS(251), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2754] = 1,
    ACTIONS(253), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2784] = 2,
    ACTIONS(279), 1,
      sym_paragraph_stop,
    ACTIONS(253), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2816] = 2,
    ACTIONS(281), 1,
      sym_paragraph_stop,
    ACTIONS(225), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2848] = 1,
    ACTIONS(249), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2878] = 1,
    ACTIONS(245), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2908] = 1,
    ACTIONS(241), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2938] = 1,
    ACTIONS(209), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2968] = 1,
    ACTIONS(223), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [2998] = 1,
    ACTIONS(239), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3028] = 1,
    ACTIONS(227), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3058] = 1,
    ACTIONS(235), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3088] = 1,
    ACTIONS(237), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3118] = 1,
    ACTIONS(247), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3148] = 2,
    ACTIONS(283), 1,
      sym_paragraph_stop,
    ACTIONS(249), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3180] = 1,
    ACTIONS(255), 27,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3210] = 2,
    ACTIONS(285), 1,
      sym_paragraph_stop,
    ACTIONS(245), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3242] = 2,
    ACTIONS(287), 1,
      sym_paragraph_stop,
    ACTIONS(241), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3274] = 2,
    ACTIONS(289), 1,
      sym_paragraph_stop,
    ACTIONS(239), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3306] = 2,
    ACTIONS(291), 1,
      sym_paragraph_stop,
    ACTIONS(209), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3338] = 2,
    ACTIONS(293), 1,
      sym_paragraph_stop,
    ACTIONS(255), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3370] = 2,
    ACTIONS(295), 1,
      sym_paragraph_stop,
    ACTIONS(247), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3402] = 2,
    ACTIONS(297), 1,
      sym_paragraph_stop,
    ACTIONS(237), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3434] = 2,
    ACTIONS(299), 1,
      sym_paragraph_stop,
    ACTIONS(235), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3466] = 2,
    ACTIONS(301), 1,
      sym_paragraph_stop,
    ACTIONS(227), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
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
  [3498] = 2,
    ACTIONS(275), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(277), 23,
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
  [3529] = 4,
    ACTIONS(303), 1,
      sym__eol,
    STATE(87), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(233), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(229), 22,
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
  [3564] = 2,
    ACTIONS(261), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(263), 23,
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
  [3595] = 2,
    ACTIONS(261), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(263), 22,
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
  [3625] = 2,
    ACTIONS(305), 1,
      sym_text,
    ACTIONS(307), 24,
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
  [3655] = 2,
    ACTIONS(275), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(277), 22,
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
  [3685] = 2,
    ACTIONS(309), 1,
      sym_text,
    ACTIONS(311), 24,
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
  [3715] = 2,
    ACTIONS(305), 1,
      sym_text,
    ACTIONS(307), 23,
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
  [3744] = 2,
    ACTIONS(313), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(315), 22,
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
  [3773] = 9,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    STATE(174), 1,
      sym_title_value,
    ACTIONS(325), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(317), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(91), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3811] = 8,
    ACTIONS(332), 1,
      aux_sym_comment_token1,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(340), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym_command_name,
    ACTIONS(346), 1,
      aux_sym_title_text_token1,
    ACTIONS(329), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(338), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(89), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3847] = 8,
    ACTIONS(352), 1,
      aux_sym_comment_token1,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_BSLASH,
    ACTIONS(363), 1,
      sym_command_name,
    ACTIONS(366), 1,
      aux_sym_title_text_token1,
    ACTIONS(349), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(358), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(90), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3883] = 8,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(371), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(90), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3918] = 8,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      aux_sym_title_text_token1,
    ACTIONS(377), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(373), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(89), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3953] = 8,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      aux_sym_title_text_token1,
    STATE(180), 1,
      sym_value,
    ACTIONS(381), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(92), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3987] = 8,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      aux_sym_title_text_token1,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(96), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4021] = 8,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    ACTIONS(387), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(97), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4055] = 8,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    ACTIONS(379), 1,
      aux_sym_title_text_token1,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(373), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(89), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4089] = 8,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(327), 1,
      aux_sym_title_text_token1,
    ACTIONS(393), 1,
      anon_sym_RBRACE,
    ACTIONS(369), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(90), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [4123] = 2,
    STATE(27), 1,
      sym_escapechar,
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
  [4140] = 2,
    STATE(62), 1,
      sym_escapechar,
    ACTIONS(397), 11,
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
  [4157] = 2,
    STATE(118), 1,
      sym_escapechar,
    ACTIONS(399), 11,
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
  [4174] = 9,
    ACTIONS(403), 1,
      sym_command_block_stop,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      aux_sym_keyword_token1,
    ACTIONS(409), 1,
      anon_sym_title,
    STATE(146), 1,
      sym_keyword,
    STATE(208), 1,
      sym__end_of_line,
    STATE(209), 1,
      sym_key,
    STATE(145), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(401), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4205] = 2,
    STATE(150), 1,
      sym_escapechar,
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
  [4222] = 2,
    STATE(46), 1,
      sym_escapechar,
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
  [4239] = 6,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(423), 1,
      anon_sym_BSLASH,
    ACTIONS(426), 1,
      sym_math_text,
    ACTIONS(418), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4263] = 1,
    ACTIONS(429), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4277] = 5,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_command_block_start,
    ACTIONS(437), 1,
      sym_command_stop,
    ACTIONS(431), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(116), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4299] = 1,
    ACTIONS(439), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4313] = 1,
    ACTIONS(259), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4327] = 1,
    ACTIONS(441), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4341] = 5,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_command_block_start,
    ACTIONS(443), 1,
      sym_command_stop,
    ACTIONS(431), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(116), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4363] = 5,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_command_block_start,
    ACTIONS(447), 1,
      sym_command_stop,
    ACTIONS(445), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(110), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4385] = 1,
    ACTIONS(449), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4399] = 1,
    ACTIONS(249), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4413] = 1,
    ACTIONS(225), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4427] = 1,
    ACTIONS(451), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4441] = 5,
    ACTIONS(456), 1,
      aux_sym_comment_token1,
    ACTIONS(459), 1,
      sym_command_block_start,
    ACTIONS(462), 1,
      sym_command_stop,
    ACTIONS(453), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(116), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4463] = 5,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_command_block_start,
    ACTIONS(464), 1,
      sym_command_stop,
    ACTIONS(431), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(116), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4485] = 1,
    ACTIONS(223), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4499] = 5,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_command_block_start,
    ACTIONS(468), 1,
      sym_command_stop,
    ACTIONS(466), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(117), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4521] = 1,
    ACTIONS(470), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4535] = 5,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_command_block_start,
    ACTIONS(474), 1,
      sym_command_stop,
    ACTIONS(472), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4557] = 5,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_command_block_start,
    ACTIONS(476), 1,
      sym_command_stop,
    ACTIONS(431), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(116), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4579] = 5,
    ACTIONS(433), 1,
      aux_sym_comment_token1,
    ACTIONS(435), 1,
      sym_command_block_start,
    ACTIONS(480), 1,
      sym_command_stop,
    ACTIONS(478), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(106), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4601] = 1,
    ACTIONS(482), 11,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_name,
      sym_command_block_stop,
      anon_sym_COMMA,
      aux_sym_title_text_token1,
  [4615] = 7,
    ACTIONS(409), 1,
      anon_sym_title,
    ACTIONS(486), 1,
      sym_command_block_stop,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    STATE(165), 1,
      sym__end_of_line,
    STATE(209), 1,
      sym_key,
    STATE(181), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(484), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4640] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(492), 1,
      anon_sym_DOLLAR,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      sym_math_text,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4663] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      sym_math_text,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4686] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      sym_math_text,
    ACTIONS(502), 1,
      anon_sym_DOLLAR,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4709] = 7,
    ACTIONS(409), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    ACTIONS(506), 1,
      sym_command_block_stop,
    STATE(167), 1,
      sym__end_of_line,
    STATE(209), 1,
      sym_key,
    STATE(181), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(504), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4734] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(510), 1,
      sym_math_text,
    STATE(127), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4757] = 6,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(498), 1,
      sym_math_text,
    ACTIONS(512), 1,
      anon_sym_DOLLAR,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4780] = 6,
    ACTIONS(409), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    STATE(178), 1,
      sym__end_of_line,
    STATE(209), 1,
      sym_key,
    STATE(181), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(514), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4802] = 5,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(516), 1,
      sym_math_text,
    STATE(128), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4822] = 5,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(518), 1,
      sym_math_text,
    STATE(131), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4842] = 5,
    ACTIONS(490), 1,
      aux_sym_comment_token1,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
    ACTIONS(496), 1,
      anon_sym_BSLASH,
    ACTIONS(520), 1,
      sym_math_text,
    STATE(126), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4862] = 2,
    STATE(66), 1,
      sym_typing_stop,
    ACTIONS(522), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4875] = 2,
    STATE(32), 1,
      sym_typing_stop,
    ACTIONS(524), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4888] = 2,
    STATE(76), 1,
      sym_typing_stop,
    ACTIONS(526), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4901] = 5,
    ACTIONS(530), 1,
      sym_command_block_stop,
    ACTIONS(532), 1,
      aux_sym_keyword_token1,
    STATE(175), 1,
      sym_keyword,
    STATE(186), 1,
      sym__end_of_line,
    ACTIONS(528), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4919] = 2,
    STATE(72), 1,
      sym_metapost_stop,
    ACTIONS(534), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4931] = 1,
    ACTIONS(536), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4941] = 2,
    STATE(33), 1,
      sym_metapost_stop,
    ACTIONS(538), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4953] = 5,
    ACTIONS(532), 1,
      aux_sym_keyword_token1,
    ACTIONS(542), 1,
      sym_command_block_stop,
    STATE(175), 1,
      sym_keyword,
    STATE(185), 1,
      sym__end_of_line,
    ACTIONS(540), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4971] = 5,
    ACTIONS(486), 1,
      sym_command_block_stop,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_settings_block_repeat1,
    STATE(212), 1,
      sym__end_of_line,
    ACTIONS(544), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4989] = 5,
    ACTIONS(550), 1,
      sym_command_block_stop,
    ACTIONS(552), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_settings_block_repeat1,
    STATE(213), 1,
      sym__end_of_line,
    ACTIONS(548), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5007] = 5,
    ACTIONS(556), 1,
      sym_command_block_stop,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_option_block_repeat1,
    STATE(217), 1,
      sym__end_of_line,
    ACTIONS(554), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5025] = 2,
    STATE(63), 1,
      sym_metapost_stop,
    ACTIONS(560), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5037] = 5,
    ACTIONS(542), 1,
      sym_command_block_stop,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_option_block_repeat1,
    STATE(206), 1,
      sym__end_of_line,
    ACTIONS(562), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5055] = 1,
    ACTIONS(441), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5064] = 1,
    ACTIONS(223), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5073] = 2,
    ACTIONS(568), 1,
      sym_command_stop,
    ACTIONS(566), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5084] = 2,
    ACTIONS(572), 1,
      sym_command_stop,
    ACTIONS(570), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5095] = 3,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(574), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5108] = 2,
    ACTIONS(581), 1,
      sym_command_stop,
    ACTIONS(579), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5119] = 2,
    ACTIONS(585), 1,
      sym_command_stop,
    ACTIONS(583), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5130] = 2,
    ACTIONS(572), 1,
      sym_command_stop,
    ACTIONS(570), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5141] = 1,
    ACTIONS(587), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5150] = 2,
    ACTIONS(585), 1,
      sym_command_stop,
    ACTIONS(583), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5161] = 2,
    ACTIONS(589), 1,
      sym_command_stop,
    ACTIONS(441), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5172] = 3,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(591), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5185] = 2,
    ACTIONS(598), 1,
      sym_command_stop,
    ACTIONS(596), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5196] = 2,
    ACTIONS(602), 1,
      anon_sym_EQ,
    ACTIONS(600), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5207] = 2,
    ACTIONS(606), 1,
      sym_command_stop,
    ACTIONS(604), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5218] = 2,
    ACTIONS(610), 1,
      sym_command_stop,
    ACTIONS(608), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5229] = 5,
    ACTIONS(409), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    ACTIONS(612), 1,
      sym_command_block_stop,
    STATE(209), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [5246] = 1,
    ACTIONS(614), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5255] = 5,
    ACTIONS(409), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    ACTIONS(616), 1,
      sym_command_block_stop,
    STATE(209), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [5272] = 1,
    ACTIONS(225), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5281] = 1,
    ACTIONS(618), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5290] = 2,
    ACTIONS(622), 1,
      sym_command_stop,
    ACTIONS(620), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5301] = 4,
    ACTIONS(532), 1,
      aux_sym_keyword_token1,
    STATE(175), 1,
      sym_keyword,
    STATE(189), 1,
      sym__end_of_line,
    ACTIONS(624), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5316] = 2,
    ACTIONS(628), 1,
      sym_command_stop,
    ACTIONS(626), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5327] = 1,
    ACTIONS(600), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5335] = 1,
    ACTIONS(630), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5343] = 1,
    ACTIONS(591), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5351] = 1,
    ACTIONS(632), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5359] = 1,
    ACTIONS(634), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5367] = 4,
    ACTIONS(409), 1,
      anon_sym_title,
    ACTIONS(488), 1,
      aux_sym_keyword_token1,
    STATE(209), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [5381] = 3,
    ACTIONS(638), 1,
      sym_command_block_stop,
    STATE(211), 1,
      sym__end_of_line,
    ACTIONS(636), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5393] = 1,
    ACTIONS(640), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5401] = 1,
    ACTIONS(574), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5409] = 2,
    STATE(86), 1,
      sym__end_of_line,
    ACTIONS(243), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5418] = 2,
    STATE(83), 1,
      sym__end_of_line,
    ACTIONS(203), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5427] = 2,
    STATE(87), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5436] = 3,
    ACTIONS(642), 1,
      sym_command_block_stop,
    ACTIONS(644), 1,
      aux_sym_keyword_token1,
    STATE(177), 1,
      sym_keyword,
  [5446] = 3,
    ACTIONS(644), 1,
      aux_sym_keyword_token1,
    ACTIONS(646), 1,
      sym_command_block_stop,
    STATE(177), 1,
      sym_keyword,
  [5456] = 2,
    ACTIONS(648), 1,
      aux_sym_metapost_body_token1,
    STATE(199), 1,
      sym_tikz_body,
  [5463] = 2,
    ACTIONS(650), 1,
      anon_sym_BSLASHstopHTML,
    STATE(29), 1,
      sym_typing_html_stop,
  [5470] = 2,
    ACTIONS(644), 1,
      aux_sym_keyword_token1,
    STATE(177), 1,
      sym_keyword,
  [5477] = 2,
    ACTIONS(652), 1,
      aux_sym_metapost_body_token1,
    STATE(188), 1,
      sym_typing_html_body,
  [5484] = 2,
    ACTIONS(654), 1,
      aux_sym_metapost_body_token1,
    STATE(137), 1,
      sym_typing_body,
  [5491] = 2,
    ACTIONS(654), 1,
      aux_sym_metapost_body_token1,
    STATE(138), 1,
      sym_typing_body,
  [5498] = 2,
    ACTIONS(652), 1,
      aux_sym_metapost_body_token1,
    STATE(203), 1,
      sym_typing_html_body,
  [5505] = 2,
    ACTIONS(656), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(69), 1,
      sym_tikz_stop,
  [5512] = 2,
    ACTIONS(648), 1,
      aux_sym_metapost_body_token1,
    STATE(205), 1,
      sym_tikz_body,
  [5519] = 2,
    ACTIONS(658), 1,
      anon_sym_BSLASHstopHTML,
    STATE(64), 1,
      sym_typing_html_stop,
  [5526] = 2,
    ACTIONS(660), 1,
      aux_sym_metapost_body_token1,
    STATE(142), 1,
      sym_metapost_body,
  [5533] = 2,
    ACTIONS(652), 1,
      aux_sym_metapost_body_token1,
    STATE(196), 1,
      sym_typing_html_body,
  [5540] = 2,
    ACTIONS(662), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(74), 1,
      sym_tikz_stop,
  [5547] = 2,
    ACTIONS(654), 1,
      aux_sym_metapost_body_token1,
    STATE(136), 1,
      sym_typing_body,
  [5554] = 2,
    ACTIONS(648), 1,
      aux_sym_metapost_body_token1,
    STATE(194), 1,
      sym_tikz_body,
  [5561] = 2,
    ACTIONS(660), 1,
      aux_sym_metapost_body_token1,
    STATE(147), 1,
      sym_metapost_body,
  [5568] = 2,
    ACTIONS(664), 1,
      anon_sym_BSLASHstopHTML,
    STATE(78), 1,
      sym_typing_html_stop,
  [5575] = 2,
    ACTIONS(660), 1,
      aux_sym_metapost_body_token1,
    STATE(140), 1,
      sym_metapost_body,
  [5582] = 2,
    ACTIONS(666), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(41), 1,
      sym_tikz_stop,
  [5589] = 1,
    ACTIONS(642), 1,
      sym_command_block_stop,
  [5593] = 1,
    ACTIONS(668), 1,
      anon_sym_EQ,
  [5597] = 1,
    ACTIONS(670), 1,
      sym_command_block_stop,
  [5601] = 1,
    ACTIONS(672), 1,
      anon_sym_EQ,
  [5605] = 1,
    ACTIONS(674), 1,
      ts_builtin_sym_end,
  [5609] = 1,
    ACTIONS(676), 1,
      sym_command_block_stop,
  [5613] = 1,
    ACTIONS(612), 1,
      sym_command_block_stop,
  [5617] = 1,
    ACTIONS(678), 1,
      sym_command_block_stop,
  [5621] = 1,
    ACTIONS(680), 1,
      aux_sym_metapost_body_token1,
  [5625] = 1,
    ACTIONS(682), 1,
      anon_sym_BSLASHstopHTML,
  [5629] = 1,
    ACTIONS(684), 1,
      aux_sym_metapost_body_token1,
  [5633] = 1,
    ACTIONS(686), 1,
      sym_command_block_stop,
  [5637] = 1,
    ACTIONS(688), 1,
      aux_sym_metapost_body_token1,
  [5641] = 1,
    ACTIONS(690), 1,
      aux_sym_metapost_body_token1,
  [5645] = 1,
    ACTIONS(692), 1,
      anon_sym_BSLASHstoptikzpicture,
  [5649] = 1,
    ACTIONS(694), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 198,
  [SMALL_STATE(5)] = 297,
  [SMALL_STATE(6)] = 385,
  [SMALL_STATE(7)] = 473,
  [SMALL_STATE(8)] = 561,
  [SMALL_STATE(9)] = 649,
  [SMALL_STATE(10)] = 737,
  [SMALL_STATE(11)] = 825,
  [SMALL_STATE(12)] = 910,
  [SMALL_STATE(13)] = 994,
  [SMALL_STATE(14)] = 1078,
  [SMALL_STATE(15)] = 1162,
  [SMALL_STATE(16)] = 1246,
  [SMALL_STATE(17)] = 1330,
  [SMALL_STATE(18)] = 1414,
  [SMALL_STATE(19)] = 1498,
  [SMALL_STATE(20)] = 1582,
  [SMALL_STATE(21)] = 1666,
  [SMALL_STATE(22)] = 1702,
  [SMALL_STATE(23)] = 1735,
  [SMALL_STATE(24)] = 1766,
  [SMALL_STATE(25)] = 1799,
  [SMALL_STATE(26)] = 1836,
  [SMALL_STATE(27)] = 1869,
  [SMALL_STATE(28)] = 1900,
  [SMALL_STATE(29)] = 1931,
  [SMALL_STATE(30)] = 1962,
  [SMALL_STATE(31)] = 1999,
  [SMALL_STATE(32)] = 2030,
  [SMALL_STATE(33)] = 2061,
  [SMALL_STATE(34)] = 2092,
  [SMALL_STATE(35)] = 2123,
  [SMALL_STATE(36)] = 2158,
  [SMALL_STATE(37)] = 2189,
  [SMALL_STATE(38)] = 2220,
  [SMALL_STATE(39)] = 2251,
  [SMALL_STATE(40)] = 2282,
  [SMALL_STATE(41)] = 2313,
  [SMALL_STATE(42)] = 2344,
  [SMALL_STATE(43)] = 2375,
  [SMALL_STATE(44)] = 2406,
  [SMALL_STATE(45)] = 2436,
  [SMALL_STATE(46)] = 2468,
  [SMALL_STATE(47)] = 2500,
  [SMALL_STATE(48)] = 2530,
  [SMALL_STATE(49)] = 2566,
  [SMALL_STATE(50)] = 2598,
  [SMALL_STATE(51)] = 2628,
  [SMALL_STATE(52)] = 2660,
  [SMALL_STATE(53)] = 2692,
  [SMALL_STATE(54)] = 2724,
  [SMALL_STATE(55)] = 2754,
  [SMALL_STATE(56)] = 2784,
  [SMALL_STATE(57)] = 2816,
  [SMALL_STATE(58)] = 2848,
  [SMALL_STATE(59)] = 2878,
  [SMALL_STATE(60)] = 2908,
  [SMALL_STATE(61)] = 2938,
  [SMALL_STATE(62)] = 2968,
  [SMALL_STATE(63)] = 2998,
  [SMALL_STATE(64)] = 3028,
  [SMALL_STATE(65)] = 3058,
  [SMALL_STATE(66)] = 3088,
  [SMALL_STATE(67)] = 3118,
  [SMALL_STATE(68)] = 3148,
  [SMALL_STATE(69)] = 3180,
  [SMALL_STATE(70)] = 3210,
  [SMALL_STATE(71)] = 3242,
  [SMALL_STATE(72)] = 3274,
  [SMALL_STATE(73)] = 3306,
  [SMALL_STATE(74)] = 3338,
  [SMALL_STATE(75)] = 3370,
  [SMALL_STATE(76)] = 3402,
  [SMALL_STATE(77)] = 3434,
  [SMALL_STATE(78)] = 3466,
  [SMALL_STATE(79)] = 3498,
  [SMALL_STATE(80)] = 3529,
  [SMALL_STATE(81)] = 3564,
  [SMALL_STATE(82)] = 3595,
  [SMALL_STATE(83)] = 3625,
  [SMALL_STATE(84)] = 3655,
  [SMALL_STATE(85)] = 3685,
  [SMALL_STATE(86)] = 3715,
  [SMALL_STATE(87)] = 3744,
  [SMALL_STATE(88)] = 3773,
  [SMALL_STATE(89)] = 3811,
  [SMALL_STATE(90)] = 3847,
  [SMALL_STATE(91)] = 3883,
  [SMALL_STATE(92)] = 3918,
  [SMALL_STATE(93)] = 3953,
  [SMALL_STATE(94)] = 3987,
  [SMALL_STATE(95)] = 4021,
  [SMALL_STATE(96)] = 4055,
  [SMALL_STATE(97)] = 4089,
  [SMALL_STATE(98)] = 4123,
  [SMALL_STATE(99)] = 4140,
  [SMALL_STATE(100)] = 4157,
  [SMALL_STATE(101)] = 4174,
  [SMALL_STATE(102)] = 4205,
  [SMALL_STATE(103)] = 4222,
  [SMALL_STATE(104)] = 4239,
  [SMALL_STATE(105)] = 4263,
  [SMALL_STATE(106)] = 4277,
  [SMALL_STATE(107)] = 4299,
  [SMALL_STATE(108)] = 4313,
  [SMALL_STATE(109)] = 4327,
  [SMALL_STATE(110)] = 4341,
  [SMALL_STATE(111)] = 4363,
  [SMALL_STATE(112)] = 4385,
  [SMALL_STATE(113)] = 4399,
  [SMALL_STATE(114)] = 4413,
  [SMALL_STATE(115)] = 4427,
  [SMALL_STATE(116)] = 4441,
  [SMALL_STATE(117)] = 4463,
  [SMALL_STATE(118)] = 4485,
  [SMALL_STATE(119)] = 4499,
  [SMALL_STATE(120)] = 4521,
  [SMALL_STATE(121)] = 4535,
  [SMALL_STATE(122)] = 4557,
  [SMALL_STATE(123)] = 4579,
  [SMALL_STATE(124)] = 4601,
  [SMALL_STATE(125)] = 4615,
  [SMALL_STATE(126)] = 4640,
  [SMALL_STATE(127)] = 4663,
  [SMALL_STATE(128)] = 4686,
  [SMALL_STATE(129)] = 4709,
  [SMALL_STATE(130)] = 4734,
  [SMALL_STATE(131)] = 4757,
  [SMALL_STATE(132)] = 4780,
  [SMALL_STATE(133)] = 4802,
  [SMALL_STATE(134)] = 4822,
  [SMALL_STATE(135)] = 4842,
  [SMALL_STATE(136)] = 4862,
  [SMALL_STATE(137)] = 4875,
  [SMALL_STATE(138)] = 4888,
  [SMALL_STATE(139)] = 4901,
  [SMALL_STATE(140)] = 4919,
  [SMALL_STATE(141)] = 4931,
  [SMALL_STATE(142)] = 4941,
  [SMALL_STATE(143)] = 4953,
  [SMALL_STATE(144)] = 4971,
  [SMALL_STATE(145)] = 4989,
  [SMALL_STATE(146)] = 5007,
  [SMALL_STATE(147)] = 5025,
  [SMALL_STATE(148)] = 5037,
  [SMALL_STATE(149)] = 5055,
  [SMALL_STATE(150)] = 5064,
  [SMALL_STATE(151)] = 5073,
  [SMALL_STATE(152)] = 5084,
  [SMALL_STATE(153)] = 5095,
  [SMALL_STATE(154)] = 5108,
  [SMALL_STATE(155)] = 5119,
  [SMALL_STATE(156)] = 5130,
  [SMALL_STATE(157)] = 5141,
  [SMALL_STATE(158)] = 5150,
  [SMALL_STATE(159)] = 5161,
  [SMALL_STATE(160)] = 5172,
  [SMALL_STATE(161)] = 5185,
  [SMALL_STATE(162)] = 5196,
  [SMALL_STATE(163)] = 5207,
  [SMALL_STATE(164)] = 5218,
  [SMALL_STATE(165)] = 5229,
  [SMALL_STATE(166)] = 5246,
  [SMALL_STATE(167)] = 5255,
  [SMALL_STATE(168)] = 5272,
  [SMALL_STATE(169)] = 5281,
  [SMALL_STATE(170)] = 5290,
  [SMALL_STATE(171)] = 5301,
  [SMALL_STATE(172)] = 5316,
  [SMALL_STATE(173)] = 5327,
  [SMALL_STATE(174)] = 5335,
  [SMALL_STATE(175)] = 5343,
  [SMALL_STATE(176)] = 5351,
  [SMALL_STATE(177)] = 5359,
  [SMALL_STATE(178)] = 5367,
  [SMALL_STATE(179)] = 5381,
  [SMALL_STATE(180)] = 5393,
  [SMALL_STATE(181)] = 5401,
  [SMALL_STATE(182)] = 5409,
  [SMALL_STATE(183)] = 5418,
  [SMALL_STATE(184)] = 5427,
  [SMALL_STATE(185)] = 5436,
  [SMALL_STATE(186)] = 5446,
  [SMALL_STATE(187)] = 5456,
  [SMALL_STATE(188)] = 5463,
  [SMALL_STATE(189)] = 5470,
  [SMALL_STATE(190)] = 5477,
  [SMALL_STATE(191)] = 5484,
  [SMALL_STATE(192)] = 5491,
  [SMALL_STATE(193)] = 5498,
  [SMALL_STATE(194)] = 5505,
  [SMALL_STATE(195)] = 5512,
  [SMALL_STATE(196)] = 5519,
  [SMALL_STATE(197)] = 5526,
  [SMALL_STATE(198)] = 5533,
  [SMALL_STATE(199)] = 5540,
  [SMALL_STATE(200)] = 5547,
  [SMALL_STATE(201)] = 5554,
  [SMALL_STATE(202)] = 5561,
  [SMALL_STATE(203)] = 5568,
  [SMALL_STATE(204)] = 5575,
  [SMALL_STATE(205)] = 5582,
  [SMALL_STATE(206)] = 5589,
  [SMALL_STATE(207)] = 5593,
  [SMALL_STATE(208)] = 5597,
  [SMALL_STATE(209)] = 5601,
  [SMALL_STATE(210)] = 5605,
  [SMALL_STATE(211)] = 5609,
  [SMALL_STATE(212)] = 5613,
  [SMALL_STATE(213)] = 5617,
  [SMALL_STATE(214)] = 5621,
  [SMALL_STATE(215)] = 5625,
  [SMALL_STATE(216)] = 5629,
  [SMALL_STATE(217)] = 5633,
  [SMALL_STATE(218)] = 5637,
  [SMALL_STATE(219)] = 5641,
  [SMALL_STATE(220)] = 5645,
  [SMALL_STATE(221)] = 5649,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(109),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(134),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(103),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(214),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(216),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(218),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(219),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(21),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(109),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(133),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(85),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(98),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(12),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(214),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(216),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(218),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(219),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(119),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(30),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(109),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(134),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(85),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(103),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(13),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(214),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(216),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(218),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(219),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(123),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(35),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(135),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(99),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(16),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(121),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 1),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_start, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(89),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(109),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(94),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(100),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(111),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(112),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(90),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(109),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(95),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(100),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(111),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(105),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(149),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(130),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(102),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(104),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [453] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(116),
  [456] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(159),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(101),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(132),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [593] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(171),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [674] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
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
