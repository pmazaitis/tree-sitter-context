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
#define STATE_COUNT 210
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
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
  sym_document = 67,
  sym__document_content = 68,
  sym_main_start = 69,
  sym_main_stop = 70,
  sym_paragraph = 71,
  sym__paragraph_content = 72,
  sym__end_of_line = 73,
  sym_comment = 74,
  sym_escapechar = 75,
  sym_escaped = 76,
  sym_brace_group_start = 77,
  sym_brace_group_stop = 78,
  sym__group_content = 79,
  sym_brace_group = 80,
  sym_command_group = 81,
  sym_math_group = 82,
  sym__math_content = 83,
  sym_inline_math = 84,
  sym_metapost_start = 85,
  sym_metapost_stop = 86,
  sym_metapost_body = 87,
  sym_metapost_inclusion = 88,
  sym_tikz_start = 89,
  sym_tikz_stop = 90,
  sym_tikz_body = 91,
  sym_tikz_inclusion = 92,
  sym_typing_start = 93,
  sym_typing_stop = 94,
  sym_typing_body = 95,
  sym_typing_inclusion = 96,
  sym_typing_html_start = 97,
  sym_typing_html_stop = 98,
  sym_typing_html_body = 99,
  sym_typing_html_inclusion = 100,
  sym_option_block = 101,
  sym_keyword = 102,
  sym_settings_block = 103,
  sym_setting = 104,
  sym_title_setting = 105,
  sym_title_value = 106,
  sym__title_content = 107,
  sym_title_brace_group = 108,
  sym_title_text = 109,
  sym_key = 110,
  sym_value = 111,
  sym__value_content = 112,
  sym_value_text = 113,
  sym_value_brace_group = 114,
  sym_command = 115,
  aux_sym_document_repeat1 = 116,
  aux_sym_paragraph_repeat1 = 117,
  aux_sym_brace_group_repeat1 = 118,
  aux_sym_math_group_repeat1 = 119,
  aux_sym_option_block_repeat1 = 120,
  aux_sym_settings_block_repeat1 = 121,
  aux_sym_title_value_repeat1 = 122,
  aux_sym_value_repeat1 = 123,
  aux_sym_command_repeat1 = 124,
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
  [sym_document] = "document",
  [sym__document_content] = "_document_content",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
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
  [sym_document] = sym_document,
  [sym__document_content] = sym__document_content,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
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
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '\\') ADVANCE(149);
      if (lookahead == ']') ADVANCE(342);
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
      if (lookahead == '[') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == '%') ADVANCE(135);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == ']') ADVANCE(342);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '}') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(352);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == ',') ADVANCE(343);
      if (lookahead == '=') ADVANCE(349);
      if (lookahead == ']') ADVANCE(342);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(348);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\r') ADVANCE(134);
      if (lookahead == ']') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(348);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(10)
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
      if (lookahead == ']') ADVANCE(342);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(348);
      END_STATE();
    case 45:
      if (lookahead == ']') ADVANCE(342);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(348);
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
      if (lookahead == 'e') ADVANCE(350);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
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
      if (lookahead == '\n') ADVANCE(352);
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
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 's') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead == 's') ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 's') ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 's') ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 's') ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == 'i') ADVANCE(276);
      if (lookahead == 'p') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(215);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(179);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'H') ADVANCE(219);
      if (lookahead == 'L') ADVANCE(220);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == 'X') ADVANCE(205);
      if (lookahead == 'c') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 't') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'H') ADVANCE(219);
      if (lookahead == 'L') ADVANCE(220);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == 'X') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(217);
      if (lookahead == 'H') ADVANCE(219);
      if (lookahead == 'L') ADVANCE(220);
      if (lookahead == 'M') ADVANCE(211);
      if (lookahead == 'P') ADVANCE(194);
      if (lookahead == 'T') ADVANCE(200);
      if (lookahead == 'X') ADVANCE(205);
      if (lookahead == 'r') ADVANCE(247);
      if (lookahead == 's') ADVANCE(317);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == 'u') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == 't') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(284);
      if (lookahead == 't') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'y') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'y') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(348);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(348);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(348);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(348);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(348);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(352);
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
  [7] = {.lex_state = 2, .external_lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2, .external_lex_state = 2},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 122},
  [18] = {.lex_state = 122},
  [19] = {.lex_state = 3, .external_lex_state = 2},
  [20] = {.lex_state = 122},
  [21] = {.lex_state = 3, .external_lex_state = 2},
  [22] = {.lex_state = 3, .external_lex_state = 2},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 3, .external_lex_state = 2},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 3, .external_lex_state = 2},
  [31] = {.lex_state = 3, .external_lex_state = 2},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 3, .external_lex_state = 2},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 3, .external_lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 3, .external_lex_state = 2},
  [39] = {.lex_state = 3, .external_lex_state = 2},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 3, .external_lex_state = 2},
  [46] = {.lex_state = 3, .external_lex_state = 2},
  [47] = {.lex_state = 3, .external_lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 3, .external_lex_state = 2},
  [51] = {.lex_state = 3, .external_lex_state = 2},
  [52] = {.lex_state = 3, .external_lex_state = 2},
  [53] = {.lex_state = 3, .external_lex_state = 2},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
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
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 2, .external_lex_state = 2},
  [72] = {.lex_state = 2, .external_lex_state = 2},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 2, .external_lex_state = 2},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 12},
  [93] = {.lex_state = 6, .external_lex_state = 3},
  [94] = {.lex_state = 6, .external_lex_state = 3},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 6, .external_lex_state = 3},
  [97] = {.lex_state = 6, .external_lex_state = 3},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 6, .external_lex_state = 3},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 6, .external_lex_state = 3},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 6, .external_lex_state = 3},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 6, .external_lex_state = 3},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 6, .external_lex_state = 3},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 12},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 42},
  [125] = {.lex_state = 42},
  [126] = {.lex_state = 42},
  [127] = {.lex_state = 43},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 9},
  [131] = {.lex_state = 43},
  [132] = {.lex_state = 42},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 43},
  [135] = {.lex_state = 9},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 6, .external_lex_state = 3},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 6, .external_lex_state = 3},
  [141] = {.lex_state = 44},
  [142] = {.lex_state = 6, .external_lex_state = 3},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 6, .external_lex_state = 3},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 6, .external_lex_state = 3},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 6, .external_lex_state = 3},
  [149] = {.lex_state = 8},
  [150] = {.lex_state = 6, .external_lex_state = 3},
  [151] = {.lex_state = 6, .external_lex_state = 3},
  [152] = {.lex_state = 6, .external_lex_state = 3},
  [153] = {.lex_state = 6, .external_lex_state = 3},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 6, .external_lex_state = 3},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 43},
  [159] = {.lex_state = 6, .external_lex_state = 3},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 44},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 42},
  [176] = {.lex_state = 42},
  [177] = {.lex_state = 174},
  [178] = {.lex_state = 174},
  [179] = {.lex_state = 174},
  [180] = {.lex_state = 174},
  [181] = {.lex_state = 174},
  [182] = {.lex_state = 174},
  [183] = {.lex_state = 174},
  [184] = {.lex_state = 42},
  [185] = {.lex_state = 45},
  [186] = {.lex_state = 42},
  [187] = {.lex_state = 174},
  [188] = {.lex_state = 174},
  [189] = {.lex_state = 174},
  [190] = {.lex_state = 174},
  [191] = {.lex_state = 42},
  [192] = {.lex_state = 174},
  [193] = {.lex_state = 42},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 42},
  [196] = {.lex_state = 174},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 42},
  [204] = {.lex_state = 174},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 174},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 174},
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
    [sym_document] = STATE(201),
    [sym__document_content] = STATE(2),
    [sym_main_start] = STATE(2),
    [sym_main_stop] = STATE(2),
    [sym_paragraph] = STATE(2),
    [sym__paragraph_content] = STATE(9),
    [sym_comment] = STATE(172),
    [sym_escaped] = STATE(19),
    [sym_brace_group_start] = STATE(8),
    [sym_brace_group] = STATE(19),
    [sym_command_group] = STATE(9),
    [sym_inline_math] = STATE(19),
    [sym_metapost_start] = STATE(178),
    [sym_metapost_inclusion] = STATE(19),
    [sym_tikz_start] = STATE(180),
    [sym_tikz_inclusion] = STATE(19),
    [sym_typing_start] = STATE(181),
    [sym_typing_inclusion] = STATE(19),
    [sym_typing_html_start] = STATE(182),
    [sym_typing_html_inclusion] = STATE(19),
    [sym_command] = STATE(19),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_paragraph_repeat1] = STATE(9),
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
  [0] = 23,
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
    STATE(8), 1,
      sym_brace_group_start,
    STATE(172), 1,
      sym_comment,
    STATE(178), 1,
      sym_metapost_start,
    STATE(180), 1,
      sym_tikz_start,
    STATE(181), 1,
      sym_typing_start,
    STATE(182), 1,
      sym_typing_html_start,
    ACTIONS(5), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(7), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(9), 3,
      sym__paragraph_content,
      sym_command_group,
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
    STATE(19), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [97] = 23,
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
    STATE(172), 1,
      sym_comment,
    STATE(178), 1,
      sym_metapost_start,
    STATE(180), 1,
      sym_tikz_start,
    STATE(181), 1,
      sym_typing_start,
    STATE(182), 1,
      sym_typing_html_start,
    ACTIONS(35), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(38), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(50), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(9), 3,
      sym__paragraph_content,
      sym_command_group,
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
    STATE(19), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [194] = 20,
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
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(42), 1,
      sym_brace_group_stop,
    STATE(171), 1,
      sym_comment,
    STATE(177), 1,
      sym_typing_html_start,
    STATE(179), 1,
      sym_typing_start,
    STATE(183), 1,
      sym_tikz_start,
    STATE(187), 1,
      sym_metapost_start,
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
    STATE(16), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [276] = 20,
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
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(63), 1,
      sym_brace_group_stop,
    STATE(171), 1,
      sym_comment,
    STATE(177), 1,
      sym_typing_html_start,
    STATE(179), 1,
      sym_typing_start,
    STATE(183), 1,
      sym_tikz_start,
    STATE(187), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(84), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
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
    STATE(16), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [358] = 20,
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
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(56), 1,
      sym_brace_group_stop,
    STATE(171), 1,
      sym_comment,
    STATE(177), 1,
      sym_typing_html_start,
    STATE(179), 1,
      sym_typing_start,
    STATE(183), 1,
      sym_tikz_start,
    STATE(187), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(84), 2,
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
    STATE(16), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [440] = 20,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(89), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(98), 1,
      anon_sym_BSLASH,
    ACTIONS(101), 1,
      sym_command_group_start,
    ACTIONS(107), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(113), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(116), 1,
      sym_command_name,
    ACTIONS(119), 1,
      sym_paragraph_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(172), 1,
      sym_comment,
    STATE(178), 1,
      sym_metapost_start,
    STATE(180), 1,
      sym_tikz_start,
    STATE(181), 1,
      sym_typing_start,
    STATE(182), 1,
      sym_typing_html_start,
    ACTIONS(95), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(7), 3,
      sym__paragraph_content,
      sym_command_group,
      aux_sym_paragraph_repeat1,
    ACTIONS(104), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(110), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(19), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [522] = 20,
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
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(39), 1,
      sym_brace_group_stop,
    STATE(171), 1,
      sym_comment,
    STATE(177), 1,
      sym_typing_html_start,
    STATE(179), 1,
      sym_typing_start,
    STATE(183), 1,
      sym_tikz_start,
    STATE(187), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(121), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(11), 2,
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
    STATE(16), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [604] = 20,
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
    ACTIONS(123), 1,
      sym_paragraph_stop,
    STATE(8), 1,
      sym_brace_group_start,
    STATE(172), 1,
      sym_comment,
    STATE(178), 1,
      sym_metapost_start,
    STATE(180), 1,
      sym_tikz_start,
    STATE(181), 1,
      sym_typing_start,
    STATE(182), 1,
      sym_typing_html_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(7), 3,
      sym__paragraph_content,
      sym_command_group,
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
    STATE(19), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [686] = 20,
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
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(37), 1,
      sym_brace_group_stop,
    STATE(171), 1,
      sym_comment,
    STATE(177), 1,
      sym_typing_html_start,
    STATE(179), 1,
      sym_typing_start,
    STATE(183), 1,
      sym_tikz_start,
    STATE(187), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(78), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
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
    STATE(16), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [768] = 20,
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
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(51), 1,
      sym_brace_group_stop,
    STATE(171), 1,
      sym_comment,
    STATE(177), 1,
      sym_typing_html_start,
    STATE(179), 1,
      sym_typing_start,
    STATE(183), 1,
      sym_tikz_start,
    STATE(187), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(121), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
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
    STATE(16), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [850] = 19,
    ACTIONS(125), 1,
      sym_text,
    ACTIONS(128), 1,
      aux_sym_comment_token1,
    ACTIONS(131), 1,
      anon_sym_DOLLAR,
    ACTIONS(139), 1,
      anon_sym_BSLASH,
    ACTIONS(145), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(151), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(154), 1,
      sym_command_name,
    STATE(4), 1,
      sym_brace_group_start,
    STATE(171), 1,
      sym_comment,
    STATE(177), 1,
      sym_typing_html_start,
    STATE(179), 1,
      sym_typing_start,
    STATE(183), 1,
      sym_tikz_start,
    STATE(187), 1,
      sym_metapost_start,
    ACTIONS(134), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(137), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(12), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(142), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(148), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(16), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [929] = 19,
    ACTIONS(128), 1,
      aux_sym_comment_token1,
    ACTIONS(137), 1,
      sym_command_group_stop,
    ACTIONS(145), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(151), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(157), 1,
      sym_text,
    ACTIONS(160), 1,
      anon_sym_DOLLAR,
    ACTIONS(163), 1,
      anon_sym_BSLASH,
    ACTIONS(166), 1,
      sym_command_name,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(170), 1,
      sym_comment,
    STATE(188), 1,
      sym_typing_html_start,
    STATE(189), 1,
      sym_typing_start,
    STATE(190), 1,
      sym_tikz_start,
    STATE(192), 1,
      sym_metapost_start,
    ACTIONS(134), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(13), 2,
      sym__group_content,
      aux_sym_brace_group_repeat1,
    ACTIONS(142), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(148), 7,
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
  [1007] = 19,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(169), 1,
      sym_text,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(175), 1,
      sym_command_group_stop,
    ACTIONS(177), 1,
      sym_command_name,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(170), 1,
      sym_comment,
    STATE(188), 1,
      sym_typing_html_start,
    STATE(189), 1,
      sym_typing_start,
    STATE(190), 1,
      sym_tikz_start,
    STATE(192), 1,
      sym_metapost_start,
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
    STATE(32), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1085] = 19,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(23), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(27), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(169), 1,
      sym_text,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      anon_sym_BSLASH,
    ACTIONS(177), 1,
      sym_command_name,
    ACTIONS(179), 1,
      sym_command_group_stop,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(170), 1,
      sym_comment,
    STATE(188), 1,
      sym_typing_html_start,
    STATE(189), 1,
      sym_typing_start,
    STATE(190), 1,
      sym_tikz_start,
    STATE(192), 1,
      sym_metapost_start,
    ACTIONS(15), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(13), 2,
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
    STATE(32), 8,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
  [1163] = 3,
    STATE(70), 1,
      sym__end_of_line,
    ACTIONS(183), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(181), 24,
      sym_text,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1198] = 2,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(187), 26,
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
  [1231] = 2,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(191), 26,
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
  [1264] = 4,
    ACTIONS(197), 1,
      sym_paragraph_stop,
    STATE(74), 1,
      sym__end_of_line,
    ACTIONS(195), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(193), 23,
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
  [1301] = 2,
    ACTIONS(199), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(201), 26,
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
  [1334] = 2,
    ACTIONS(205), 1,
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
  [1366] = 2,
    ACTIONS(209), 1,
      sym_paragraph_stop,
    ACTIONS(207), 26,
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
  [1398] = 1,
    ACTIONS(211), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1428] = 1,
    ACTIONS(207), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1458] = 1,
    ACTIONS(213), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1488] = 1,
    ACTIONS(215), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1518] = 2,
    ACTIONS(219), 1,
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
  [1550] = 1,
    ACTIONS(221), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1580] = 1,
    ACTIONS(203), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1610] = 2,
    ACTIONS(225), 1,
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
  [1642] = 2,
    ACTIONS(229), 1,
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
  [1674] = 3,
    STATE(75), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(181), 23,
      sym_text,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
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
  [1708] = 2,
    ACTIONS(233), 1,
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
  [1740] = 1,
    ACTIONS(235), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1770] = 2,
    ACTIONS(239), 1,
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
  [1802] = 1,
    ACTIONS(217), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1832] = 1,
    ACTIONS(241), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1862] = 2,
    ACTIONS(245), 1,
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
  [1894] = 2,
    ACTIONS(249), 1,
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
  [1926] = 1,
    ACTIONS(251), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1956] = 1,
    ACTIONS(253), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [1986] = 1,
    ACTIONS(247), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2016] = 1,
    ACTIONS(243), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2046] = 1,
    ACTIONS(237), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2076] = 2,
    ACTIONS(255), 1,
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
  [2108] = 2,
    ACTIONS(257), 1,
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
  [2140] = 2,
    ACTIONS(259), 1,
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
  [2172] = 1,
    ACTIONS(223), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2202] = 1,
    ACTIONS(227), 27,
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
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2232] = 2,
    ACTIONS(261), 1,
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
  [2264] = 2,
    ACTIONS(263), 1,
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
  [2296] = 2,
    ACTIONS(265), 1,
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
  [2328] = 2,
    ACTIONS(267), 1,
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
  [2360] = 1,
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
  [2389] = 1,
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
  [2418] = 1,
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
  [2447] = 1,
    ACTIONS(207), 26,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
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
  [2476] = 1,
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
  [2505] = 1,
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
  [2534] = 1,
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
  [2563] = 1,
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
  [2592] = 1,
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
  [2621] = 1,
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
  [2650] = 1,
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
  [2679] = 1,
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
  [2708] = 1,
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
  [2737] = 1,
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
  [2766] = 1,
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
  [2795] = 1,
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
  [2824] = 2,
    ACTIONS(269), 1,
      sym_text,
    ACTIONS(271), 23,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2853] = 2,
    ACTIONS(273), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(275), 22,
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
  [2882] = 2,
    ACTIONS(277), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(279), 22,
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
  [2911] = 2,
    ACTIONS(281), 1,
      sym_text,
    ACTIONS(283), 23,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_command_name,
  [2940] = 2,
    ACTIONS(285), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(287), 22,
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
  [2969] = 2,
    ACTIONS(269), 1,
      sym_text,
    ACTIONS(271), 22,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
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
  [2997] = 8,
    ACTIONS(292), 1,
      aux_sym_comment_token1,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(300), 1,
      anon_sym_BSLASH,
    ACTIONS(303), 1,
      sym_command_name,
    ACTIONS(306), 1,
      aux_sym_title_text_token1,
    ACTIONS(289), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(298), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(76), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3033] = 8,
    ACTIONS(312), 1,
      aux_sym_comment_token1,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_BSLASH,
    ACTIONS(323), 1,
      sym_command_name,
    ACTIONS(326), 1,
      aux_sym_title_text_token1,
    ACTIONS(309), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(318), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(77), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3069] = 9,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_command_name,
    ACTIONS(339), 1,
      aux_sym_title_text_token1,
    STATE(164), 1,
      sym_title_value,
    ACTIONS(337), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(329), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(79), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3107] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_command_name,
    ACTIONS(339), 1,
      aux_sym_title_text_token1,
    ACTIONS(343), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(341), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(76), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3142] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_command_name,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      aux_sym_title_text_token1,
    ACTIONS(349), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(345), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(77), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3177] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_command_name,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      aux_sym_title_text_token1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(82), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3211] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_command_name,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      aux_sym_title_text_token1,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    ACTIONS(345), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(77), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3245] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_command_name,
    ACTIONS(339), 1,
      aux_sym_title_text_token1,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    ACTIONS(341), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(76), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3279] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_command_name,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 1,
      aux_sym_title_text_token1,
    STATE(163), 1,
      sym_value,
    ACTIONS(361), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(80), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      aux_sym_value_repeat1,
  [3313] = 8,
    ACTIONS(11), 1,
      aux_sym_comment_token1,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_BSLASH,
    ACTIONS(335), 1,
      sym_command_name,
    ACTIONS(339), 1,
      aux_sym_title_text_token1,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(83), 8,
      sym__end_of_line,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      aux_sym_title_value_repeat1,
  [3347] = 2,
    STATE(31), 1,
      sym_escapechar,
    ACTIONS(367), 11,
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
  [3364] = 2,
    STATE(139), 1,
      sym_escapechar,
    ACTIONS(369), 11,
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
  [3381] = 9,
    ACTIONS(373), 1,
      sym_command_block_stop,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      aux_sym_keyword_token1,
    ACTIONS(379), 1,
      anon_sym_title,
    STATE(133), 1,
      sym_keyword,
    STATE(199), 1,
      sym__end_of_line,
    STATE(200), 1,
      sym_key,
    STATE(128), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(371), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3412] = 2,
    STATE(106), 1,
      sym_escapechar,
    ACTIONS(381), 11,
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
  [3429] = 2,
    STATE(49), 1,
      sym_escapechar,
    ACTIONS(383), 11,
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
  [3446] = 2,
    STATE(54), 1,
      sym_escapechar,
    ACTIONS(385), 11,
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
  [3463] = 6,
    ACTIONS(387), 1,
      aux_sym_comment_token1,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
    ACTIONS(395), 1,
      anon_sym_BSLASH,
    ACTIONS(398), 1,
      sym_math_text,
    ACTIONS(390), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(92), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3487] = 5,
    ACTIONS(403), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_command_block_start,
    ACTIONS(407), 1,
      sym_command_stop,
    ACTIONS(401), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(110), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3509] = 5,
    ACTIONS(412), 1,
      aux_sym_comment_token1,
    ACTIONS(415), 1,
      sym_command_block_start,
    ACTIONS(418), 1,
      sym_command_stop,
    ACTIONS(409), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(94), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3531] = 1,
    ACTIONS(420), 11,
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
  [3545] = 5,
    ACTIONS(403), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_command_block_start,
    ACTIONS(424), 1,
      sym_command_stop,
    ACTIONS(422), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(94), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3567] = 5,
    ACTIONS(403), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_command_block_start,
    ACTIONS(426), 1,
      sym_command_stop,
    ACTIONS(422), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(94), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3589] = 1,
    ACTIONS(428), 11,
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
  [3603] = 5,
    ACTIONS(403), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_command_block_start,
    ACTIONS(432), 1,
      sym_command_stop,
    ACTIONS(430), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(97), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3625] = 1,
    ACTIONS(434), 11,
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
  [3639] = 1,
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
  [3653] = 5,
    ACTIONS(403), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_command_block_start,
    ACTIONS(436), 1,
      sym_command_stop,
    ACTIONS(422), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(94), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3675] = 1,
    ACTIONS(251), 11,
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
  [3689] = 5,
    ACTIONS(403), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_command_block_start,
    ACTIONS(440), 1,
      sym_command_stop,
    ACTIONS(438), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(102), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3711] = 1,
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
  [3725] = 1,
    ACTIONS(227), 11,
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
  [3739] = 5,
    ACTIONS(403), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_command_block_start,
    ACTIONS(444), 1,
      sym_command_stop,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(96), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3761] = 1,
    ACTIONS(446), 11,
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
  [3775] = 1,
    ACTIONS(448), 11,
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
  [3789] = 5,
    ACTIONS(403), 1,
      aux_sym_comment_token1,
    ACTIONS(405), 1,
      sym_command_block_start,
    ACTIONS(450), 1,
      sym_command_stop,
    ACTIONS(422), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(94), 5,
      sym__end_of_line,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      aux_sym_command_repeat1,
  [3811] = 1,
    ACTIONS(452), 11,
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
  [3825] = 1,
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
  [3839] = 7,
    ACTIONS(379), 1,
      anon_sym_title,
    ACTIONS(458), 1,
      sym_command_block_stop,
    ACTIONS(460), 1,
      aux_sym_keyword_token1,
    STATE(138), 1,
      sym__end_of_line,
    STATE(200), 1,
      sym_key,
    STATE(161), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(456), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3864] = 6,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(464), 1,
      anon_sym_DOLLAR,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(470), 1,
      sym_math_text,
    STATE(92), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3887] = 6,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(470), 1,
      sym_math_text,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    STATE(92), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3910] = 6,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(470), 1,
      sym_math_text,
    ACTIONS(474), 1,
      anon_sym_DOLLAR,
    STATE(92), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3933] = 6,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      sym_math_text,
    STATE(115), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3956] = 7,
    ACTIONS(379), 1,
      anon_sym_title,
    ACTIONS(460), 1,
      aux_sym_keyword_token1,
    ACTIONS(482), 1,
      sym_command_block_stop,
    STATE(141), 1,
      sym__end_of_line,
    STATE(200), 1,
      sym_key,
    STATE(161), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(480), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3981] = 6,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(470), 1,
      sym_math_text,
    ACTIONS(484), 1,
      anon_sym_DOLLAR,
    STATE(92), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4004] = 6,
    ACTIONS(379), 1,
      anon_sym_title,
    ACTIONS(460), 1,
      aux_sym_keyword_token1,
    STATE(162), 1,
      sym__end_of_line,
    STATE(200), 1,
      sym_key,
    STATE(161), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(486), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4026] = 5,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(488), 1,
      sym_math_text,
    STATE(114), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4046] = 5,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(490), 1,
      sym_math_text,
    STATE(116), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4066] = 5,
    ACTIONS(462), 1,
      aux_sym_comment_token1,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_BSLASH,
    ACTIONS(492), 1,
      sym_math_text,
    STATE(119), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4086] = 2,
    STATE(57), 1,
      sym_typing_stop,
    ACTIONS(494), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4099] = 2,
    STATE(22), 1,
      sym_typing_stop,
    ACTIONS(496), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4112] = 2,
    STATE(24), 1,
      sym_typing_stop,
    ACTIONS(498), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4125] = 2,
    STATE(29), 1,
      sym_metapost_stop,
    ACTIONS(500), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4137] = 5,
    ACTIONS(504), 1,
      sym_command_block_stop,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_settings_block_repeat1,
    STATE(208), 1,
      sym__end_of_line,
    ACTIONS(502), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4155] = 5,
    ACTIONS(458), 1,
      sym_command_block_stop,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_settings_block_repeat1,
    STATE(206), 1,
      sym__end_of_line,
    ACTIONS(508), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4173] = 5,
    ACTIONS(514), 1,
      sym_command_block_stop,
    ACTIONS(516), 1,
      aux_sym_keyword_token1,
    STATE(166), 1,
      sym_keyword,
    STATE(173), 1,
      sym__end_of_line,
    ACTIONS(512), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4191] = 2,
    STATE(21), 1,
      sym_metapost_stop,
    ACTIONS(518), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4203] = 1,
    ACTIONS(520), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4213] = 5,
    ACTIONS(524), 1,
      sym_command_block_stop,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_option_block_repeat1,
    STATE(202), 1,
      sym__end_of_line,
    ACTIONS(522), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4231] = 2,
    STATE(61), 1,
      sym_metapost_stop,
    ACTIONS(528), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4243] = 5,
    ACTIONS(516), 1,
      aux_sym_keyword_token1,
    ACTIONS(532), 1,
      sym_command_block_stop,
    STATE(166), 1,
      sym_keyword,
    STATE(174), 1,
      sym__end_of_line,
    ACTIONS(530), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4261] = 5,
    ACTIONS(532), 1,
      sym_command_block_stop,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_option_block_repeat1,
    STATE(198), 1,
      sym__end_of_line,
    ACTIONS(534), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4279] = 2,
    ACTIONS(540), 1,
      sym_command_stop,
    ACTIONS(538), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4290] = 5,
    ACTIONS(379), 1,
      anon_sym_title,
    ACTIONS(460), 1,
      aux_sym_keyword_token1,
    ACTIONS(542), 1,
      sym_command_block_stop,
    STATE(200), 1,
      sym_key,
    STATE(169), 2,
      sym_setting,
      sym_title_setting,
  [4307] = 1,
    ACTIONS(227), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4316] = 2,
    ACTIONS(546), 1,
      sym_command_stop,
    ACTIONS(544), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4327] = 5,
    ACTIONS(379), 1,
      anon_sym_title,
    ACTIONS(460), 1,
      aux_sym_keyword_token1,
    ACTIONS(548), 1,
      sym_command_block_stop,
    STATE(200), 1,
      sym_key,
    STATE(169), 2,
      sym_setting,
      sym_title_setting,
  [4344] = 2,
    ACTIONS(552), 1,
      sym_command_stop,
    ACTIONS(550), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4355] = 4,
    ACTIONS(516), 1,
      aux_sym_keyword_token1,
    STATE(166), 1,
      sym_keyword,
    STATE(185), 1,
      sym__end_of_line,
    ACTIONS(554), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4370] = 2,
    ACTIONS(546), 1,
      sym_command_stop,
    ACTIONS(544), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4381] = 1,
    ACTIONS(556), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4390] = 2,
    ACTIONS(560), 1,
      sym_command_stop,
    ACTIONS(558), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4401] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(562), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [4414] = 2,
    ACTIONS(569), 1,
      sym_command_stop,
    ACTIONS(567), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4425] = 2,
    ACTIONS(573), 1,
      anon_sym_EQ,
    ACTIONS(571), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4436] = 2,
    ACTIONS(569), 1,
      sym_command_stop,
    ACTIONS(567), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4447] = 2,
    ACTIONS(577), 1,
      sym_command_stop,
    ACTIONS(575), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4458] = 2,
    ACTIONS(581), 1,
      sym_command_stop,
    ACTIONS(579), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4469] = 2,
    ACTIONS(583), 1,
      sym_command_stop,
    ACTIONS(446), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4480] = 1,
    ACTIONS(585), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4489] = 1,
    ACTIONS(223), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4498] = 2,
    ACTIONS(589), 1,
      sym_command_stop,
    ACTIONS(587), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4509] = 1,
    ACTIONS(446), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4518] = 1,
    ACTIONS(591), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4527] = 2,
    ACTIONS(595), 1,
      sym_command_stop,
    ACTIONS(593), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      aux_sym_comment_token1,
      sym_command_block_start,
  [4538] = 3,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(160), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(597), 4,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
  [4551] = 1,
    ACTIONS(597), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4559] = 4,
    ACTIONS(379), 1,
      anon_sym_title,
    ACTIONS(460), 1,
      aux_sym_keyword_token1,
    STATE(200), 1,
      sym_key,
    STATE(169), 2,
      sym_setting,
      sym_title_setting,
  [4573] = 1,
    ACTIONS(602), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4581] = 1,
    ACTIONS(604), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4589] = 3,
    ACTIONS(608), 1,
      sym_command_block_stop,
    STATE(205), 1,
      sym__end_of_line,
    ACTIONS(606), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4601] = 1,
    ACTIONS(562), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4609] = 1,
    ACTIONS(610), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4617] = 1,
    ACTIONS(571), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4625] = 1,
    ACTIONS(612), 5,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
      sym_command_block_stop,
      anon_sym_COMMA,
  [4633] = 2,
    STATE(75), 1,
      sym__end_of_line,
    ACTIONS(231), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4642] = 2,
    STATE(70), 1,
      sym__end_of_line,
    ACTIONS(183), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4651] = 2,
    STATE(74), 1,
      sym__end_of_line,
    ACTIONS(195), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4660] = 3,
    ACTIONS(614), 1,
      sym_command_block_stop,
    ACTIONS(616), 1,
      aux_sym_keyword_token1,
    STATE(167), 1,
      sym_keyword,
  [4670] = 3,
    ACTIONS(616), 1,
      aux_sym_keyword_token1,
    ACTIONS(618), 1,
      sym_command_block_stop,
    STATE(167), 1,
      sym_keyword,
  [4680] = 2,
    ACTIONS(620), 1,
      anon_sym_BSLASHstopHTML,
    STATE(27), 1,
      sym_typing_html_stop,
  [4687] = 2,
    ACTIONS(622), 1,
      anon_sym_BSLASHstopHTML,
    STATE(36), 1,
      sym_typing_html_stop,
  [4694] = 2,
    ACTIONS(624), 1,
      aux_sym_metapost_body_token1,
    STATE(176), 1,
      sym_typing_html_body,
  [4701] = 2,
    ACTIONS(626), 1,
      aux_sym_metapost_body_token1,
    STATE(131), 1,
      sym_metapost_body,
  [4708] = 2,
    ACTIONS(628), 1,
      aux_sym_metapost_body_token1,
    STATE(126), 1,
      sym_typing_body,
  [4715] = 2,
    ACTIONS(630), 1,
      aux_sym_metapost_body_token1,
    STATE(191), 1,
      sym_tikz_body,
  [4722] = 2,
    ACTIONS(628), 1,
      aux_sym_metapost_body_token1,
    STATE(125), 1,
      sym_typing_body,
  [4729] = 2,
    ACTIONS(624), 1,
      aux_sym_metapost_body_token1,
    STATE(175), 1,
      sym_typing_html_body,
  [4736] = 2,
    ACTIONS(630), 1,
      aux_sym_metapost_body_token1,
    STATE(193), 1,
      sym_tikz_body,
  [4743] = 2,
    ACTIONS(632), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(59), 1,
      sym_tikz_stop,
  [4750] = 2,
    ACTIONS(616), 1,
      aux_sym_keyword_token1,
    STATE(167), 1,
      sym_keyword,
  [4757] = 2,
    ACTIONS(634), 1,
      anon_sym_BSLASHstopHTML,
    STATE(68), 1,
      sym_typing_html_stop,
  [4764] = 2,
    ACTIONS(626), 1,
      aux_sym_metapost_body_token1,
    STATE(127), 1,
      sym_metapost_body,
  [4771] = 2,
    ACTIONS(624), 1,
      aux_sym_metapost_body_token1,
    STATE(186), 1,
      sym_typing_html_body,
  [4778] = 2,
    ACTIONS(628), 1,
      aux_sym_metapost_body_token1,
    STATE(124), 1,
      sym_typing_body,
  [4785] = 2,
    ACTIONS(630), 1,
      aux_sym_metapost_body_token1,
    STATE(184), 1,
      sym_tikz_body,
  [4792] = 2,
    ACTIONS(636), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(46), 1,
      sym_tikz_stop,
  [4799] = 2,
    ACTIONS(626), 1,
      aux_sym_metapost_body_token1,
    STATE(134), 1,
      sym_metapost_body,
  [4806] = 2,
    ACTIONS(638), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(26), 1,
      sym_tikz_stop,
  [4813] = 1,
    ACTIONS(640), 1,
      anon_sym_EQ,
  [4817] = 1,
    ACTIONS(642), 1,
      anon_sym_BSLASHstopHTML,
  [4821] = 1,
    ACTIONS(644), 1,
      aux_sym_metapost_body_token1,
  [4825] = 1,
    ACTIONS(646), 1,
      anon_sym_EQ,
  [4829] = 1,
    ACTIONS(618), 1,
      sym_command_block_stop,
  [4833] = 1,
    ACTIONS(648), 1,
      sym_command_block_stop,
  [4837] = 1,
    ACTIONS(650), 1,
      anon_sym_EQ,
  [4841] = 1,
    ACTIONS(652), 1,
      ts_builtin_sym_end,
  [4845] = 1,
    ACTIONS(654), 1,
      sym_command_block_stop,
  [4849] = 1,
    ACTIONS(656), 1,
      anon_sym_BSLASHstoptikzpicture,
  [4853] = 1,
    ACTIONS(658), 1,
      aux_sym_metapost_body_token1,
  [4857] = 1,
    ACTIONS(660), 1,
      sym_command_block_stop,
  [4861] = 1,
    ACTIONS(542), 1,
      sym_command_block_stop,
  [4865] = 1,
    ACTIONS(662), 1,
      aux_sym_metapost_body_token1,
  [4869] = 1,
    ACTIONS(664), 1,
      sym_command_block_stop,
  [4873] = 1,
    ACTIONS(666), 1,
      aux_sym_metapost_body_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 97,
  [SMALL_STATE(4)] = 194,
  [SMALL_STATE(5)] = 276,
  [SMALL_STATE(6)] = 358,
  [SMALL_STATE(7)] = 440,
  [SMALL_STATE(8)] = 522,
  [SMALL_STATE(9)] = 604,
  [SMALL_STATE(10)] = 686,
  [SMALL_STATE(11)] = 768,
  [SMALL_STATE(12)] = 850,
  [SMALL_STATE(13)] = 929,
  [SMALL_STATE(14)] = 1007,
  [SMALL_STATE(15)] = 1085,
  [SMALL_STATE(16)] = 1163,
  [SMALL_STATE(17)] = 1198,
  [SMALL_STATE(18)] = 1231,
  [SMALL_STATE(19)] = 1264,
  [SMALL_STATE(20)] = 1301,
  [SMALL_STATE(21)] = 1334,
  [SMALL_STATE(22)] = 1366,
  [SMALL_STATE(23)] = 1398,
  [SMALL_STATE(24)] = 1428,
  [SMALL_STATE(25)] = 1458,
  [SMALL_STATE(26)] = 1488,
  [SMALL_STATE(27)] = 1518,
  [SMALL_STATE(28)] = 1550,
  [SMALL_STATE(29)] = 1580,
  [SMALL_STATE(30)] = 1610,
  [SMALL_STATE(31)] = 1642,
  [SMALL_STATE(32)] = 1674,
  [SMALL_STATE(33)] = 1708,
  [SMALL_STATE(34)] = 1740,
  [SMALL_STATE(35)] = 1770,
  [SMALL_STATE(36)] = 1802,
  [SMALL_STATE(37)] = 1832,
  [SMALL_STATE(38)] = 1862,
  [SMALL_STATE(39)] = 1894,
  [SMALL_STATE(40)] = 1926,
  [SMALL_STATE(41)] = 1956,
  [SMALL_STATE(42)] = 1986,
  [SMALL_STATE(43)] = 2016,
  [SMALL_STATE(44)] = 2046,
  [SMALL_STATE(45)] = 2076,
  [SMALL_STATE(46)] = 2108,
  [SMALL_STATE(47)] = 2140,
  [SMALL_STATE(48)] = 2172,
  [SMALL_STATE(49)] = 2202,
  [SMALL_STATE(50)] = 2232,
  [SMALL_STATE(51)] = 2264,
  [SMALL_STATE(52)] = 2296,
  [SMALL_STATE(53)] = 2328,
  [SMALL_STATE(54)] = 2360,
  [SMALL_STATE(55)] = 2389,
  [SMALL_STATE(56)] = 2418,
  [SMALL_STATE(57)] = 2447,
  [SMALL_STATE(58)] = 2476,
  [SMALL_STATE(59)] = 2505,
  [SMALL_STATE(60)] = 2534,
  [SMALL_STATE(61)] = 2563,
  [SMALL_STATE(62)] = 2592,
  [SMALL_STATE(63)] = 2621,
  [SMALL_STATE(64)] = 2650,
  [SMALL_STATE(65)] = 2679,
  [SMALL_STATE(66)] = 2708,
  [SMALL_STATE(67)] = 2737,
  [SMALL_STATE(68)] = 2766,
  [SMALL_STATE(69)] = 2795,
  [SMALL_STATE(70)] = 2824,
  [SMALL_STATE(71)] = 2853,
  [SMALL_STATE(72)] = 2882,
  [SMALL_STATE(73)] = 2911,
  [SMALL_STATE(74)] = 2940,
  [SMALL_STATE(75)] = 2969,
  [SMALL_STATE(76)] = 2997,
  [SMALL_STATE(77)] = 3033,
  [SMALL_STATE(78)] = 3069,
  [SMALL_STATE(79)] = 3107,
  [SMALL_STATE(80)] = 3142,
  [SMALL_STATE(81)] = 3177,
  [SMALL_STATE(82)] = 3211,
  [SMALL_STATE(83)] = 3245,
  [SMALL_STATE(84)] = 3279,
  [SMALL_STATE(85)] = 3313,
  [SMALL_STATE(86)] = 3347,
  [SMALL_STATE(87)] = 3364,
  [SMALL_STATE(88)] = 3381,
  [SMALL_STATE(89)] = 3412,
  [SMALL_STATE(90)] = 3429,
  [SMALL_STATE(91)] = 3446,
  [SMALL_STATE(92)] = 3463,
  [SMALL_STATE(93)] = 3487,
  [SMALL_STATE(94)] = 3509,
  [SMALL_STATE(95)] = 3531,
  [SMALL_STATE(96)] = 3545,
  [SMALL_STATE(97)] = 3567,
  [SMALL_STATE(98)] = 3589,
  [SMALL_STATE(99)] = 3603,
  [SMALL_STATE(100)] = 3625,
  [SMALL_STATE(101)] = 3639,
  [SMALL_STATE(102)] = 3653,
  [SMALL_STATE(103)] = 3675,
  [SMALL_STATE(104)] = 3689,
  [SMALL_STATE(105)] = 3711,
  [SMALL_STATE(106)] = 3725,
  [SMALL_STATE(107)] = 3739,
  [SMALL_STATE(108)] = 3761,
  [SMALL_STATE(109)] = 3775,
  [SMALL_STATE(110)] = 3789,
  [SMALL_STATE(111)] = 3811,
  [SMALL_STATE(112)] = 3825,
  [SMALL_STATE(113)] = 3839,
  [SMALL_STATE(114)] = 3864,
  [SMALL_STATE(115)] = 3887,
  [SMALL_STATE(116)] = 3910,
  [SMALL_STATE(117)] = 3933,
  [SMALL_STATE(118)] = 3956,
  [SMALL_STATE(119)] = 3981,
  [SMALL_STATE(120)] = 4004,
  [SMALL_STATE(121)] = 4026,
  [SMALL_STATE(122)] = 4046,
  [SMALL_STATE(123)] = 4066,
  [SMALL_STATE(124)] = 4086,
  [SMALL_STATE(125)] = 4099,
  [SMALL_STATE(126)] = 4112,
  [SMALL_STATE(127)] = 4125,
  [SMALL_STATE(128)] = 4137,
  [SMALL_STATE(129)] = 4155,
  [SMALL_STATE(130)] = 4173,
  [SMALL_STATE(131)] = 4191,
  [SMALL_STATE(132)] = 4203,
  [SMALL_STATE(133)] = 4213,
  [SMALL_STATE(134)] = 4231,
  [SMALL_STATE(135)] = 4243,
  [SMALL_STATE(136)] = 4261,
  [SMALL_STATE(137)] = 4279,
  [SMALL_STATE(138)] = 4290,
  [SMALL_STATE(139)] = 4307,
  [SMALL_STATE(140)] = 4316,
  [SMALL_STATE(141)] = 4327,
  [SMALL_STATE(142)] = 4344,
  [SMALL_STATE(143)] = 4355,
  [SMALL_STATE(144)] = 4370,
  [SMALL_STATE(145)] = 4381,
  [SMALL_STATE(146)] = 4390,
  [SMALL_STATE(147)] = 4401,
  [SMALL_STATE(148)] = 4414,
  [SMALL_STATE(149)] = 4425,
  [SMALL_STATE(150)] = 4436,
  [SMALL_STATE(151)] = 4447,
  [SMALL_STATE(152)] = 4458,
  [SMALL_STATE(153)] = 4469,
  [SMALL_STATE(154)] = 4480,
  [SMALL_STATE(155)] = 4489,
  [SMALL_STATE(156)] = 4498,
  [SMALL_STATE(157)] = 4509,
  [SMALL_STATE(158)] = 4518,
  [SMALL_STATE(159)] = 4527,
  [SMALL_STATE(160)] = 4538,
  [SMALL_STATE(161)] = 4551,
  [SMALL_STATE(162)] = 4559,
  [SMALL_STATE(163)] = 4573,
  [SMALL_STATE(164)] = 4581,
  [SMALL_STATE(165)] = 4589,
  [SMALL_STATE(166)] = 4601,
  [SMALL_STATE(167)] = 4609,
  [SMALL_STATE(168)] = 4617,
  [SMALL_STATE(169)] = 4625,
  [SMALL_STATE(170)] = 4633,
  [SMALL_STATE(171)] = 4642,
  [SMALL_STATE(172)] = 4651,
  [SMALL_STATE(173)] = 4660,
  [SMALL_STATE(174)] = 4670,
  [SMALL_STATE(175)] = 4680,
  [SMALL_STATE(176)] = 4687,
  [SMALL_STATE(177)] = 4694,
  [SMALL_STATE(178)] = 4701,
  [SMALL_STATE(179)] = 4708,
  [SMALL_STATE(180)] = 4715,
  [SMALL_STATE(181)] = 4722,
  [SMALL_STATE(182)] = 4729,
  [SMALL_STATE(183)] = 4736,
  [SMALL_STATE(184)] = 4743,
  [SMALL_STATE(185)] = 4750,
  [SMALL_STATE(186)] = 4757,
  [SMALL_STATE(187)] = 4764,
  [SMALL_STATE(188)] = 4771,
  [SMALL_STATE(189)] = 4778,
  [SMALL_STATE(190)] = 4785,
  [SMALL_STATE(191)] = 4792,
  [SMALL_STATE(192)] = 4799,
  [SMALL_STATE(193)] = 4806,
  [SMALL_STATE(194)] = 4813,
  [SMALL_STATE(195)] = 4817,
  [SMALL_STATE(196)] = 4821,
  [SMALL_STATE(197)] = 4825,
  [SMALL_STATE(198)] = 4829,
  [SMALL_STATE(199)] = 4833,
  [SMALL_STATE(200)] = 4837,
  [SMALL_STATE(201)] = 4841,
  [SMALL_STATE(202)] = 4845,
  [SMALL_STATE(203)] = 4849,
  [SMALL_STATE(204)] = 4853,
  [SMALL_STATE(205)] = 4857,
  [SMALL_STATE(206)] = 4861,
  [SMALL_STATE(207)] = 4865,
  [SMALL_STATE(208)] = 4869,
  [SMALL_STATE(209)] = 4873,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(108),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(86),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(196),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(204),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(207),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(209),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(107),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(19),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(108),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(121),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(73),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(86),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(14),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(196),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(204),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(207),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(209),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(107),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(16),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(108),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(123),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(73),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(90),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(196),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(204),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(207),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(209),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(104),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(32),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(122),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(91),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_brace_group_repeat1, 2), SHIFT_REPEAT(93),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__group_content, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__group_content, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_start, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(76),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(108),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(85),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(89),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(99),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(111),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(77),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(108),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(81),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(89),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(99),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(109),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(157),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(117),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(87),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(92),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [409] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(94),
  [412] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(153),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(88),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [564] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(143),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(120),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [606] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [608] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [652] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
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
