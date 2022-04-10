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
#define STATE_COUNT 190
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 123
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
  sym_text = 61,
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
  sym__end_of_line = 114,
  aux_sym_document_repeat1 = 115,
  aux_sym_math_group_repeat1 = 116,
  aux_sym_option_block_repeat1 = 117,
  aux_sym_settings_block_repeat1 = 118,
  aux_sym_title_value_repeat1 = 119,
  aux_sym_value_repeat1 = 120,
  aux_sym_command_repeat1 = 121,
  aux_sym_paragraph_repeat1 = 122,
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
  [sym_text] = sym_text,
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
      if (eof) ADVANCE(121);
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == '\\') ADVANCE(140);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(142);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '[') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == '%') ADVANCE(126);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(328);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == ',') ADVANCE(319);
      if (lookahead == '=') ADVANCE(325);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(324);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(324);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(129);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(131);
      if (lookahead == '&') ADVANCE(132);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead == '^') ADVANCE(133);
      if (lookahead == '_') ADVANCE(134);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '|') ADVANCE(137);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '~') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '}') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(177);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'M') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(20);
      if (lookahead == 't') ADVANCE(74);
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
      if (lookahead == 'L') ADVANCE(181);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 19:
      if (lookahead == 'L') ADVANCE(179);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(106);
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
      if (lookahead == 'P') ADVANCE(178);
      END_STATE();
    case 28:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(67);
      END_STATE();
    case 31:
      if (lookahead == 'P') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(182);
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
      if (lookahead == 'X') ADVANCE(180);
      END_STATE();
    case 39:
      if (lookahead == 'X') ADVANCE(24);
      END_STATE();
    case 40:
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == 't') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(324);
      END_STATE();
    case 43:
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(324);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 55:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 65:
      if (lookahead == 'f') ADVANCE(79);
      END_STATE();
    case 66:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 67:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'g') ADVANCE(118);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 71:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 72:
      if (lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(75);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(101);
      END_STATE();
    case 119:
      if (lookahead == 'z') ADVANCE(97);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '$') ADVANCE(130);
      if (lookahead == '%') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(143);
      if (lookahead == '{') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(328);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(128);
      if (lookahead != 0) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(128);
      if (lookahead != 0) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 's') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 's') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 's') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 's') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '%') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'p') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(204);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'A') ADVANCE(170);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'C') ADVANCE(206);
      if (lookahead == 'H') ADVANCE(208);
      if (lookahead == 'L') ADVANCE(209);
      if (lookahead == 'M') ADVANCE(200);
      if (lookahead == 'P') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == 'X') ADVANCE(194);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == 'u') ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'D') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'E') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'L') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'M') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'P') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'R') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'S') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'T') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'U') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'X') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(287);
      if (lookahead == 'o') ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'a') ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'b') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(269);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'c') ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'd') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(314);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'y') ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'f') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'g') ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'h') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'k') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'm') ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'n') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'o') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'p') ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'r') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 's') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'u') ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'x') ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'z') ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 'l') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == 't') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(324);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(328);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(332);
      if (lookahead == '\r') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(329);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(333);
      if (lookahead == '\r') ADVANCE(335);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 120},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 120},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 120},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 120},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 120},
  [41] = {.lex_state = 120},
  [42] = {.lex_state = 120},
  [43] = {.lex_state = 120},
  [44] = {.lex_state = 120},
  [45] = {.lex_state = 120},
  [46] = {.lex_state = 120},
  [47] = {.lex_state = 120},
  [48] = {.lex_state = 120},
  [49] = {.lex_state = 120},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 120},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
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
  [64] = {.lex_state = 8, .external_lex_state = 2},
  [65] = {.lex_state = 8, .external_lex_state = 2},
  [66] = {.lex_state = 8, .external_lex_state = 2},
  [67] = {.lex_state = 8, .external_lex_state = 2},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 1, .external_lex_state = 2},
  [73] = {.lex_state = 4, .external_lex_state = 3},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 4, .external_lex_state = 3},
  [76] = {.lex_state = 1, .external_lex_state = 2},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 1, .external_lex_state = 2},
  [79] = {.lex_state = 1, .external_lex_state = 2},
  [80] = {.lex_state = 4, .external_lex_state = 3},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1, .external_lex_state = 2},
  [84] = {.lex_state = 1, .external_lex_state = 2},
  [85] = {.lex_state = 4, .external_lex_state = 3},
  [86] = {.lex_state = 1, .external_lex_state = 2},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 1, .external_lex_state = 2},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 1, .external_lex_state = 2},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 4, .external_lex_state = 3},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 1, .external_lex_state = 2},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 10},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 40},
  [107] = {.lex_state = 8, .external_lex_state = 2},
  [108] = {.lex_state = 40},
  [109] = {.lex_state = 40},
  [110] = {.lex_state = 41},
  [111] = {.lex_state = 41},
  [112] = {.lex_state = 40},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 5},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 4, .external_lex_state = 3},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 42},
  [123] = {.lex_state = 4, .external_lex_state = 3},
  [124] = {.lex_state = 4, .external_lex_state = 3},
  [125] = {.lex_state = 41},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 4, .external_lex_state = 3},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 4, .external_lex_state = 3},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 42},
  [135] = {.lex_state = 4, .external_lex_state = 3},
  [136] = {.lex_state = 4, .external_lex_state = 3},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 4, .external_lex_state = 3},
  [139] = {.lex_state = 4, .external_lex_state = 3},
  [140] = {.lex_state = 4, .external_lex_state = 3},
  [141] = {.lex_state = 4, .external_lex_state = 3},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 4, .external_lex_state = 3},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 42},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 43},
  [154] = {.lex_state = 43},
  [155] = {.lex_state = 165},
  [156] = {.lex_state = 40},
  [157] = {.lex_state = 165},
  [158] = {.lex_state = 40},
  [159] = {.lex_state = 165},
  [160] = {.lex_state = 165},
  [161] = {.lex_state = 165},
  [162] = {.lex_state = 40},
  [163] = {.lex_state = 165},
  [164] = {.lex_state = 165},
  [165] = {.lex_state = 165},
  [166] = {.lex_state = 165},
  [167] = {.lex_state = 165},
  [168] = {.lex_state = 165},
  [169] = {.lex_state = 165},
  [170] = {.lex_state = 40},
  [171] = {.lex_state = 40},
  [172] = {.lex_state = 43},
  [173] = {.lex_state = 40},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 165},
  [176] = {.lex_state = 165},
  [177] = {.lex_state = 165},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 165},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 40},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 40},
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
    [sym_document] = STATE(183),
    [sym__content] = STATE(7),
    [sym_main_start] = STATE(7),
    [sym_main_stop] = STATE(7),
    [sym_comment] = STATE(72),
    [sym_escaped] = STATE(72),
    [sym_brace_group_start] = STATE(3),
    [sym_brace_group] = STATE(72),
    [sym_command_group] = STATE(7),
    [sym_inline_math] = STATE(72),
    [sym_metapost_start] = STATE(168),
    [sym_metapost_inclusion] = STATE(7),
    [sym_tikz_start] = STATE(167),
    [sym_tikz_inclusion] = STATE(7),
    [sym_typing_start] = STATE(155),
    [sym_typing_inclusion] = STATE(7),
    [sym_typing_html_start] = STATE(165),
    [sym_typing_html_inclusion] = STATE(7),
    [sym_command] = STATE(72),
    [sym_paragraph] = STATE(7),
    [sym__paragraph_content] = STATE(66),
    [sym__end_of_line] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [aux_sym_paragraph_repeat1] = STATE(66),
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
    [sym_text] = ACTIONS(27),
    [anon_sym_LF] = ACTIONS(29),
    [anon_sym_CR] = ACTIONS(29),
    [anon_sym_CR_LF] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(37), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(91), 1,
      sym_brace_group_stop,
    STATE(157), 1,
      sym_typing_html_start,
    STATE(159), 1,
      sym_typing_start,
    STATE(160), 1,
      sym_tikz_start,
    STATE(161), 1,
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
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(64), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(39), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(4), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [105] = 24,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(37), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(84), 1,
      sym_brace_group_stop,
    STATE(157), 1,
      sym_typing_html_start,
    STATE(159), 1,
      sym_typing_start,
    STATE(160), 1,
      sym_tikz_start,
    STATE(161), 1,
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
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(64), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(41), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(2), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [210] = 23,
    ACTIONS(49), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(63), 1,
      sym_command_group_start,
    ACTIONS(69), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(75), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_command_name,
    ACTIONS(81), 1,
      sym_text,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(157), 1,
      sym_typing_html_start,
    STATE(159), 1,
      sym_typing_start,
    STATE(160), 1,
      sym_tikz_start,
    STATE(161), 1,
      sym_metapost_start,
    ACTIONS(43), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(46), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(55), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(58), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    STATE(64), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(84), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(66), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(72), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(4), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [312] = 23,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(91), 1,
      sym_command_group_start,
    ACTIONS(93), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(87), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(89), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(95), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(6), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [413] = 23,
    ACTIONS(49), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(58), 1,
      sym_command_group_stop,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(69), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(75), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_command_name,
    ACTIONS(81), 1,
      sym_text,
    ACTIONS(103), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(55), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(97), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(100), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(106), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(66), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(72), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(6), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [514] = 23,
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
      sym_text,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(165), 1,
      sym_typing_html_start,
    STATE(167), 1,
      sym_tikz_start,
    STATE(168), 1,
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
    STATE(66), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(111), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(13), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [615] = 23,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(91), 1,
      sym_command_group_start,
    ACTIONS(113), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(87), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(89), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(95), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(6), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [716] = 23,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(91), 1,
      sym_command_group_start,
    ACTIONS(115), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(87), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(89), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(117), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(5), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [817] = 23,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(91), 1,
      sym_command_group_start,
    ACTIONS(119), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(87), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(89), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(95), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(6), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [918] = 23,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(91), 1,
      sym_command_group_start,
    ACTIONS(121), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(87), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(89), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(123), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(10), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1019] = 23,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(27), 1,
      sym_text,
    ACTIONS(91), 1,
      sym_command_group_start,
    ACTIONS(125), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(163), 1,
      sym_typing_html_start,
    STATE(164), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(87), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(89), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(67), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(127), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
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
    STATE(8), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1120] = 23,
    ACTIONS(49), 1,
      aux_sym_comment_token1,
    ACTIONS(52), 1,
      anon_sym_DOLLAR,
    ACTIONS(60), 1,
      anon_sym_BSLASH,
    ACTIONS(69), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(75), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(78), 1,
      sym_command_name,
    ACTIONS(81), 1,
      sym_text,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(155), 1,
      sym_typing_start,
    STATE(165), 1,
      sym_typing_html_start,
    STATE(167), 1,
      sym_tikz_start,
    STATE(168), 1,
      sym_metapost_start,
    ACTIONS(55), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(131), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(134), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    STATE(66), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    ACTIONS(140), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
    ACTIONS(66), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(72), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 11,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_command_group,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_paragraph,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1221] = 1,
    ACTIONS(143), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1256] = 1,
    ACTIONS(145), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1291] = 1,
    ACTIONS(147), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1326] = 1,
    ACTIONS(149), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1361] = 1,
    ACTIONS(151), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1396] = 1,
    ACTIONS(153), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1431] = 1,
    ACTIONS(155), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1466] = 1,
    ACTIONS(157), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1501] = 1,
    ACTIONS(159), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1536] = 1,
    ACTIONS(161), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1571] = 1,
    ACTIONS(163), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1606] = 1,
    ACTIONS(165), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1641] = 1,
    ACTIONS(167), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1676] = 1,
    ACTIONS(169), 32,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1711] = 1,
    ACTIONS(159), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1745] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1781] = 1,
    ACTIONS(145), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1815] = 1,
    ACTIONS(169), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1849] = 1,
    ACTIONS(143), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1883] = 1,
    ACTIONS(153), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1917] = 1,
    ACTIONS(147), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1951] = 2,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(143), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1987] = 1,
    ACTIONS(149), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2021] = 1,
    ACTIONS(167), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2055] = 1,
    ACTIONS(165), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2089] = 1,
    ACTIONS(155), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2123] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2159] = 2,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2195] = 2,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2231] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(151), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2267] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(155), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2303] = 2,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2339] = 2,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    ACTIONS(159), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2375] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2411] = 2,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    ACTIONS(167), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2447] = 2,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2483] = 1,
    ACTIONS(151), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2517] = 2,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 30,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2553] = 1,
    ACTIONS(161), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2587] = 1,
    ACTIONS(163), 31,
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
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2621] = 8,
    ACTIONS(197), 1,
      aux_sym_comment_token1,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_BSLASH,
    ACTIONS(208), 1,
      sym_command_name,
    ACTIONS(211), 1,
      aux_sym_title_text_token1,
    ACTIONS(203), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(214), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(54), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2657] = 9,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      sym_command_name,
    ACTIONS(227), 1,
      aux_sym_title_text_token1,
    STATE(148), 1,
      sym_title_value,
    ACTIONS(225), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(229), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(58), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2695] = 8,
    ACTIONS(231), 1,
      aux_sym_comment_token1,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      anon_sym_BSLASH,
    ACTIONS(242), 1,
      sym_command_name,
    ACTIONS(245), 1,
      aux_sym_title_text_token1,
    ACTIONS(237), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(248), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(56), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2731] = 8,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      sym_command_name,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      aux_sym_title_text_token1,
    ACTIONS(253), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(257), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(56), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2766] = 8,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      sym_command_name,
    ACTIONS(227), 1,
      aux_sym_title_text_token1,
    ACTIONS(259), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(54), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2801] = 8,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      sym_command_name,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      aux_sym_title_text_token1,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(56), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2835] = 8,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      sym_command_name,
    ACTIONS(227), 1,
      aux_sym_title_text_token1,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(261), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(54), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2869] = 8,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      sym_command_name,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      aux_sym_title_text_token1,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(59), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2903] = 8,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      sym_command_name,
    ACTIONS(227), 1,
      aux_sym_title_text_token1,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(60), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [2937] = 8,
    ACTIONS(217), 1,
      aux_sym_comment_token1,
    ACTIONS(221), 1,
      anon_sym_BSLASH,
    ACTIONS(223), 1,
      sym_command_name,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      aux_sym_title_text_token1,
    STATE(150), 1,
      sym_value,
    ACTIONS(275), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(57), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [2971] = 10,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(277), 1,
      sym_text,
    ACTIONS(279), 1,
      sym_paragraph_stop,
    STATE(3), 1,
      sym_brace_group_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(65), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
  [3008] = 10,
    ACTIONS(281), 1,
      aux_sym_comment_token1,
    ACTIONS(284), 1,
      anon_sym_DOLLAR,
    ACTIONS(290), 1,
      anon_sym_BSLASH,
    ACTIONS(293), 1,
      sym_command_name,
    ACTIONS(296), 1,
      sym_text,
    ACTIONS(299), 1,
      sym_paragraph_stop,
    STATE(3), 1,
      sym_brace_group_start,
    ACTIONS(287), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(65), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
  [3045] = 10,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(277), 1,
      sym_text,
    ACTIONS(301), 1,
      sym_paragraph_stop,
    STATE(3), 1,
      sym_brace_group_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(65), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
  [3082] = 10,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      sym_command_name,
    ACTIONS(277), 1,
      sym_text,
    ACTIONS(303), 1,
      sym_paragraph_stop,
    STATE(3), 1,
      sym_brace_group_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    STATE(65), 2,
      sym__paragraph_content,
      aux_sym_paragraph_repeat1,
    STATE(72), 5,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_inline_math,
      sym_command,
  [3119] = 9,
    ACTIONS(305), 1,
      sym_command_block_stop,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(309), 1,
      aux_sym_keyword_token1,
    ACTIONS(311), 1,
      anon_sym_title,
    STATE(115), 1,
      sym_keyword,
    STATE(181), 1,
      sym__end_of_line,
    STATE(188), 1,
      sym_key,
    STATE(116), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(313), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3150] = 2,
    STATE(78), 1,
      sym_escapechar,
    ACTIONS(315), 11,
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
  [3167] = 2,
    STATE(131), 1,
      sym_escapechar,
    ACTIONS(317), 11,
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
  [3184] = 2,
    STATE(98), 1,
      sym_escapechar,
    ACTIONS(319), 11,
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
  [3201] = 4,
    ACTIONS(325), 1,
      sym_paragraph_stop,
    STATE(107), 1,
      sym__end_of_line,
    ACTIONS(323), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(321), 7,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
  [3222] = 5,
    ACTIONS(327), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      sym_command_block_start,
    ACTIONS(333), 1,
      sym_command_stop,
    ACTIONS(331), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(93), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3244] = 1,
    ACTIONS(335), 11,
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
  [3258] = 5,
    ACTIONS(327), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      sym_command_block_start,
    ACTIONS(337), 1,
      sym_command_stop,
    ACTIONS(331), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(93), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3280] = 2,
    ACTIONS(341), 1,
      sym_paragraph_stop,
    ACTIONS(339), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3296] = 1,
    ACTIONS(343), 11,
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
  [3310] = 2,
    ACTIONS(347), 1,
      sym_paragraph_stop,
    ACTIONS(345), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3326] = 2,
    ACTIONS(351), 1,
      sym_paragraph_stop,
    ACTIONS(349), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3342] = 5,
    ACTIONS(327), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      sym_command_block_start,
    ACTIONS(355), 1,
      sym_command_stop,
    ACTIONS(353), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(73), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3364] = 1,
    ACTIONS(339), 11,
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
  [3378] = 1,
    ACTIONS(357), 11,
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
  [3392] = 2,
    ACTIONS(359), 1,
      sym_paragraph_stop,
    ACTIONS(357), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3408] = 2,
    ACTIONS(363), 1,
      sym_paragraph_stop,
    ACTIONS(361), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3424] = 5,
    ACTIONS(327), 1,
      aux_sym_comment_token1,
    ACTIONS(329), 1,
      sym_command_block_start,
    ACTIONS(367), 1,
      sym_command_stop,
    ACTIONS(365), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(75), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3446] = 2,
    ACTIONS(371), 1,
      sym_paragraph_stop,
    ACTIONS(369), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3462] = 1,
    ACTIONS(349), 11,
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
  [3476] = 2,
    ACTIONS(375), 1,
      sym_paragraph_stop,
    ACTIONS(373), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3492] = 1,
    ACTIONS(377), 11,
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
  [3506] = 1,
    ACTIONS(379), 11,
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
  [3520] = 2,
    ACTIONS(383), 1,
      sym_paragraph_stop,
    ACTIONS(381), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3536] = 1,
    ACTIONS(385), 11,
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
  [3550] = 5,
    ACTIONS(387), 1,
      aux_sym_comment_token1,
    ACTIONS(390), 1,
      sym_command_block_start,
    ACTIONS(396), 1,
      sym_command_stop,
    ACTIONS(393), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    STATE(93), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [3572] = 1,
    ACTIONS(398), 11,
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
  [3586] = 2,
    ACTIONS(400), 1,
      sym_paragraph_stop,
    ACTIONS(343), 10,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3602] = 6,
    ACTIONS(402), 1,
      aux_sym_comment_token1,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    ACTIONS(410), 1,
      anon_sym_BSLASH,
    ACTIONS(413), 1,
      sym_math_text,
    ACTIONS(405), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(96), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3626] = 1,
    ACTIONS(416), 11,
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
  [3640] = 1,
    ACTIONS(345), 11,
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
  [3654] = 6,
    ACTIONS(418), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    ACTIONS(424), 1,
      anon_sym_BSLASH,
    ACTIONS(426), 1,
      sym_math_text,
    STATE(96), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3677] = 6,
    ACTIONS(418), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_BSLASH,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    ACTIONS(430), 1,
      sym_math_text,
    STATE(99), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3700] = 7,
    ACTIONS(311), 1,
      anon_sym_title,
    ACTIONS(432), 1,
      sym_command_block_stop,
    ACTIONS(434), 1,
      aux_sym_keyword_token1,
    STATE(122), 1,
      sym__end_of_line,
    STATE(188), 1,
      sym_key,
    STATE(145), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(436), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3725] = 6,
    ACTIONS(418), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_BSLASH,
    ACTIONS(426), 1,
      sym_math_text,
    ACTIONS(438), 1,
      anon_sym_DOLLAR,
    STATE(96), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3748] = 7,
    ACTIONS(311), 1,
      anon_sym_title,
    ACTIONS(434), 1,
      aux_sym_keyword_token1,
    ACTIONS(440), 1,
      sym_command_block_stop,
    STATE(134), 1,
      sym__end_of_line,
    STATE(188), 1,
      sym_key,
    STATE(145), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(442), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3773] = 6,
    ACTIONS(311), 1,
      anon_sym_title,
    ACTIONS(434), 1,
      aux_sym_keyword_token1,
    STATE(151), 1,
      sym__end_of_line,
    STATE(188), 1,
      sym_key,
    STATE(145), 2,
      sym_setting,
      sym_title_setting,
    ACTIONS(444), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3795] = 5,
    ACTIONS(418), 1,
      aux_sym_comment_token1,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
    ACTIONS(424), 1,
      anon_sym_BSLASH,
    ACTIONS(446), 1,
      sym_math_text,
    STATE(102), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [3815] = 2,
    STATE(18), 1,
      sym_typing_stop,
    ACTIONS(448), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [3828] = 2,
    ACTIONS(452), 2,
      sym_paragraph_stop,
      sym_text,
    ACTIONS(450), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_name,
  [3841] = 2,
    STATE(43), 1,
      sym_typing_stop,
    ACTIONS(454), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [3854] = 2,
    STATE(50), 1,
      sym_typing_stop,
    ACTIONS(456), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [3867] = 2,
    STATE(37), 1,
      sym_metapost_stop,
    ACTIONS(458), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [3879] = 2,
    STATE(48), 1,
      sym_metapost_stop,
    ACTIONS(460), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [3891] = 1,
    ACTIONS(462), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [3901] = 5,
    ACTIONS(464), 1,
      sym_command_block_stop,
    ACTIONS(466), 1,
      aux_sym_keyword_token1,
    STATE(152), 1,
      sym_keyword,
    STATE(153), 1,
      sym__end_of_line,
    ACTIONS(468), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3919] = 2,
    STATE(26), 1,
      sym_metapost_stop,
    ACTIONS(470), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [3931] = 5,
    ACTIONS(472), 1,
      sym_command_block_stop,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_option_block_repeat1,
    STATE(184), 1,
      sym__end_of_line,
    ACTIONS(476), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3949] = 5,
    ACTIONS(478), 1,
      sym_command_block_stop,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_settings_block_repeat1,
    STATE(182), 1,
      sym__end_of_line,
    ACTIONS(482), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3967] = 5,
    ACTIONS(466), 1,
      aux_sym_keyword_token1,
    ACTIONS(484), 1,
      sym_command_block_stop,
    STATE(152), 1,
      sym_keyword,
    STATE(154), 1,
      sym__end_of_line,
    ACTIONS(486), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3985] = 5,
    ACTIONS(484), 1,
      sym_command_block_stop,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_option_block_repeat1,
    STATE(180), 1,
      sym__end_of_line,
    ACTIONS(490), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4003] = 5,
    ACTIONS(432), 1,
      sym_command_block_stop,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_settings_block_repeat1,
    STATE(174), 1,
      sym__end_of_line,
    ACTIONS(494), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4021] = 2,
    ACTIONS(498), 1,
      sym_command_stop,
    ACTIONS(496), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4032] = 4,
    ACTIONS(466), 1,
      aux_sym_keyword_token1,
    STATE(152), 1,
      sym_keyword,
    STATE(172), 1,
      sym__end_of_line,
    ACTIONS(500), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4047] = 5,
    ACTIONS(311), 1,
      anon_sym_title,
    ACTIONS(434), 1,
      aux_sym_keyword_token1,
    ACTIONS(502), 1,
      sym_command_block_stop,
    STATE(188), 1,
      sym_key,
    STATE(147), 2,
      sym_setting,
      sym_title_setting,
  [4064] = 2,
    ACTIONS(506), 1,
      sym_command_stop,
    ACTIONS(504), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4075] = 2,
    ACTIONS(510), 1,
      sym_command_stop,
    ACTIONS(508), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4086] = 1,
    ACTIONS(512), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4095] = 3,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_option_block_repeat1,
    ACTIONS(514), 4,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4108] = 2,
    ACTIONS(521), 1,
      sym_command_stop,
    ACTIONS(519), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4119] = 1,
    ACTIONS(523), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4128] = 1,
    ACTIONS(357), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4137] = 1,
    ACTIONS(349), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4146] = 1,
    ACTIONS(345), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4155] = 2,
    ACTIONS(527), 1,
      sym_command_stop,
    ACTIONS(525), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4166] = 3,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_settings_block_repeat1,
    ACTIONS(529), 4,
      sym_command_block_stop,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4179] = 5,
    ACTIONS(311), 1,
      anon_sym_title,
    ACTIONS(434), 1,
      aux_sym_keyword_token1,
    ACTIONS(534), 1,
      sym_command_block_stop,
    STATE(188), 1,
      sym_key,
    STATE(147), 2,
      sym_setting,
      sym_title_setting,
  [4196] = 2,
    ACTIONS(538), 1,
      sym_command_stop,
    ACTIONS(536), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4207] = 2,
    ACTIONS(542), 1,
      sym_command_stop,
    ACTIONS(540), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4218] = 2,
    ACTIONS(546), 1,
      anon_sym_EQ,
    ACTIONS(544), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4229] = 2,
    ACTIONS(359), 1,
      sym_command_stop,
    ACTIONS(357), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4240] = 2,
    ACTIONS(527), 1,
      sym_command_stop,
    ACTIONS(525), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4251] = 2,
    ACTIONS(550), 1,
      sym_command_stop,
    ACTIONS(548), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4262] = 2,
    ACTIONS(542), 1,
      sym_command_stop,
    ACTIONS(540), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4273] = 1,
    ACTIONS(552), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4282] = 2,
    ACTIONS(556), 1,
      sym_command_stop,
    ACTIONS(554), 5,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4293] = 1,
    ACTIONS(558), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4301] = 1,
    ACTIONS(529), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4309] = 3,
    ACTIONS(560), 1,
      sym_command_block_stop,
    STATE(185), 1,
      sym__end_of_line,
    ACTIONS(562), 3,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4321] = 1,
    ACTIONS(564), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4329] = 1,
    ACTIONS(566), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4337] = 1,
    ACTIONS(544), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4345] = 1,
    ACTIONS(568), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4353] = 4,
    ACTIONS(311), 1,
      anon_sym_title,
    ACTIONS(434), 1,
      aux_sym_keyword_token1,
    STATE(188), 1,
      sym_key,
    STATE(147), 2,
      sym_setting,
      sym_title_setting,
  [4367] = 1,
    ACTIONS(514), 5,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [4375] = 3,
    ACTIONS(570), 1,
      sym_command_block_stop,
    ACTIONS(572), 1,
      aux_sym_keyword_token1,
    STATE(144), 1,
      sym_keyword,
  [4385] = 3,
    ACTIONS(572), 1,
      aux_sym_keyword_token1,
    ACTIONS(574), 1,
      sym_command_block_stop,
    STATE(144), 1,
      sym_keyword,
  [4395] = 2,
    ACTIONS(576), 1,
      aux_sym_metapost_body_token1,
    STATE(108), 1,
      sym_typing_body,
  [4402] = 2,
    ACTIONS(578), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(22), 1,
      sym_tikz_stop,
  [4409] = 2,
    ACTIONS(580), 1,
      aux_sym_metapost_body_token1,
    STATE(170), 1,
      sym_typing_html_body,
  [4416] = 2,
    ACTIONS(582), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(46), 1,
      sym_tikz_stop,
  [4423] = 2,
    ACTIONS(576), 1,
      aux_sym_metapost_body_token1,
    STATE(106), 1,
      sym_typing_body,
  [4430] = 2,
    ACTIONS(584), 1,
      aux_sym_metapost_body_token1,
    STATE(156), 1,
      sym_tikz_body,
  [4437] = 2,
    ACTIONS(586), 1,
      aux_sym_metapost_body_token1,
    STATE(114), 1,
      sym_metapost_body,
  [4444] = 2,
    ACTIONS(588), 1,
      anon_sym_BSLASHstopHTML,
    STATE(40), 1,
      sym_typing_html_stop,
  [4451] = 2,
    ACTIONS(580), 1,
      aux_sym_metapost_body_token1,
    STATE(173), 1,
      sym_typing_html_body,
  [4458] = 2,
    ACTIONS(576), 1,
      aux_sym_metapost_body_token1,
    STATE(109), 1,
      sym_typing_body,
  [4465] = 2,
    ACTIONS(580), 1,
      aux_sym_metapost_body_token1,
    STATE(162), 1,
      sym_typing_html_body,
  [4472] = 2,
    ACTIONS(584), 1,
      aux_sym_metapost_body_token1,
    STATE(171), 1,
      sym_tikz_body,
  [4479] = 2,
    ACTIONS(584), 1,
      aux_sym_metapost_body_token1,
    STATE(158), 1,
      sym_tikz_body,
  [4486] = 2,
    ACTIONS(586), 1,
      aux_sym_metapost_body_token1,
    STATE(111), 1,
      sym_metapost_body,
  [4493] = 2,
    ACTIONS(586), 1,
      aux_sym_metapost_body_token1,
    STATE(110), 1,
      sym_metapost_body,
  [4500] = 2,
    ACTIONS(590), 1,
      anon_sym_BSLASHstopHTML,
    STATE(24), 1,
      sym_typing_html_stop,
  [4507] = 2,
    ACTIONS(592), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(28), 1,
      sym_tikz_stop,
  [4514] = 2,
    ACTIONS(572), 1,
      aux_sym_keyword_token1,
    STATE(144), 1,
      sym_keyword,
  [4521] = 2,
    ACTIONS(594), 1,
      anon_sym_BSLASHstopHTML,
    STATE(53), 1,
      sym_typing_html_stop,
  [4528] = 1,
    ACTIONS(502), 1,
      sym_command_block_stop,
  [4532] = 1,
    ACTIONS(596), 1,
      aux_sym_metapost_body_token1,
  [4536] = 1,
    ACTIONS(598), 1,
      aux_sym_metapost_body_token1,
  [4540] = 1,
    ACTIONS(600), 1,
      aux_sym_metapost_body_token1,
  [4544] = 1,
    ACTIONS(602), 1,
      anon_sym_EQ,
  [4548] = 1,
    ACTIONS(604), 1,
      aux_sym_metapost_body_token1,
  [4552] = 1,
    ACTIONS(574), 1,
      sym_command_block_stop,
  [4556] = 1,
    ACTIONS(606), 1,
      sym_command_block_stop,
  [4560] = 1,
    ACTIONS(608), 1,
      sym_command_block_stop,
  [4564] = 1,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
  [4568] = 1,
    ACTIONS(612), 1,
      sym_command_block_stop,
  [4572] = 1,
    ACTIONS(614), 1,
      sym_command_block_stop,
  [4576] = 1,
    ACTIONS(616), 1,
      anon_sym_BSLASHstopHTML,
  [4580] = 1,
    ACTIONS(618), 1,
      anon_sym_EQ,
  [4584] = 1,
    ACTIONS(620), 1,
      anon_sym_EQ,
  [4588] = 1,
    ACTIONS(622), 1,
      anon_sym_BSLASHstoptikzpicture,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 105,
  [SMALL_STATE(4)] = 210,
  [SMALL_STATE(5)] = 312,
  [SMALL_STATE(6)] = 413,
  [SMALL_STATE(7)] = 514,
  [SMALL_STATE(8)] = 615,
  [SMALL_STATE(9)] = 716,
  [SMALL_STATE(10)] = 817,
  [SMALL_STATE(11)] = 918,
  [SMALL_STATE(12)] = 1019,
  [SMALL_STATE(13)] = 1120,
  [SMALL_STATE(14)] = 1221,
  [SMALL_STATE(15)] = 1256,
  [SMALL_STATE(16)] = 1291,
  [SMALL_STATE(17)] = 1326,
  [SMALL_STATE(18)] = 1361,
  [SMALL_STATE(19)] = 1396,
  [SMALL_STATE(20)] = 1431,
  [SMALL_STATE(21)] = 1466,
  [SMALL_STATE(22)] = 1501,
  [SMALL_STATE(23)] = 1536,
  [SMALL_STATE(24)] = 1571,
  [SMALL_STATE(25)] = 1606,
  [SMALL_STATE(26)] = 1641,
  [SMALL_STATE(27)] = 1676,
  [SMALL_STATE(28)] = 1711,
  [SMALL_STATE(29)] = 1745,
  [SMALL_STATE(30)] = 1781,
  [SMALL_STATE(31)] = 1815,
  [SMALL_STATE(32)] = 1849,
  [SMALL_STATE(33)] = 1883,
  [SMALL_STATE(34)] = 1917,
  [SMALL_STATE(35)] = 1951,
  [SMALL_STATE(36)] = 1987,
  [SMALL_STATE(37)] = 2021,
  [SMALL_STATE(38)] = 2055,
  [SMALL_STATE(39)] = 2089,
  [SMALL_STATE(40)] = 2123,
  [SMALL_STATE(41)] = 2159,
  [SMALL_STATE(42)] = 2195,
  [SMALL_STATE(43)] = 2231,
  [SMALL_STATE(44)] = 2267,
  [SMALL_STATE(45)] = 2303,
  [SMALL_STATE(46)] = 2339,
  [SMALL_STATE(47)] = 2375,
  [SMALL_STATE(48)] = 2411,
  [SMALL_STATE(49)] = 2447,
  [SMALL_STATE(50)] = 2483,
  [SMALL_STATE(51)] = 2517,
  [SMALL_STATE(52)] = 2553,
  [SMALL_STATE(53)] = 2587,
  [SMALL_STATE(54)] = 2621,
  [SMALL_STATE(55)] = 2657,
  [SMALL_STATE(56)] = 2695,
  [SMALL_STATE(57)] = 2731,
  [SMALL_STATE(58)] = 2766,
  [SMALL_STATE(59)] = 2801,
  [SMALL_STATE(60)] = 2835,
  [SMALL_STATE(61)] = 2869,
  [SMALL_STATE(62)] = 2903,
  [SMALL_STATE(63)] = 2937,
  [SMALL_STATE(64)] = 2971,
  [SMALL_STATE(65)] = 3008,
  [SMALL_STATE(66)] = 3045,
  [SMALL_STATE(67)] = 3082,
  [SMALL_STATE(68)] = 3119,
  [SMALL_STATE(69)] = 3150,
  [SMALL_STATE(70)] = 3167,
  [SMALL_STATE(71)] = 3184,
  [SMALL_STATE(72)] = 3201,
  [SMALL_STATE(73)] = 3222,
  [SMALL_STATE(74)] = 3244,
  [SMALL_STATE(75)] = 3258,
  [SMALL_STATE(76)] = 3280,
  [SMALL_STATE(77)] = 3296,
  [SMALL_STATE(78)] = 3310,
  [SMALL_STATE(79)] = 3326,
  [SMALL_STATE(80)] = 3342,
  [SMALL_STATE(81)] = 3364,
  [SMALL_STATE(82)] = 3378,
  [SMALL_STATE(83)] = 3392,
  [SMALL_STATE(84)] = 3408,
  [SMALL_STATE(85)] = 3424,
  [SMALL_STATE(86)] = 3446,
  [SMALL_STATE(87)] = 3462,
  [SMALL_STATE(88)] = 3476,
  [SMALL_STATE(89)] = 3492,
  [SMALL_STATE(90)] = 3506,
  [SMALL_STATE(91)] = 3520,
  [SMALL_STATE(92)] = 3536,
  [SMALL_STATE(93)] = 3550,
  [SMALL_STATE(94)] = 3572,
  [SMALL_STATE(95)] = 3586,
  [SMALL_STATE(96)] = 3602,
  [SMALL_STATE(97)] = 3626,
  [SMALL_STATE(98)] = 3640,
  [SMALL_STATE(99)] = 3654,
  [SMALL_STATE(100)] = 3677,
  [SMALL_STATE(101)] = 3700,
  [SMALL_STATE(102)] = 3725,
  [SMALL_STATE(103)] = 3748,
  [SMALL_STATE(104)] = 3773,
  [SMALL_STATE(105)] = 3795,
  [SMALL_STATE(106)] = 3815,
  [SMALL_STATE(107)] = 3828,
  [SMALL_STATE(108)] = 3841,
  [SMALL_STATE(109)] = 3854,
  [SMALL_STATE(110)] = 3867,
  [SMALL_STATE(111)] = 3879,
  [SMALL_STATE(112)] = 3891,
  [SMALL_STATE(113)] = 3901,
  [SMALL_STATE(114)] = 3919,
  [SMALL_STATE(115)] = 3931,
  [SMALL_STATE(116)] = 3949,
  [SMALL_STATE(117)] = 3967,
  [SMALL_STATE(118)] = 3985,
  [SMALL_STATE(119)] = 4003,
  [SMALL_STATE(120)] = 4021,
  [SMALL_STATE(121)] = 4032,
  [SMALL_STATE(122)] = 4047,
  [SMALL_STATE(123)] = 4064,
  [SMALL_STATE(124)] = 4075,
  [SMALL_STATE(125)] = 4086,
  [SMALL_STATE(126)] = 4095,
  [SMALL_STATE(127)] = 4108,
  [SMALL_STATE(128)] = 4119,
  [SMALL_STATE(129)] = 4128,
  [SMALL_STATE(130)] = 4137,
  [SMALL_STATE(131)] = 4146,
  [SMALL_STATE(132)] = 4155,
  [SMALL_STATE(133)] = 4166,
  [SMALL_STATE(134)] = 4179,
  [SMALL_STATE(135)] = 4196,
  [SMALL_STATE(136)] = 4207,
  [SMALL_STATE(137)] = 4218,
  [SMALL_STATE(138)] = 4229,
  [SMALL_STATE(139)] = 4240,
  [SMALL_STATE(140)] = 4251,
  [SMALL_STATE(141)] = 4262,
  [SMALL_STATE(142)] = 4273,
  [SMALL_STATE(143)] = 4282,
  [SMALL_STATE(144)] = 4293,
  [SMALL_STATE(145)] = 4301,
  [SMALL_STATE(146)] = 4309,
  [SMALL_STATE(147)] = 4321,
  [SMALL_STATE(148)] = 4329,
  [SMALL_STATE(149)] = 4337,
  [SMALL_STATE(150)] = 4345,
  [SMALL_STATE(151)] = 4353,
  [SMALL_STATE(152)] = 4367,
  [SMALL_STATE(153)] = 4375,
  [SMALL_STATE(154)] = 4385,
  [SMALL_STATE(155)] = 4395,
  [SMALL_STATE(156)] = 4402,
  [SMALL_STATE(157)] = 4409,
  [SMALL_STATE(158)] = 4416,
  [SMALL_STATE(159)] = 4423,
  [SMALL_STATE(160)] = 4430,
  [SMALL_STATE(161)] = 4437,
  [SMALL_STATE(162)] = 4444,
  [SMALL_STATE(163)] = 4451,
  [SMALL_STATE(164)] = 4458,
  [SMALL_STATE(165)] = 4465,
  [SMALL_STATE(166)] = 4472,
  [SMALL_STATE(167)] = 4479,
  [SMALL_STATE(168)] = 4486,
  [SMALL_STATE(169)] = 4493,
  [SMALL_STATE(170)] = 4500,
  [SMALL_STATE(171)] = 4507,
  [SMALL_STATE(172)] = 4514,
  [SMALL_STATE(173)] = 4521,
  [SMALL_STATE(174)] = 4528,
  [SMALL_STATE(175)] = 4532,
  [SMALL_STATE(176)] = 4536,
  [SMALL_STATE(177)] = 4540,
  [SMALL_STATE(178)] = 4544,
  [SMALL_STATE(179)] = 4548,
  [SMALL_STATE(180)] = 4552,
  [SMALL_STATE(181)] = 4556,
  [SMALL_STATE(182)] = 4560,
  [SMALL_STATE(183)] = 4564,
  [SMALL_STATE(184)] = 4568,
  [SMALL_STATE(185)] = 4572,
  [SMALL_STATE(186)] = 4576,
  [SMALL_STATE(187)] = 4580,
  [SMALL_STATE(188)] = 4584,
  [SMALL_STATE(189)] = 4588,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(83),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(105),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(177),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(176),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(175),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(179),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(85),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(41),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paragraph, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paragraph, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(82),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(62),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(71),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(80),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(74),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(54),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(82),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(61),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(71),
  [242] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(80),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(92),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(56),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_value, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(83),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(105),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(21),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(69),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(85),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2), SHIFT_REPEAT(72),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_paragraph_repeat1, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(138),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(68),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(93),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(129),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(100),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(70),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(96),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [442] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paragraph_content, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paragraph_content, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 6),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 6),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 6),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 6),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(121),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(104),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key, 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_option_block_repeat1, 3),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_settings_block_repeat1, 3),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_setting, 3),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_setting, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [610] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
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
