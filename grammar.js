// tree-sitter-context
//
// Tree-Sitter parser for the ConTeXt markup language (https://www.contextgarden.net/)

// PROGRESS
//
// ## Cases to handle
//
// [PASS] Areas
// [PASS] Commands
// [PASS] Scopes
// [PASS] Text
// [PASS] Paragraph Markers
// [PASS] Brace Groups
// [PASS] Command groups (/start and /stop)
// [PASS] Escaped Characters
// [PASS] Comments
// [PASS] Inline Math
// [PASS] Component Name (component ID required)
// [PASS] Project Command
// [PASS] Product Command
// [PASS] Environment Command
// [PASS] Macro Arguments
// [PASS] Scratch Commands
// [    ]
//
// ## Injected Languages
// [PASS] MetaPost/Fun (no parsing support)
// [PASS] TiKz (no parsing support)
// [PASS] Lua
//
// ## Injected languages for Typing Environments
// [PASS] Plain
// [PASS] HTML
// [PASS] CSS
// [PASS] MP
// [PASS] Lua
// [PASS] XML/UNPARSEDXML
// [PASS] Unparsed
//
// # Work list
//
// * External scanner whitespace? (ask on github?)
// * put explicit boundary markers back for highlighting?
//
// # PRECEDENCE LIST FOR REFERENCE
//
// 20  :  document: ($) => choice(prec(20, seq($.preamble, $.main, $.postamble))),
// 16r :  escaped: ($) => prec.right(16,seq('\\', $.escapechar)),
// 14  :  settings_block: ($) => prec(14,seq("[",($.setting, ','),"]")),
// 12  :  option_block: ($) => prec(12, seq("[",($.keyword, ','),"]")),
// 10  :  inline_math: ($) => prec(10,seq('$', repeat1($._math_content), '$')),
// 10  :  command_group: ($) => prec(10, seq(/\\start[^a-zA-Z]/, repeat($._content), /\\stop[^a-zA-Z]/)),
// r   :  command: ($) => prec.right(choice(seq($.command_name,repeat(choice($.empty_block, $.option_block, $.settings_block)),repeat($.command_scope),$._command_stop))),
// r   :  value: ($) => prec.right(repeat1($._value_content)),

// # HELPERS
//
// Special characters in the ConTeXt markup language.
// Note: in the following array, the escaped backslash _must_ be the last character (ug)
var escaped_chars = ["#", "$", "%", "&", "^", "_", "{", "}", "|", "~", "\\"];

module.exports = grammar({
  name: "context",

  extras: ($) => [$._whitespace, $.line_comment],

  externals: ($) => [
    $._command_stop,
    $._scopes_stop,
    $.paragraph_mark,
    $.text,
    $.code_MPinclusions_body,
    $.code_useMPgraphic_body,
    $.code_reusableMPgraphic_body,
    $.code_MPcode_body,
    $.code_MPpage_body,
    $.code_staticMPfigure_body,
    $.code_tikz_body,
    $.code_lua_body,
    $.typing_html_body,
    $.typing_css_body,
    $.typing_mp_body,
    $.typing_lua_body,
    $.typing_xml_body,
    $.typing_parsedxml_body,
    $.typing_tex_body,
    $.typing_unnamed_body,
  ],

  // word: ($) => $.command_name,

  rules: {
    // # DOCUMENT - An entire ConTeXt document.
    document: ($) =>
      choice(prec(20, seq($.preamble, $.main, $.postamble)), $.main),

    // # AREAS
    //
    // Preamble --- commands and comments
    preamble: ($) =>
      seq(
        repeat($._content),
        choice(
          alias($.start_text, $.content_start),
          seq(
            alias($.start_component, $.content_start),
            /[ \t]*/,
            choice($.component_id, seq("[", $.component_id, "]"))
          )
        )
      ),

    component_id: ($) => /[a-zA-Z*][a-zA-Z0-9:_-]*/,

    start_text: ($) => "\\starttext",

    start_component: ($) => "\\startcomponent",

    // Main --- text, commands, comments
    main: ($) => repeat1($._content),

    // Postamble --- text, commands, comments
    postamble: ($) =>
      seq(choice(alias($.stop_text, $.content_end), alias($.stop_component, $.content_end)), repeat($._content)),

    stop_text: ($) => "\\stoptext",

    stop_component: ($) => "\\stopcomponent",


    // # CONTENT
    //
    _content: ($) =>
      choice(
        $.line_comment,
        $.environment,
        $.command,
        $.macro_argument,
        $.brace_group,
        $.escaped,
        $.inline_math,
        $.command_group,
        $.text_block,
        $.luacode_inclusion,
        $.tikzcode_inclusion,
        $.MPinclusions_inclusion,
        $.useMPgraphic_inclusion,
        $.reusableMPgraphic_inclusion,
        $.MPcode_inclusion,
        $.MPpage_inclusion,
        $.staticMPfigure_inclusion,
        $.typing_unnamed_inclusion,
        $.typing_mp_inclusion,
        $.typing_lua_inclusion,
        $.typing_html_inclusion,
        $.typing_css_inclusion,
        $.typing_xml_inclusion,
        $.typing_parsedxml_inclusion,
        $.project_command,
        $.product_command,
        $.environment_command,
        $.system_constant,
        $.constant_key,
        $.variable_value,
        $.multilingual_interface_constant,
        $.multilingual_interface_expansion_results,
        $.reserved_constant
      ),

    // INCLUDE, PROJECT and ENVIRONMENT COMMANDS
    //
    // These commands do _not_ require braces to grab the next token as scope.

    project_command: ($) =>
      seq(
        /\\project[ \t]*/,
        choice(
          alias($.keyword, $.project_id),
          seq("[", alias($.component_id, $.project_id), "]")
        )
      ),

    product_command: ($) =>
      seq(
        /\\product[ \t]*/,
        choice(
          alias($.keyword, $.product_id),
          seq("[", alias($.component_id, $.product_id), "]")
        )
      ),

    environment_command: ($) =>
      seq(
        /\\environment[ \t]*/,
        choice(
          alias($.keyword, $.environment_id),
          seq("[", alias($.component_id, $.environment_id), "]")
        )
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


    // # SCRATCH COMMANDS

    system_constant: ($) => prec.left(6, seq("\\s\!", $.system_constant_name)),

    system_constant_name: ($) => prec(6, /[a-zA-Z:]+/),

    constant_key: ($) => prec.left(6, seq("\\c\!", $.constant_key_name)),

    constant_key_name: ($) => prec(6, /[a-zA-Z:]+/),

    variable_value: ($) => prec.left(6, seq("\\v\!", $.variable_value_name)),

    variable_value_name: ($) => prec(6, /[a-zA-Z:]+/),

    multilingual_interface_constant: ($) => prec.left(6, seq("\\\?\?", $.multilingual_interface_constant_name)),

    multilingual_interface_constant_name: ($) => prec(6, /[a-zA-Z:]+/),

    multilingual_interface_expansion_results: ($) => prec.left(6, seq('\\\@\@', $.multilingual_interface_expansion_results_name)),

    multilingual_interface_expansion_results_name: ($) => prec(6, /[@a-zA-Z:]+/),

    reserved_constant: ($) => prec.left(6, seq("\\!!", $.reserved_constant_name)),

    reserved_constant_name: ($) => prec(6, /[a-zA-Z:]+/),

    // # ENVIRONMENTS

    // TODO - build a node for all command structures (settings, etc.) and
    //        then a separate node for content (if any)

    environment: ($) =>
      prec.right(6,
        seq(
          field('env_name', $.start_environment_name),
          repeat(choice($.empty_block, $.option_block, $.settings_block)),
          $._command_stop,
          repeat($._content),
          $.stop_environment_name,
        )
      ),

    start_environment_name: ($) => /\\start[a-zA-Z:]+/,

    stop_environment_name: ($) => /\\stop[a-zA-Z:]+/,


    // # COMMANDS

    command: ($) =>
      prec.right(
        choice(
          seq(
            field('cmd_name', $.command_name),
            repeat(choice($.empty_block, $.option_block, $.settings_block)),
            $._command_stop,
            optional(
              seq($.command_scope, repeat($.command_scope), $._scopes_stop)
            )
          )
        )
      ),

    // ## Command Name
    command_name: ($) => /\\[a-zA-Z:]+/,

    // ## Empty Block
    empty_block: ($) => /\[[ \t]*\]/,

    // ## Option Block
    option_block: ($) =>
      prec(
        12,
        seq(
          "[",
          optional(seq($.keyword, repeat(seq(",", $.keyword)))),
          optional(","),
          "]"
        )
      ),

    keyword: ($) => /[^\s=,\[\]]+/,

    // ## Settings Block
    settings_block: ($) =>
      prec(
        14,
        seq(
          "[",
          optional(seq($._setting, repeat(seq(",", $._setting)))),
          optional(","),
          "]"
        )
      ),

    _setting: ($) => choice($.setting, $.title_setting, $.subtitle_setting),

    setting: ($) => seq($.key, "=", optional($.value)),

    title_setting: ($) => prec(2, seq("title", "=", optional($.value))),

    subtitle_setting: ($) => prec(2, seq("subtitle", "=", optional($.value))),

    key: ($) => /[^\s=,\[\]]+/,

    value: ($) => prec.right(repeat1($._value_content)),

    _value_content: ($) =>
      choice(
        $.line_comment,
        $.escaped,
        $.value_brace_group,
        field('value_content_text', $.value_text),
        $.command
      ),

    value_text: ($) => /[^\\{}\[\]\s,][^\\{}\[\],]*/,

    value_brace_group: ($) =>
      seq("{", repeat($._value_brace_group_content), "}"),

    _value_brace_group_content: ($) =>
      choice(
        $.line_comment,
        $.escaped,
        $.value_brace_group,
        $.value_brace_group_text,
        $.command
      ),

    value_brace_group_text: ($) => /[^\\{}]+/,

    // ## Scope
    command_scope: ($) =>
      seq(optional($._end_of_line), "{", repeat($._content), "}"),

    // # MACROS
    //
    macro_argument: ($) => seq("#", /\d/),

    // # TEXT
    //
    text_block: ($) =>
      prec.right(
        seq(
          $.text,
          repeat(seq($.paragraph_mark, $.text)),
          optional($.paragraph_mark)
        )
      ),

    // # ESCAPED CHARACTERS

    escaped: ($) =>
      prec(
        16,
        choice(
          "\\%",
          "\\#",
          "\\$",
          "\\&",
          "\\^",
          "\\_",
          "\\{",
          "\\}",
          "\\|",
          "\\~",
          "\\\\"
        )
      ),

    // PARSED LANGUAGE INCLUSIONS
    //
    // This ConTeXt parser can inject parsing for included language code, as supported by tree-sitter.
    //
    // * MetaPost/Fun (marked, but parsing not yet supported by tree-sitter)
    // * TiKz (marked, but parsing not yet supported by tree-sitter)
    // * Lua
    //

    // Metafun/Post
    MPinclusions_inclusion: ($) =>
      seq(
        "\\startMPinclusions",
        $.code_MPinclusions_body,
        "\\stopMPinclusions"
      ),
    useMPgraphic_inclusion: ($) =>
      seq(
        "\\startuseMPgraphic",
        $.code_useMPgraphic_body,
        "\\stopuseMPgraphic"
      ),
    reusableMPgraphic_inclusion: ($) =>
      seq(
        "\\startreusableMPgraphic",
        $.code_reusableMPgraphic_body,
        "\\stopreusableMPgraphic"
      ),
    MPcode_inclusion: ($) =>
      seq("\\startMPcode", $.code_MPcode_body, "\\stopMPcode"),
    MPpage_inclusion: ($) =>
      seq("\\startMPpage", $.code_MPpage_body, "\\stopMPpage"),
    staticMPfigure_inclusion: ($) =>
      seq(
        "\\startstaticMPfigure",
        $.code_staticMPfigure_body,
        "\\stopstaticMPfigure"
      ),

    // TiKz
    tikzcode_inclusion: ($) =>
      seq("\\starttikzpicture", $.code_tikz_body, "\\stoptikzpicture"),

    // Lua
    luacode_inclusion: ($) =>
      seq("\\startluacode", $.code_lua_body, "\\stopluacode"),

    // TYPING INCLUSIONS
    //
    // This ConTeXt parser can inject parsing for typing environments, as supported by tree-sitter.
    //
    // * MetaPost/Fun (marked, but parsing not yet supported by tree-sitter)
    // * HTML
    // * CSS
    // * Lua
    // * XML
    // * PARSEDXML
    //
    // * TeX (marked, but tree-sitter support is tricky)
    // * Generic Typing Environment

    // HTML
    typing_html_inclusion: ($) =>
      seq("\\startHTML", $.typing_html_body, "\\stopHTML"),

    // CSS
    typing_css_inclusion: ($) =>
      seq("\\startCSS", $.typing_css_body, "\\stopCSS"),

    // MetaPost/Fun
    typing_mp_inclusion: ($) => seq("\\startMP", $.typing_mp_body, "\\stopMP"),

    // LUA
    typing_lua_inclusion: ($) =>
      seq("\\startLUA", $.typing_lua_body, "\\stopLUA"),

    // XML
    typing_xml_inclusion: ($) =>
      seq("\\startXML", $.typing_xml_body, "\\stopXML"),

    // PARSEDXML
    typing_parsedxml_inclusion: ($) =>
      seq("\\startPARSEDXML", $.typing_parsedxml_body, "\\stopPARSEDXML"),

    // TEX
    typing_tex_inclusion: ($) =>
      seq("\\startTEX", $.typing_tex_body, "\\stopTEX"),

    // UNNAMED TYPING ENVIRONMENT
    typing_unnamed_inclusion: ($) =>
      seq("\\starttyping", $.typing_unnamed_body, "\\stoptyping"),

    // # EXTRAS

    _whitespace: ($) => /\s+/,

    line_comment: ($) => /[^\\]?%[^\r\n]*/,

    _end_of_line: ($) => /\r\n?|\n/,
  },
});
