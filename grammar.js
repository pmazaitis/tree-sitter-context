// tree-sitter-context
//
// Tree-Sitter parser for the ConTeXt markup language (https://www.contextgarden.net/)

// PROGRESS
//
// ## Cases to handle
//
// [F] Areas
// [x] Commands
// [x] Text
// [x] Paragraph Markers
// [x] Brace Groups
// [x] Command groups (/start and /stop)
// [x] Escaped Characters
// [x] Comments
// [x] Inline Math
// [ ]
//
// ## Injected Languages
// [ ] Metapost
// [ ] TiKz
// [ ] Lua
// [ ]
//
// ## Injected languages for Typing Environments
// [ ] Plain
// [ ] HTML
// [ ] CSS
// [ ]
//
// # TODO
//
// * Cleanup up preamble end capture
// * put explicit boundary markers back for highlighting?
//
// # PRECEDENCE LIST
//
// 20  :  (document choice) prec(20, seq($.preamble, $.main, $.postamble)),
// 16  :  escaped: $ => prec(16,seq('\\', $.escapechar)),
// 14  :  settings_block: $ => prec(14,seq("[",sepBy($.setting, ','),"]")),
// 12  :  option_block: $ => prec(12, seq("[",sepBy($.keyword, ','),"]")),
// 10  :  inline_math: $ => prec(10,seq('$', repeat1($._math_content), '$')),
// r   :   command: $ => prec.right(

// # HELPERS
//
// Special characters in the ConTeXt markup language.
// Note: in the following array, the escaped backslash _must_ be the last character (ug)
var escaped_chars = ["#", "$", "%", "&", "^", "_", "{", "}", "|", "~", "\\"];

// Possibly useful helper functions?
// Cribbed from tree-sitter-latex
const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));
const sepBy = (rule, sep) => optional(sepBy1(rule, sep));

module.exports = grammar({
  name: "context",

  extras: ($) => [$._whitespace, $.line_comment],

  externals: ($) => [$._command_stop, $.paragraph_mark, $.text],

  word: ($) => $.command_name,

  rules: {
    // # DOCUMENT - An entire ConTeXt document.
    document: ($) =>
      choice(prec(20, seq($.preamble, $.main, $.postamble)), $.main),

    // # AREAS
    //
    // Preamble --- commands and comments
    preamble: ($) =>
      seq(repeat($._content), choice("\\starttext", "\\startcomponent")),

    // Main --- text, commands, comments
    main: ($) => repeat1($._content),

    // Postamble --- text, commands, comments
    postamble: ($) =>
      seq(choice("\\stoptext", "\\stopcomponent"), repeat($._content)),

    // # CONTENT
    //
    _content: ($) =>
      choice(
        $.line_comment,
        $.command,
        $.brace_group,
        $.escaped,
        $.inline_math,
        $.command_group,
        $.text_block,
        $.html_inclusion,
        $.css_inclusion,
        $.luacode_inclusion,
        $.tikz_inclusion
      ),

    // # GROUPS

    // Brace Groups
    brace_group: ($) =>
      choice(
        seq("{", repeat($._content), "}"),
        seq("\\bgroup", repeat($._content), "}"),
        seq("{", repeat($._content), "\\egroup"),
        seq("\\bgroup", repeat($._content), "\\egroup")
      ),

    // Command Group

    // ConTeXt can also group document content between the commands "\start" and "\stop"
    command_group: ($) =>
      prec(10, seq(/\\start[^a-zA-Z]/, repeat($._content), /\\stop[^a-zA-Z]/)),

    // # INLINE MATH
    //
    // ConTeXt can handle inline math mode like TeX, marking the start and stop of math mode with a dollar sign ('$').
    // Brace groups ({}) are needed in inline math mode.

    math_group: ($) => seq("{", repeat($._math_content), "}"),

    _math_content: ($) =>
      choice($.line_comment, $.escaped, $.math_group, $.math_text),

    math_text: ($) => /[^${}]+/,

    inline_math: ($) => prec(10, seq("$", repeat1($._math_content), "$")),

    //FIXME: commands have have multiple scopes
    // # COMMANDS

    command: ($) =>
      prec.right(
        choice(
          seq(
            $.command_name,
            repeat(choice($.empty_block, $.option_block, $.settings_block)),
            optional($.command_scope),
            $._command_stop
          )
        )
      ),

    // ## Command Name
    command_name: ($) => /\\[@a-zA-Z:]+/,

    // ## Empty Block
    empty_block: ($) => choice("[]", seq("[", /\s*/, "]")),

    // ## Option Block
    option_block: ($) => prec(12, seq("[", sepBy($.keyword, ","), "]")),

    keyword: ($) => /[^\s=,\[\]]+/,

    // ## Settings Block
    settings_block: ($) => prec(14, seq("[", sepBy($._setting, ","), "]")),

    _setting: ($) =>
      choice($.generic_setting, $.title_setting, $.subtitle_setting),

    generic_setting: ($) => seq($.key, "=", $.value),

    title_setting: ($) => seq("title", "=", $.value),

    subtitle_setting: ($) => seq("subtitle", "=", $.value),

    key: ($) => /[^\s=,\[\]]+/,

    value: ($) => prec.right(repeat1($._value_content)),

    _value_content: ($) =>
      choice(
        $.line_comment,
        $.escaped,
        $.value_brace_group,
        $.value_text,
        $.command
      ),

    value_text: ($) => /[^\\{}\[\]\s,][^\\{}\[\],]*/,

    value_brace_group: ($) => seq("{", repeat($._value_content), "}"),

    // ## Scope
    command_scope: ($) => seq("{", repeat($._content), "}"),

    // # TEXT
    text_block: ($) => seq($.text, repeat(seq($.paragraph_mark, $.text))),

    // # ESCAPED CHARACTERS
    escaped_char: ($) => choice(...escaped_chars),

    escaped: ($) => prec.right(16, seq("\\", $.escaped_char)),

    // PARSED LANGUAGE INCLUSIONS
    //
    // This ConTeXt parser can inject parsing for other languages, as supported by tree-sitter.
    //
    // * MetaPost/Fun (marked, but parsing not yet supported)
    // * TiKz (marked, but parsing not yet supported)
    // * Lua
    // * HTML
    // * CSS
    //

    // Metafun/Post
    metapost_start: ($) =>
      choice(
        "\\startMPinclusions",
        "\\startuseMPgraphic",
        "\\startreusableMPgraphic",
        "\\startMPcode",
        "\\startMPpage",
        "\\startstaticMPfigure"
      ),

    metapost_stop: ($) =>
      choice(
        "\\stopMPinclusions",
        "\\stopuseMPgraphic",
        "\\stopreusableMPgraphic",
        "\\stopMPcode",
        "\\stopMPpage",
        "\\stopstaticMPfigure"
      ),

    metapost_body: ($) => /[^\\]*/,

    metapost_inclusion: ($) =>
      seq($.metapost_start, $.metapost_body, $.metapost_stop),

    // TiKz
    _tikz_start: ($) => "\\starttikzpicture",

    _tikz_stop: ($) => "\\stoptikzpicture",

    tikz_body: ($) => /[^\\]*/,

    tikz_inclusion: ($) => seq($._tikz_start, $.tikz_body, $._tikz_stop),

    // Lua
    _luacode_start: ($) => "\\startluacode",

    _luacode_stop: ($) => "\\stopluacode",

    luacode_body: ($) => /[^\\]*/,

    luacode_inclusion: ($) =>
      seq($._luacode_start, $.luacode_body, $._luacode_stop),

    //HTML
    _html_start: ($) => "\\startHTML",

    _html_stop: ($) => "\\stopHTML",

    html_body: ($) => /[^\\]*/,

    html_inclusion: ($) => seq($._html_start, $.html_body, $._html_stop),

    //CSS
    _css_start: ($) => "\\startCSS",

    _css_stop: ($) => "\\stopCSS",

    css_body: ($) => /[^\\]*/,

    css_inclusion: ($) => seq($._css_start, $.css_body, $._css_stop),

    // TYPING INCLUSIONS
    //
    // (A non-goal for this grammar is discovery of any user-generated typing inclusions.)
    typing_start: ($) =>
      prec(
        10,
        choice(
          "\\starttyping",
          "\\startLUA",
          "\\startMP",
          "\\startPARSEDXML",
          "\\startTEX",
          "\\startXML"
        )
      ),

    typing_stop: ($) =>
      prec(
        10,
        choice(
          "\\stoptyping",
          "\\stopLUA",
          "\\stopMP",
          "\\stopPARSEDXML",
          "\\stopTEX",
          "\\stopXML"
        )
      ),

    typing_body: ($) => /[^\\]*/,

    typing_inclusion: ($) =>
      prec(10, seq($.typing_start, $.typing_body, $.typing_stop)),

    // # EXTRAS

    _whitespace: ($) => /\s+/,

    line_comment: ($) => /%[^\r\n]*/,
  },
});
