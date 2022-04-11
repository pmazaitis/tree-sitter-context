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
#define STATE_COUNT 221
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 3
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
  sym_document = 68,
  sym__document_content = 69,
  sym_main_start = 70,
  sym_main_stop = 71,
  sym__end_of_line_or_paragraph = 72,
  sym_paragraph = 73,
  sym__paragraph_content = 74,
  sym__end_of_line = 75,
  sym_comment = 76,
  sym_escapechar = 77,
  sym_escaped = 78,
  sym_brace_group_start = 79,
  sym_brace_group_stop = 80,
  sym__group_content = 81,
  sym_brace_group = 82,
  sym_command_group = 83,
  sym_math_group = 84,
  sym__math_content = 85,
  sym_inline_math = 86,
  sym_metapost_start = 87,
  sym_metapost_stop = 88,
  sym_metapost_body = 89,
  sym_metapost_inclusion = 90,
  sym_tikz_start = 91,
  sym_tikz_stop = 92,
  sym_tikz_body = 93,
  sym_tikz_inclusion = 94,
  sym_typing_start = 95,
  sym_typing_stop = 96,
  sym_typing_body = 97,
  sym_typing_inclusion = 98,
  sym_typing_html_start = 99,
  sym_typing_html_stop = 100,
  sym_typing_html_body = 101,
  sym_typing_html_inclusion = 102,
  sym_option_block = 103,
  sym_keyword = 104,
  sym_settings_block = 105,
  sym_setting = 106,
  sym_title_setting = 107,
  sym_title_value = 108,
  sym__title_content = 109,
  sym_title_brace_group = 110,
  sym_title_text = 111,
  sym_key = 112,
  sym_value = 113,
  sym__value_content = 114,
  sym_value_text = 115,
  sym_value_brace_group = 116,
  sym_command = 117,
  aux_sym_document_repeat1 = 118,
  aux_sym_paragraph_repeat1 = 119,
  aux_sym_brace_group_repeat1 = 120,
  aux_sym_math_group_repeat1 = 121,
  aux_sym_option_block_repeat1 = 122,
  aux_sym_settings_block_repeat1 = 123,
  aux_sym_title_value_repeat1 = 124,
  aux_sym_value_repeat1 = 125,
  aux_sym_command_repeat1 = 126,
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
  [1] = {.lex_state = 122},
  [2] = {.lex_state = 122},
  [3] = {.lex_state = 122},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 10, .external_lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 10, .external_lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 1, .external_lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 122},
  [32] = {.lex_state = 3, .external_lex_state = 2},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 122},
  [39] = {.lex_state = 122},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 3, .external_lex_state = 2},
  [46] = {.lex_state = 1, .external_lex_state = 3},
  [47] = {.lex_state = 3, .external_lex_state = 2},
  [48] = {.lex_state = 3, .external_lex_state = 2},
  [49] = {.lex_state = 1, .external_lex_state = 3},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 3, .external_lex_state = 2},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 3, .external_lex_state = 2},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 2, .external_lex_state = 3},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 3, .external_lex_state = 2},
  [67] = {.lex_state = 3, .external_lex_state = 2},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 3, .external_lex_state = 2},
  [70] = {.lex_state = 3, .external_lex_state = 2},
  [71] = {.lex_state = 3, .external_lex_state = 2},
  [72] = {.lex_state = 3, .external_lex_state = 2},
  [73] = {.lex_state = 3, .external_lex_state = 2},
  [74] = {.lex_state = 3, .external_lex_state = 2},
  [75] = {.lex_state = 3, .external_lex_state = 2},
  [76] = {.lex_state = 3, .external_lex_state = 2},
  [77] = {.lex_state = 3, .external_lex_state = 2},
  [78] = {.lex_state = 2, .external_lex_state = 3},
  [79] = {.lex_state = 10, .external_lex_state = 3},
  [80] = {.lex_state = 2, .external_lex_state = 3},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 10, .external_lex_state = 3},
  [84] = {.lex_state = 10, .external_lex_state = 3},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 10, .external_lex_state = 2},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 11},
  [98] = {.lex_state = 11},
  [99] = {.lex_state = 11},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 6, .external_lex_state = 4},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 6, .external_lex_state = 4},
  [106] = {.lex_state = 6, .external_lex_state = 4},
  [107] = {.lex_state = 6, .external_lex_state = 4},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 6, .external_lex_state = 4},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 6, .external_lex_state = 4},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 6, .external_lex_state = 4},
  [119] = {.lex_state = 6, .external_lex_state = 4},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 6, .external_lex_state = 4},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 42},
  [136] = {.lex_state = 42},
  [137] = {.lex_state = 42},
  [138] = {.lex_state = 43},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 43},
  [144] = {.lex_state = 9},
  [145] = {.lex_state = 43},
  [146] = {.lex_state = 42},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 12},
  [149] = {.lex_state = 6, .external_lex_state = 4},
  [150] = {.lex_state = 6, .external_lex_state = 4},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 8},
  [153] = {.lex_state = 6, .external_lex_state = 4},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 6, .external_lex_state = 4},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 6, .external_lex_state = 4},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 9},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 43},
  [162] = {.lex_state = 6, .external_lex_state = 4},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 6, .external_lex_state = 4},
  [165] = {.lex_state = 6, .external_lex_state = 4},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 6, .external_lex_state = 4},
  [168] = {.lex_state = 6, .external_lex_state = 4},
  [169] = {.lex_state = 6, .external_lex_state = 4},
  [170] = {.lex_state = 6, .external_lex_state = 4},
  [171] = {.lex_state = 44},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 44},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 7},
  [182] = {.lex_state = 7},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 45},
  [186] = {.lex_state = 174},
  [187] = {.lex_state = 174},
  [188] = {.lex_state = 174},
  [189] = {.lex_state = 174},
  [190] = {.lex_state = 174},
  [191] = {.lex_state = 174},
  [192] = {.lex_state = 42},
  [193] = {.lex_state = 42},
  [194] = {.lex_state = 174},
  [195] = {.lex_state = 42},
  [196] = {.lex_state = 42},
  [197] = {.lex_state = 42},
  [198] = {.lex_state = 174},
  [199] = {.lex_state = 45},
  [200] = {.lex_state = 174},
  [201] = {.lex_state = 174},
  [202] = {.lex_state = 174},
  [203] = {.lex_state = 42},
  [204] = {.lex_state = 174},
  [205] = {.lex_state = 174},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 174},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 174},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 174},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 42},
  [220] = {.lex_state = 42},
};

enum {
  ts_external_token_command_stop = 0,
  ts_external_token_paragraph_stop = 1,
  ts_external_token__eol = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_command_stop] = sym_command_stop,
  [ts_external_token_paragraph_stop] = sym_paragraph_stop,
  [ts_external_token__eol] = sym__eol,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_command_stop] = true,
    [ts_external_token_paragraph_stop] = true,
    [ts_external_token__eol] = true,
  },
  [2] = {
    [ts_external_token_paragraph_stop] = true,
  },
  [3] = {
    [ts_external_token_paragraph_stop] = true,
    [ts_external_token__eol] = true,
  },
  [4] = {
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
  },
  [1] = {
    [sym_document] = STATE(209),
    [sym__document_content] = STATE(2),
    [sym_main_start] = STATE(2),
    [sym_main_stop] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__paragraph_content] = STATE(16),
    [sym_comment] = STATE(183),
    [sym_escaped] = STATE(32),
    [sym_brace_group_start] = STATE(6),
    [sym_brace_group] = STATE(32),
    [sym_command_group] = STATE(79),
    [sym_inline_math] = STATE(32),
    [sym_metapost_start] = STATE(202),
    [sym_metapost_inclusion] = STATE(32),
    [sym_tikz_start] = STATE(204),
    [sym_tikz_inclusion] = STATE(32),
    [sym_typing_start] = STATE(194),
    [sym_typing_inclusion] = STATE(32),
    [sym_typing_html_start] = STATE(187),
    [sym_typing_html_inclusion] = STATE(32),
    [sym_command] = STATE(32),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_BSLASHstarttext] = ACTIONS(5),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(5),
    [anon_sym_BSLASHstoptext] = ACTIONS(7),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [aux_sym_comment_token1] = ACTIONS(11),
    [anon_sym_DOLLAR] = ACTIONS(13),
    [anon_sym_LBRACE] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASHbgroup] = ACTIONS(15),
    [sym_command_group_start] = ACTIONS(19),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(21),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(21),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(21),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(21),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(21),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(21),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(23),
    [anon_sym_BSLASHstarttyping] = ACTIONS(25),
    [anon_sym_BSLASHstartLUA] = ACTIONS(25),
    [anon_sym_BSLASHstartMP] = ACTIONS(25),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(25),
    [anon_sym_BSLASHstartTEX] = ACTIONS(25),
    [anon_sym_BSLASHstartXML] = ACTIONS(25),
    [anon_sym_BSLASHstartCSS] = ACTIONS(25),
    [anon_sym_BSLASHstartHTML] = ACTIONS(27),
    [sym_command_name] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_command_group_start,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(29), 1,
      sym_command_name,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(79), 1,
      sym_command_group,
    STATE(183), 1,
      sym_comment,
    STATE(187), 1,
      sym_typing_html_start,
    STATE(194), 1,
      sym_typing_start,
    STATE(202), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_tikz_start,
    ACTIONS(5), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(7), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(16), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(3), 5,
      sym__document_content,
      sym_main_start,
      sym_main_stop,
      sym_paragraph,
      aux_sym_document_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(32), 8,
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
    STATE(6), 1,
      sym_brace_group_start,
    STATE(79), 1,
      sym_command_group,
    STATE(183), 1,
      sym_comment,
    STATE(187), 1,
      sym_typing_html_start,
    STATE(194), 1,
      sym_typing_start,
    STATE(202), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_tikz_start,
    ACTIONS(35), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(38), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(50), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(16), 2,
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
    STATE(32), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [198] = 22,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(21), 1,
      sym_brace_group_stop,
    STATE(23), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(188), 1,
      sym_metapost_start,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_tikz_start,
    STATE(201), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(9), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(20), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [286] = 22,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(23), 1,
      sym_command_group,
    STATE(69), 1,
      sym_brace_group_stop,
    STATE(182), 1,
      sym_comment,
    STATE(188), 1,
      sym_metapost_start,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_tikz_start,
    STATE(201), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(10), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(20), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [374] = 22,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(23), 1,
      sym_command_group,
    STATE(48), 1,
      sym_brace_group_stop,
    STATE(182), 1,
      sym_comment,
    STATE(188), 1,
      sym_metapost_start,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_tikz_start,
    STATE(201), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(86), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(5), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(20), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [462] = 22,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(23), 1,
      sym_command_group,
    STATE(63), 1,
      sym_brace_group_stop,
    STATE(182), 1,
      sym_comment,
    STATE(188), 1,
      sym_metapost_start,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_tikz_start,
    STATE(201), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(10), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(20), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [550] = 22,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(23), 1,
      sym_command_group,
    STATE(65), 1,
      sym_brace_group_stop,
    STATE(182), 1,
      sym_comment,
    STATE(188), 1,
      sym_metapost_start,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_tikz_start,
    STATE(201), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(88), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(7), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(20), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [638] = 22,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(74), 1,
      sym_text,
    ACTIONS(76), 1,
      anon_sym_DOLLAR,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(82), 1,
      sym_command_group_start,
    ACTIONS(84), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(23), 1,
      sym_command_group,
    STATE(30), 1,
      sym_brace_group_stop,
    STATE(182), 1,
      sym_comment,
    STATE(188), 1,
      sym_metapost_start,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_tikz_start,
    STATE(201), 1,
      sym_typing_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(10), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(20), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [726] = 21,
    ACTIONS(90), 1,
      sym_text,
    ACTIONS(93), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      anon_sym_DOLLAR,
    ACTIONS(104), 1,
      anon_sym_BSLASH,
    ACTIONS(107), 1,
      sym_command_group_start,
    ACTIONS(113), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(119), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(122), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(23), 1,
      sym_command_group,
    STATE(182), 1,
      sym_comment,
    STATE(188), 1,
      sym_metapost_start,
    STATE(198), 1,
      sym_typing_html_start,
    STATE(200), 1,
      sym_tikz_start,
    STATE(201), 1,
      sym_typing_start,
    ACTIONS(99), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(102), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(10), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(110), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(116), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(20), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [811] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym_command_group_start,
    ACTIONS(133), 1,
      sym_command_group_stop,
    ACTIONS(135), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(64), 1,
      sym_command_group,
    STATE(181), 1,
      sym_comment,
    STATE(186), 1,
      sym_metapost_start,
    STATE(189), 1,
      sym_typing_html_start,
    STATE(190), 1,
      sym_typing_start,
    STATE(191), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(15), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(33), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [895] = 21,
    ACTIONS(93), 1,
      aux_sym_comment_token1,
    ACTIONS(102), 1,
      sym_command_group_stop,
    ACTIONS(113), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(119), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(137), 1,
      sym_text,
    ACTIONS(140), 1,
      anon_sym_DOLLAR,
    ACTIONS(143), 1,
      anon_sym_BSLASH,
    ACTIONS(146), 1,
      sym_command_group_start,
    ACTIONS(149), 1,
      sym_command_name,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(64), 1,
      sym_command_group,
    STATE(181), 1,
      sym_comment,
    STATE(186), 1,
      sym_metapost_start,
    STATE(189), 1,
      sym_typing_html_start,
    STATE(190), 1,
      sym_typing_start,
    STATE(191), 1,
      sym_tikz_start,
    ACTIONS(99), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(12), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(110), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(116), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(33), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [979] = 21,
    ACTIONS(152), 1,
      sym_text,
    ACTIONS(155), 1,
      aux_sym_comment_token1,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    ACTIONS(167), 1,
      sym_command_group_start,
    ACTIONS(173), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(179), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(182), 1,
      sym_command_name,
    ACTIONS(185), 1,
      sym_paragraph_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(79), 1,
      sym_command_group,
    STATE(183), 1,
      sym_comment,
    STATE(187), 1,
      sym_typing_html_start,
    STATE(194), 1,
      sym_typing_start,
    STATE(202), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_tikz_start,
    ACTIONS(161), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(13), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(170), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(176), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(32), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1063] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym_command_group_start,
    ACTIONS(135), 1,
      sym_command_name,
    ACTIONS(187), 1,
      sym_command_group_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(64), 1,
      sym_command_group,
    STATE(181), 1,
      sym_comment,
    STATE(186), 1,
      sym_metapost_start,
    STATE(189), 1,
      sym_typing_html_start,
    STATE(190), 1,
      sym_typing_start,
    STATE(191), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(12), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(33), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1147] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym_command_group_start,
    ACTIONS(135), 1,
      sym_command_name,
    ACTIONS(189), 1,
      sym_command_group_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(64), 1,
      sym_command_group,
    STATE(181), 1,
      sym_comment,
    STATE(186), 1,
      sym_metapost_start,
    STATE(189), 1,
      sym_typing_html_start,
    STATE(190), 1,
      sym_typing_start,
    STATE(191), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(12), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(33), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1231] = 21,
    ACTIONS(9), 1,
      sym_text,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(17), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      sym_command_group_start,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(29), 1,
      sym_command_name,
    ACTIONS(191), 1,
      sym_paragraph_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(79), 1,
      sym_command_group,
    STATE(183), 1,
      sym_comment,
    STATE(187), 1,
      sym_typing_html_start,
    STATE(194), 1,
      sym_typing_start,
    STATE(202), 1,
      sym_metapost_start,
    STATE(204), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(13), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(32), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1315] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym_command_group_start,
    ACTIONS(135), 1,
      sym_command_name,
    ACTIONS(193), 1,
      sym_command_group_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(64), 1,
      sym_command_group,
    STATE(181), 1,
      sym_comment,
    STATE(186), 1,
      sym_metapost_start,
    STATE(189), 1,
      sym_typing_html_start,
    STATE(190), 1,
      sym_typing_start,
    STATE(191), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(19), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(33), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1399] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym_command_group_start,
    ACTIONS(135), 1,
      sym_command_name,
    ACTIONS(195), 1,
      sym_command_group_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(64), 1,
      sym_command_group,
    STATE(181), 1,
      sym_comment,
    STATE(186), 1,
      sym_metapost_start,
    STATE(189), 1,
      sym_typing_html_start,
    STATE(190), 1,
      sym_typing_start,
    STATE(191), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(14), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(33), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1483] = 21,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(127), 1,
      anon_sym_DOLLAR,
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym_command_group_start,
    ACTIONS(135), 1,
      sym_command_name,
    ACTIONS(197), 1,
      sym_command_group_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(64), 1,
      sym_command_group,
    STATE(181), 1,
      sym_comment,
    STATE(186), 1,
      sym_metapost_start,
    STATE(189), 1,
      sym_typing_html_start,
    STATE(190), 1,
      sym_typing_start,
    STATE(191), 1,
      sym_tikz_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(12), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(21), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(25), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(33), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1567] = 3,
    STATE(81), 1,
      sym__end_of_line,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(199), 25,
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
  [1603] = 1,
    ACTIONS(203), 28,
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
  [1634] = 1,
    ACTIONS(205), 28,
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
  [1665] = 4,
    ACTIONS(207), 1,
      sym_text,
    STATE(81), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(209), 2,
      sym_paragraph_stop,
      sym__eol,
    ACTIONS(199), 24,
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
  [1702] = 1,
    ACTIONS(211), 28,
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
  [1733] = 1,
    ACTIONS(213), 28,
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
  [1764] = 1,
    ACTIONS(215), 28,
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
  [1795] = 1,
    ACTIONS(217), 28,
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
  [1826] = 1,
    ACTIONS(219), 28,
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
  [1857] = 1,
    ACTIONS(221), 28,
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
  [1888] = 1,
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
  [1919] = 2,
    ACTIONS(225), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(227), 26,
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
  [1952] = 4,
    ACTIONS(233), 1,
      sym_paragraph_stop,
    STATE(86), 1,
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
  [1989] = 3,
    STATE(85), 1,
      sym__end_of_line,
    ACTIONS(235), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(199), 24,
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
  [2024] = 1,
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
  [2055] = 1,
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
  [2086] = 1,
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
  [2117] = 1,
    ACTIONS(243), 28,
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
  [2148] = 2,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(247), 26,
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
  [2181] = 2,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(251), 26,
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
  [2214] = 1,
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
  [2245] = 1,
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
  [2276] = 1,
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
  [2307] = 1,
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
  [2337] = 1,
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
  [2367] = 2,
    ACTIONS(259), 1,
      sym_paragraph_stop,
    ACTIONS(243), 26,
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
  [2399] = 2,
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
  [2431] = 2,
    ACTIONS(265), 1,
      sym_paragraph_stop,
    ACTIONS(205), 26,
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
  [2463] = 2,
    ACTIONS(267), 1,
      sym_paragraph_stop,
    ACTIONS(203), 26,
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
  [2495] = 2,
    ACTIONS(269), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(271), 24,
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
  [2527] = 1,
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
  [2557] = 1,
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
  [2587] = 1,
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
  [2617] = 1,
    ACTIONS(211), 27,
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
  [2647] = 2,
    ACTIONS(273), 1,
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
  [2679] = 1,
    ACTIONS(213), 27,
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
  [2709] = 2,
    ACTIONS(275), 1,
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
  [2741] = 1,
    ACTIONS(243), 27,
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
  [2771] = 1,
    ACTIONS(205), 27,
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
  [2801] = 1,
    ACTIONS(215), 27,
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
  [2831] = 1,
    ACTIONS(217), 27,
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
  [2861] = 1,
    ACTIONS(219), 27,
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
  [2891] = 1,
    ACTIONS(221), 27,
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
  [2921] = 1,
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
  [2951] = 4,
    ACTIONS(207), 1,
      sym_text,
    STATE(85), 1,
      sym__end_of_line_or_paragraph,
    ACTIONS(277), 2,
      sym_paragraph_stop,
      sym__eol,
    ACTIONS(199), 23,
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
  [2987] = 1,
    ACTIONS(203), 27,
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
  [3017] = 2,
    ACTIONS(279), 1,
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
  [3049] = 2,
    ACTIONS(281), 1,
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
  [3081] = 1,
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
  [3111] = 2,
    ACTIONS(283), 1,
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
  [3143] = 2,
    ACTIONS(285), 1,
      sym_paragraph_stop,
    ACTIONS(221), 26,
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
  [3175] = 2,
    ACTIONS(287), 1,
      sym_paragraph_stop,
    ACTIONS(219), 26,
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
  [3207] = 2,
    ACTIONS(289), 1,
      sym_paragraph_stop,
    ACTIONS(217), 26,
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
  [3239] = 2,
    ACTIONS(291), 1,
      sym_paragraph_stop,
    ACTIONS(215), 26,
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
  [3271] = 2,
    ACTIONS(293), 1,
      sym_paragraph_stop,
    ACTIONS(213), 26,
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
  [3303] = 2,
    ACTIONS(295), 1,
      sym_paragraph_stop,
    ACTIONS(211), 26,
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
  [3335] = 2,
    ACTIONS(297), 1,
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
  [3367] = 2,
    ACTIONS(299), 1,
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
  [3399] = 2,
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
  [3430] = 4,
    ACTIONS(301), 1,
      sym__eol,
    STATE(86), 1,
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
  [3465] = 2,
    ACTIONS(269), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(271), 23,
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
  [3496] = 2,
    ACTIONS(303), 1,
      sym_text,
    ACTIONS(305), 24,
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
  [3526] = 2,
    ACTIONS(307), 1,
      sym_text,
    ACTIONS(309), 24,
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
  [3556] = 2,
    ACTIONS(269), 3,
      sym_paragraph_stop,
      sym__eol,
      sym_text,
    ACTIONS(271), 22,
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
  [3586] = 2,
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
  [3616] = 2,
    ACTIONS(303), 1,
      sym_text,
    ACTIONS(305), 23,
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
  [3645] = 2,
    ACTIONS(311), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(313), 22,
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
  [3674] = 8,
    ACTIONS(318), 1,
      aux_sym_comment_token1,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
    ACTIONS(326), 1,
      anon_sym_BSLASH,
    ACTIONS(329), 1,
      sym_command_name,
    ACTIONS(332), 1,
      aux_sym_title_text_token1,
    ACTIONS(315), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(324), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(87), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3710] = 8,
    ACTIONS(338), 1,
      aux_sym_comment_token1,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    ACTIONS(346), 1,
      anon_sym_BSLASH,
    ACTIONS(349), 1,
      sym_command_name,
    ACTIONS(352), 1,
      aux_sym_title_text_token1,
    ACTIONS(335), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(344), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(88), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3746] = 9,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      sym_command_name,
    ACTIONS(365), 1,
      aux_sym_title_text_token1,
    STATE(173), 1,
      sym_title_value,
    ACTIONS(363), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(355), 3,
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
  [3784] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      sym_command_name,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      aux_sym_title_text_token1,
    ACTIONS(371), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(367), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(87), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3819] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      sym_command_name,
    ACTIONS(365), 1,
      aux_sym_title_text_token1,
    ACTIONS(377), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(375), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(88), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3854] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      sym_command_name,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      aux_sym_title_text_token1,
    STATE(175), 1,
      sym_value,
    ACTIONS(379), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(90), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3888] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      sym_command_name,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      aux_sym_title_text_token1,
    ACTIONS(381), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(87), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3922] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      sym_command_name,
    ACTIONS(365), 1,
      aux_sym_title_text_token1,
    ACTIONS(385), 1,
      anon_sym_RBRACE,
    ACTIONS(383), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(95), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3956] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      sym_command_name,
    ACTIONS(365), 1,
      aux_sym_title_text_token1,
    ACTIONS(387), 1,
      anon_sym_RBRACE,
    ACTIONS(375), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(88), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3990] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(359), 1,
      anon_sym_BSLASH,
    ACTIONS(361), 1,
      sym_command_name,
    ACTIONS(369), 1,
      anon_sym_LBRACE,
    ACTIONS(373), 1,
      aux_sym_title_text_token1,
    ACTIONS(391), 1,
      anon_sym_RBRACE,
    ACTIONS(389), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(93), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [4024] = 2,
    STATE(154), 1,
      sym_escapechar,
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
  [4041] = 2,
    STATE(110), 1,
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
  [4058] = 2,
    STATE(66), 1,
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
  [4075] = 9,
    ACTIONS(401), 1,
      sym_command_block_stop,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      aux_sym_keyword_token1,
    ACTIONS(407), 1,
      anon_sym_title,
    STATE(147), 1,
      sym_keyword,
    STATE(213), 1,
      sym_key,
    STATE(214), 1,
      sym__end_of_line,
    STATE(139), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(399), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4106] = 2,
    STATE(34), 1,
      sym_escapechar,
    ACTIONS(409), 11,
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
  [4123] = 2,
    STATE(50), 1,
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
  [4140] = 5,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_command_block_start,
    ACTIONS(419), 1,
      sym_command_stop,
    ACTIONS(413), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(106), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4162] = 6,
    ACTIONS(421), 1,
      aux_sym_comment_token1,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_BSLASH,
    ACTIONS(432), 1,
      sym_math_text,
    ACTIONS(424), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4186] = 5,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_command_block_start,
    ACTIONS(437), 1,
      sym_command_stop,
    ACTIONS(435), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4208] = 5,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_command_block_start,
    ACTIONS(439), 1,
      sym_command_stop,
    ACTIONS(435), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4230] = 5,
    ACTIONS(444), 1,
      aux_sym_comment_token1,
    ACTIONS(447), 1,
      sym_command_block_start,
    ACTIONS(450), 1,
      sym_command_stop,
    ACTIONS(441), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4252] = 1,
    ACTIONS(243), 11,
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
  [4266] = 5,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_command_block_start,
    ACTIONS(452), 1,
      sym_command_stop,
    ACTIONS(435), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4288] = 1,
    ACTIONS(237), 11,
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
  [4302] = 1,
    ACTIONS(454), 11,
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
  [4316] = 1,
    ACTIONS(456), 11,
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
  [4330] = 1,
    ACTIONS(458), 11,
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
  [4344] = 1,
    ACTIONS(460), 11,
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
  [4358] = 5,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_command_block_start,
    ACTIONS(464), 1,
      sym_command_stop,
    ACTIONS(462), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(122), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4380] = 1,
    ACTIONS(241), 11,
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
  [4394] = 1,
    ACTIONS(466), 11,
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
  [4408] = 5,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_command_block_start,
    ACTIONS(470), 1,
      sym_command_stop,
    ACTIONS(468), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(105), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4430] = 5,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_command_block_start,
    ACTIONS(474), 1,
      sym_command_stop,
    ACTIONS(472), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(109), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4452] = 1,
    ACTIONS(476), 11,
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
  [4466] = 1,
    ACTIONS(478), 11,
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
  [4480] = 5,
    ACTIONS(415), 1,
      aux_sym_comment_token1,
    ACTIONS(417), 1,
      sym_command_block_start,
    ACTIONS(480), 1,
      sym_command_stop,
    ACTIONS(435), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(107), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [4502] = 1,
    ACTIONS(239), 11,
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
  [4516] = 7,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(484), 1,
      sym_command_block_stop,
    ACTIONS(486), 1,
      aux_sym_keyword_token1,
    STATE(171), 1,
      sym__end_of_line,
    STATE(213), 1,
      sym_key,
    STATE(174), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(482), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4541] = 6,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(496), 1,
      sym_math_text,
    STATE(129), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4564] = 7,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(486), 1,
      aux_sym_keyword_token1,
    ACTIONS(500), 1,
      sym_command_block_stop,
    STATE(151), 1,
      sym__end_of_line,
    STATE(213), 1,
      sym_key,
    STATE(174), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(498), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4589] = 6,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(502), 1,
      anon_sym_DOLLAR,
    ACTIONS(504), 1,
      sym_math_text,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4612] = 6,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      sym_math_text,
    ACTIONS(506), 1,
      anon_sym_DOLLAR,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4635] = 6,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      sym_math_text,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4658] = 6,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(504), 1,
      sym_math_text,
    ACTIONS(510), 1,
      anon_sym_DOLLAR,
    STATE(104), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4681] = 5,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(512), 1,
      sym_math_text,
    STATE(127), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4701] = 5,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(514), 1,
      sym_math_text,
    STATE(128), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4721] = 5,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
    ACTIONS(494), 1,
      anon_sym_BSLASH,
    ACTIONS(516), 1,
      sym_math_text,
    STATE(130), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4741] = 6,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(486), 1,
      aux_sym_keyword_token1,
    STATE(177), 1,
      sym__end_of_line,
    STATE(213), 1,
      sym_key,
    STATE(174), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(518), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4763] = 2,
    STATE(75), 1,
      sym_typing_stop,
    ACTIONS(520), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4776] = 2,
    STATE(24), 1,
      sym_typing_stop,
    ACTIONS(522), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4789] = 2,
    STATE(53), 1,
      sym_typing_stop,
    ACTIONS(524), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4802] = 2,
    STATE(28), 1,
      sym_metapost_stop,
    ACTIONS(526), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4814] = 5,
    ACTIONS(530), 1,
      sym_command_block_stop,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_settings_block_repeat1,
    STATE(218), 1,
      sym__end_of_line,
    ACTIONS(528), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4832] = 5,
    ACTIONS(536), 1,
      sym_command_block_stop,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_option_block_repeat1,
    STATE(208), 1,
      sym__end_of_line,
    ACTIONS(534), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4850] = 5,
    ACTIONS(536), 1,
      sym_command_block_stop,
    ACTIONS(542), 1,
      aux_sym_keyword_token1,
    STATE(178), 1,
      sym_keyword,
    STATE(185), 1,
      sym__end_of_line,
    ACTIONS(540), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4868] = 5,
    ACTIONS(500), 1,
      sym_command_block_stop,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_settings_block_repeat1,
    STATE(206), 1,
      sym__end_of_line,
    ACTIONS(544), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4886] = 2,
    STATE(61), 1,
      sym_metapost_stop,
    ACTIONS(548), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4898] = 5,
    ACTIONS(542), 1,
      aux_sym_keyword_token1,
    ACTIONS(552), 1,
      sym_command_block_stop,
    STATE(178), 1,
      sym_keyword,
    STATE(184), 1,
      sym__end_of_line,
    ACTIONS(550), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4916] = 2,
    STATE(71), 1,
      sym_metapost_stop,
    ACTIONS(554), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4928] = 1,
    ACTIONS(556), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4938] = 5,
    ACTIONS(560), 1,
      sym_command_block_stop,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_option_block_repeat1,
    STATE(211), 1,
      sym__end_of_line,
    ACTIONS(558), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4956] = 1,
    ACTIONS(239), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4965] = 2,
    ACTIONS(566), 1,
      sym_command_stop,
    ACTIONS(564), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4976] = 2,
    ACTIONS(570), 1,
      sym_command_stop,
    ACTIONS(568), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4987] = 5,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(486), 1,
      aux_sym_keyword_token1,
    ACTIONS(572), 1,
      sym_command_block_stop,
    STATE(213), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [5004] = 2,
    ACTIONS(576), 1,
      anon_sym_EQ,
    ACTIONS(574), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5015] = 2,
    ACTIONS(580), 1,
      sym_command_stop,
    ACTIONS(578), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5026] = 1,
    ACTIONS(237), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5035] = 2,
    ACTIONS(584), 1,
      sym_command_stop,
    ACTIONS(582), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5046] = 1,
    ACTIONS(586), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5055] = 2,
    ACTIONS(588), 1,
      sym_command_stop,
    ACTIONS(456), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5066] = 1,
    ACTIONS(456), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5075] = 4,
    ACTIONS(542), 1,
      aux_sym_keyword_token1,
    STATE(178), 1,
      sym_keyword,
    STATE(199), 1,
      sym__end_of_line,
    ACTIONS(590), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5090] = 3,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(592), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5103] = 1,
    ACTIONS(597), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [5112] = 2,
    ACTIONS(601), 1,
      sym_command_stop,
    ACTIONS(599), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5123] = 3,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(603), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [5136] = 2,
    ACTIONS(610), 1,
      sym_command_stop,
    ACTIONS(608), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5147] = 2,
    ACTIONS(614), 1,
      sym_command_stop,
    ACTIONS(612), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5158] = 1,
    ACTIONS(616), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [5167] = 2,
    ACTIONS(620), 1,
      sym_command_stop,
    ACTIONS(618), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5178] = 2,
    ACTIONS(624), 1,
      sym_command_stop,
    ACTIONS(622), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5189] = 2,
    ACTIONS(601), 1,
      sym_command_stop,
    ACTIONS(599), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5200] = 2,
    ACTIONS(610), 1,
      sym_command_stop,
    ACTIONS(608), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [5211] = 5,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(486), 1,
      aux_sym_keyword_token1,
    ACTIONS(626), 1,
      sym_command_block_stop,
    STATE(213), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [5228] = 1,
    ACTIONS(628), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5236] = 1,
    ACTIONS(630), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5244] = 1,
    ACTIONS(592), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5252] = 1,
    ACTIONS(632), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5260] = 1,
    ACTIONS(634), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5268] = 4,
    ACTIONS(407), 1,
      anon_sym_title,
    ACTIONS(486), 1,
      aux_sym_keyword_token1,
    STATE(213), 1,
      sym_key,
    STATE(176), 2,
      sym_setting,
      sym_title_setting,
  [5282] = 1,
    ACTIONS(603), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5290] = 1,
    ACTIONS(574), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5298] = 3,
    ACTIONS(638), 1,
      sym_command_block_stop,
    STATE(212), 1,
      sym__end_of_line,
    ACTIONS(636), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5310] = 2,
    STATE(85), 1,
      sym__end_of_line,
    ACTIONS(235), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5319] = 2,
    STATE(81), 1,
      sym__end_of_line,
    ACTIONS(201), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5328] = 2,
    STATE(86), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [5337] = 3,
    ACTIONS(640), 1,
      sym_command_block_stop,
    ACTIONS(642), 1,
      aux_sym_keyword_token1,
    STATE(172), 1,
      sym_keyword,
  [5347] = 3,
    ACTIONS(642), 1,
      aux_sym_keyword_token1,
    ACTIONS(644), 1,
      sym_command_block_stop,
    STATE(172), 1,
      sym_keyword,
  [5357] = 2,
    ACTIONS(646), 1,
      aux_sym_metapost_body_token1,
    STATE(143), 1,
      sym_metapost_body,
  [5364] = 2,
    ACTIONS(648), 1,
      aux_sym_metapost_body_token1,
    STATE(197), 1,
      sym_typing_html_body,
  [5371] = 2,
    ACTIONS(646), 1,
      aux_sym_metapost_body_token1,
    STATE(138), 1,
      sym_metapost_body,
  [5378] = 2,
    ACTIONS(648), 1,
      aux_sym_metapost_body_token1,
    STATE(195), 1,
      sym_typing_html_body,
  [5385] = 2,
    ACTIONS(650), 1,
      aux_sym_metapost_body_token1,
    STATE(137), 1,
      sym_typing_body,
  [5392] = 2,
    ACTIONS(652), 1,
      aux_sym_metapost_body_token1,
    STATE(193), 1,
      sym_tikz_body,
  [5399] = 2,
    ACTIONS(654), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(73), 1,
      sym_tikz_stop,
  [5406] = 2,
    ACTIONS(656), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(59), 1,
      sym_tikz_stop,
  [5413] = 2,
    ACTIONS(650), 1,
      aux_sym_metapost_body_token1,
    STATE(135), 1,
      sym_typing_body,
  [5420] = 2,
    ACTIONS(658), 1,
      anon_sym_BSLASHstopHTML,
    STATE(52), 1,
      sym_typing_html_stop,
  [5427] = 2,
    ACTIONS(660), 1,
      anon_sym_BSLASHstopHTML,
    STATE(41), 1,
      sym_typing_html_stop,
  [5434] = 2,
    ACTIONS(662), 1,
      anon_sym_BSLASHstopHTML,
    STATE(77), 1,
      sym_typing_html_stop,
  [5441] = 2,
    ACTIONS(648), 1,
      aux_sym_metapost_body_token1,
    STATE(196), 1,
      sym_typing_html_body,
  [5448] = 2,
    ACTIONS(642), 1,
      aux_sym_keyword_token1,
    STATE(172), 1,
      sym_keyword,
  [5455] = 2,
    ACTIONS(652), 1,
      aux_sym_metapost_body_token1,
    STATE(203), 1,
      sym_tikz_body,
  [5462] = 2,
    ACTIONS(650), 1,
      aux_sym_metapost_body_token1,
    STATE(136), 1,
      sym_typing_body,
  [5469] = 2,
    ACTIONS(646), 1,
      aux_sym_metapost_body_token1,
    STATE(145), 1,
      sym_metapost_body,
  [5476] = 2,
    ACTIONS(664), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(26), 1,
      sym_tikz_stop,
  [5483] = 2,
    ACTIONS(652), 1,
      aux_sym_metapost_body_token1,
    STATE(192), 1,
      sym_tikz_body,
  [5490] = 1,
    ACTIONS(666), 1,
      aux_sym_metapost_body_token1,
  [5494] = 1,
    ACTIONS(572), 1,
      sym_command_block_stop,
  [5498] = 1,
    ACTIONS(668), 1,
      anon_sym_EQ,
  [5502] = 1,
    ACTIONS(644), 1,
      sym_command_block_stop,
  [5506] = 1,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
  [5510] = 1,
    ACTIONS(672), 1,
      aux_sym_metapost_body_token1,
  [5514] = 1,
    ACTIONS(674), 1,
      sym_command_block_stop,
  [5518] = 1,
    ACTIONS(676), 1,
      sym_command_block_stop,
  [5522] = 1,
    ACTIONS(678), 1,
      anon_sym_EQ,
  [5526] = 1,
    ACTIONS(680), 1,
      sym_command_block_stop,
  [5530] = 1,
    ACTIONS(682), 1,
      aux_sym_metapost_body_token1,
  [5534] = 1,
    ACTIONS(684), 1,
      anon_sym_EQ,
  [5538] = 1,
    ACTIONS(686), 1,
      aux_sym_metapost_body_token1,
  [5542] = 1,
    ACTIONS(688), 1,
      sym_command_block_stop,
  [5546] = 1,
    ACTIONS(690), 1,
      anon_sym_BSLASHstopHTML,
  [5550] = 1,
    ACTIONS(692), 1,
      anon_sym_BSLASHstoptikzpicture,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 198,
  [SMALL_STATE(5)] = 286,
  [SMALL_STATE(6)] = 374,
  [SMALL_STATE(7)] = 462,
  [SMALL_STATE(8)] = 550,
  [SMALL_STATE(9)] = 638,
  [SMALL_STATE(10)] = 726,
  [SMALL_STATE(11)] = 811,
  [SMALL_STATE(12)] = 895,
  [SMALL_STATE(13)] = 979,
  [SMALL_STATE(14)] = 1063,
  [SMALL_STATE(15)] = 1147,
  [SMALL_STATE(16)] = 1231,
  [SMALL_STATE(17)] = 1315,
  [SMALL_STATE(18)] = 1399,
  [SMALL_STATE(19)] = 1483,
  [SMALL_STATE(20)] = 1567,
  [SMALL_STATE(21)] = 1603,
  [SMALL_STATE(22)] = 1634,
  [SMALL_STATE(23)] = 1665,
  [SMALL_STATE(24)] = 1702,
  [SMALL_STATE(25)] = 1733,
  [SMALL_STATE(26)] = 1764,
  [SMALL_STATE(27)] = 1795,
  [SMALL_STATE(28)] = 1826,
  [SMALL_STATE(29)] = 1857,
  [SMALL_STATE(30)] = 1888,
  [SMALL_STATE(31)] = 1919,
  [SMALL_STATE(32)] = 1952,
  [SMALL_STATE(33)] = 1989,
  [SMALL_STATE(34)] = 2024,
  [SMALL_STATE(35)] = 2055,
  [SMALL_STATE(36)] = 2086,
  [SMALL_STATE(37)] = 2117,
  [SMALL_STATE(38)] = 2148,
  [SMALL_STATE(39)] = 2181,
  [SMALL_STATE(40)] = 2214,
  [SMALL_STATE(41)] = 2245,
  [SMALL_STATE(42)] = 2276,
  [SMALL_STATE(43)] = 2307,
  [SMALL_STATE(44)] = 2337,
  [SMALL_STATE(45)] = 2367,
  [SMALL_STATE(46)] = 2399,
  [SMALL_STATE(47)] = 2431,
  [SMALL_STATE(48)] = 2463,
  [SMALL_STATE(49)] = 2495,
  [SMALL_STATE(50)] = 2527,
  [SMALL_STATE(51)] = 2557,
  [SMALL_STATE(52)] = 2587,
  [SMALL_STATE(53)] = 2617,
  [SMALL_STATE(54)] = 2647,
  [SMALL_STATE(55)] = 2679,
  [SMALL_STATE(56)] = 2709,
  [SMALL_STATE(57)] = 2741,
  [SMALL_STATE(58)] = 2771,
  [SMALL_STATE(59)] = 2801,
  [SMALL_STATE(60)] = 2831,
  [SMALL_STATE(61)] = 2861,
  [SMALL_STATE(62)] = 2891,
  [SMALL_STATE(63)] = 2921,
  [SMALL_STATE(64)] = 2951,
  [SMALL_STATE(65)] = 2987,
  [SMALL_STATE(66)] = 3017,
  [SMALL_STATE(67)] = 3049,
  [SMALL_STATE(68)] = 3081,
  [SMALL_STATE(69)] = 3111,
  [SMALL_STATE(70)] = 3143,
  [SMALL_STATE(71)] = 3175,
  [SMALL_STATE(72)] = 3207,
  [SMALL_STATE(73)] = 3239,
  [SMALL_STATE(74)] = 3271,
  [SMALL_STATE(75)] = 3303,
  [SMALL_STATE(76)] = 3335,
  [SMALL_STATE(77)] = 3367,
  [SMALL_STATE(78)] = 3399,
  [SMALL_STATE(79)] = 3430,
  [SMALL_STATE(80)] = 3465,
  [SMALL_STATE(81)] = 3496,
  [SMALL_STATE(82)] = 3526,
  [SMALL_STATE(83)] = 3556,
  [SMALL_STATE(84)] = 3586,
  [SMALL_STATE(85)] = 3616,
  [SMALL_STATE(86)] = 3645,
  [SMALL_STATE(87)] = 3674,
  [SMALL_STATE(88)] = 3710,
  [SMALL_STATE(89)] = 3746,
  [SMALL_STATE(90)] = 3784,
  [SMALL_STATE(91)] = 3819,
  [SMALL_STATE(92)] = 3854,
  [SMALL_STATE(93)] = 3888,
  [SMALL_STATE(94)] = 3922,
  [SMALL_STATE(95)] = 3956,
  [SMALL_STATE(96)] = 3990,
  [SMALL_STATE(97)] = 4024,
  [SMALL_STATE(98)] = 4041,
  [SMALL_STATE(99)] = 4058,
  [SMALL_STATE(100)] = 4075,
  [SMALL_STATE(101)] = 4106,
  [SMALL_STATE(102)] = 4123,
  [SMALL_STATE(103)] = 4140,
  [SMALL_STATE(104)] = 4162,
  [SMALL_STATE(105)] = 4186,
  [SMALL_STATE(106)] = 4208,
  [SMALL_STATE(107)] = 4230,
  [SMALL_STATE(108)] = 4252,
  [SMALL_STATE(109)] = 4266,
  [SMALL_STATE(110)] = 4288,
  [SMALL_STATE(111)] = 4302,
  [SMALL_STATE(112)] = 4316,
  [SMALL_STATE(113)] = 4330,
  [SMALL_STATE(114)] = 4344,
  [SMALL_STATE(115)] = 4358,
  [SMALL_STATE(116)] = 4380,
  [SMALL_STATE(117)] = 4394,
  [SMALL_STATE(118)] = 4408,
  [SMALL_STATE(119)] = 4430,
  [SMALL_STATE(120)] = 4452,
  [SMALL_STATE(121)] = 4466,
  [SMALL_STATE(122)] = 4480,
  [SMALL_STATE(123)] = 4502,
  [SMALL_STATE(124)] = 4516,
  [SMALL_STATE(125)] = 4541,
  [SMALL_STATE(126)] = 4564,
  [SMALL_STATE(127)] = 4589,
  [SMALL_STATE(128)] = 4612,
  [SMALL_STATE(129)] = 4635,
  [SMALL_STATE(130)] = 4658,
  [SMALL_STATE(131)] = 4681,
  [SMALL_STATE(132)] = 4701,
  [SMALL_STATE(133)] = 4721,
  [SMALL_STATE(134)] = 4741,
  [SMALL_STATE(135)] = 4763,
  [SMALL_STATE(136)] = 4776,
  [SMALL_STATE(137)] = 4789,
  [SMALL_STATE(138)] = 4802,
  [SMALL_STATE(139)] = 4814,
  [SMALL_STATE(140)] = 4832,
  [SMALL_STATE(141)] = 4850,
  [SMALL_STATE(142)] = 4868,
  [SMALL_STATE(143)] = 4886,
  [SMALL_STATE(144)] = 4898,
  [SMALL_STATE(145)] = 4916,
  [SMALL_STATE(146)] = 4928,
  [SMALL_STATE(147)] = 4938,
  [SMALL_STATE(148)] = 4956,
  [SMALL_STATE(149)] = 4965,
  [SMALL_STATE(150)] = 4976,
  [SMALL_STATE(151)] = 4987,
  [SMALL_STATE(152)] = 5004,
  [SMALL_STATE(153)] = 5015,
  [SMALL_STATE(154)] = 5026,
  [SMALL_STATE(155)] = 5035,
  [SMALL_STATE(156)] = 5046,
  [SMALL_STATE(157)] = 5055,
  [SMALL_STATE(158)] = 5066,
  [SMALL_STATE(159)] = 5075,
  [SMALL_STATE(160)] = 5090,
  [SMALL_STATE(161)] = 5103,
  [SMALL_STATE(162)] = 5112,
  [SMALL_STATE(163)] = 5123,
  [SMALL_STATE(164)] = 5136,
  [SMALL_STATE(165)] = 5147,
  [SMALL_STATE(166)] = 5158,
  [SMALL_STATE(167)] = 5167,
  [SMALL_STATE(168)] = 5178,
  [SMALL_STATE(169)] = 5189,
  [SMALL_STATE(170)] = 5200,
  [SMALL_STATE(171)] = 5211,
  [SMALL_STATE(172)] = 5228,
  [SMALL_STATE(173)] = 5236,
  [SMALL_STATE(174)] = 5244,
  [SMALL_STATE(175)] = 5252,
  [SMALL_STATE(176)] = 5260,
  [SMALL_STATE(177)] = 5268,
  [SMALL_STATE(178)] = 5282,
  [SMALL_STATE(179)] = 5290,
  [SMALL_STATE(180)] = 5298,
  [SMALL_STATE(181)] = 5310,
  [SMALL_STATE(182)] = 5319,
  [SMALL_STATE(183)] = 5328,
  [SMALL_STATE(184)] = 5337,
  [SMALL_STATE(185)] = 5347,
  [SMALL_STATE(186)] = 5357,
  [SMALL_STATE(187)] = 5364,
  [SMALL_STATE(188)] = 5371,
  [SMALL_STATE(189)] = 5378,
  [SMALL_STATE(190)] = 5385,
  [SMALL_STATE(191)] = 5392,
  [SMALL_STATE(192)] = 5399,
  [SMALL_STATE(193)] = 5406,
  [SMALL_STATE(194)] = 5413,
  [SMALL_STATE(195)] = 5420,
  [SMALL_STATE(196)] = 5427,
  [SMALL_STATE(197)] = 5434,
  [SMALL_STATE(198)] = 5441,
  [SMALL_STATE(199)] = 5448,
  [SMALL_STATE(200)] = 5455,
  [SMALL_STATE(201)] = 5462,
  [SMALL_STATE(202)] = 5469,
  [SMALL_STATE(203)] = 5476,
  [SMALL_STATE(204)] = 5483,
  [SMALL_STATE(205)] = 5490,
  [SMALL_STATE(206)] = 5494,
  [SMALL_STATE(207)] = 5498,
  [SMALL_STATE(208)] = 5502,
  [SMALL_STATE(209)] = 5506,
  [SMALL_STATE(210)] = 5510,
  [SMALL_STATE(211)] = 5514,
  [SMALL_STATE(212)] = 5518,
  [SMALL_STATE(213)] = 5522,
  [SMALL_STATE(214)] = 5526,
  [SMALL_STATE(215)] = 5530,
  [SMALL_STATE(216)] = 5534,
  [SMALL_STATE(217)] = 5538,
  [SMALL_STATE(218)] = 5542,
  [SMALL_STATE(219)] = 5546,
  [SMALL_STATE(220)] = 5550,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(32),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(112),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(131),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(99),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(210),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(215),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(217),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(205),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(20),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(112),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(132),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(82),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(101),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(18),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(210),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(215),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(217),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(205),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(119),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(33),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(133),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(102),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(11),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(103),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(32),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(112),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(131),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(82),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(99),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(17),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(210),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(215),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(217),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(205),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(115),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_start, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(87),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(112),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(96),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(98),
  [329] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(118),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(111),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(88),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(112),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(94),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(98),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(118),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(121),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [421] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(158),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(125),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(97),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(104),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(107),
  [444] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(157),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(100),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [542] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [544] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(134),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [605] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(159),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [670] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
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
