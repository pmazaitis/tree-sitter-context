// tree-sitter-context
//
// Tree-Sitter parser for the ConTeXt markup language (https://www.contextgarden.net/)


// PROGRESS
//
// ## Cases to handle
// 
// [x] Areas
// [x] Commands
// [ ] Text
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

// ## Injected languages for Typing Environments
// [ ] Plain
// [ ] HTML
// [ ] CSS
// [ ]


// # PRECEDENCE LIST
//
// 20  :  (document choice) prec(20, seq($.preamble, $.main, $.postamble)),
// 18  :  _preamble_content: $ => prec(18,
// 16  :  escaped: $ => prec(16,seq('\\', $.escapechar)),  
// 14  :  settings_block: $ => prec(14,seq("[",sepBy($.setting, ','),"]")),
// 12  :  option_block: $ => prec(12, seq("[",sepBy($.keyword, ','),"]")), 
// 10  :  inline_math: $ => prec(10,seq('$', repeat1($._math_content), '$')),  
// r   :   command: $ => prec.right(


// # HELPERS
//
// Special characters in the ConTeXt markup language.
// Note: in the following array, the escaped backslash _must_ be the last character (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

// Possibly useful helper functions?
// Cribbed from tree-sitter-latex
const sepBy1 = (rule, sep) => seq(rule, repeat(seq(sep, rule)));
const sepBy = (rule, sep) => optional(sepBy1(rule, sep)); 


module.exports = grammar({
  name: 'context',
  
  extras: $ => [
    $._whitespace, 
    $.line_comment
  ],
  
  externals: $ => [
    $._command_stop,
    $._paragraph_stop,
  ],

  word: $ => $.command_name,

  rules: {
    // # DOCUMENT - An entire ConTeXt document. 
    document: $ => choice(
      prec(20, seq($.preamble, $.main, $.postamble)),
      $.main,
    ),
    
    
    // # CONTENT CONTEXTS
    //
    // Content allowed in different parts of the document
    // TODO: refactor when things are stable
    _preamble_content: $ => prec(18,
      choice(
        $.command,
        $.line_comment,
        $.escaped,
      ),
    ),
    
    _main_content: $ => choice(
      $.line_comment,
      $.command,
      $.brace_group,
      $.escaped,
      $.inline_math,
      $.command_group, 
      // $.text,
    ),
    
    _postamble_content: $ =>  choice(
      $.command,
      $.line_comment,
      $.escaped,
      $.brace_group,
      $.inline_math,
      $.command_group,
      // $.text,
    ),
    
    _group_content: $ => choice(
      $.command,
      $.line_comment,
      $.brace_group,
      $.escaped,
      $.inline_math,
      $.command_group,
      // $.text,
    ),

    
    _command_scope_content: $ => /[^}]*/,
    
    // # AREAS
    //
    // Preamble --- commands and comments
    preamble: $ =>  seq(
      repeat($._preamble_content), 
      choice("\\starttext", "\\startcomponent"),
    ),
    
    // Main --- text, commands, comments
    main: $ => repeat1($._main_content),
  
    // Postamble --- text, commands, comments
    postamble: $ => seq(
      choice("\\stoptext", "\\stopcomponent"),
      repeat($._postamble_content), 
    ),
    
    
    // # GROUPS

    // Brace Groups
    brace_group: $ => choice(
      seq("{", repeat($._group_content), "}"),
      seq("\\bgroup", repeat($._group_content), "}"),
      seq("{", repeat($._group_content), "\\egroup"),
      seq("\\bgroup", repeat($._group_content), "\\egroup"),
    ),
  
    // Command Group
  
    // ConTeXt can also group document content between the commands "\start" and "\stop"    
    command_group: $ => prec(10, seq(/\\start[^a-zA-Z]/, repeat($._group_content), /\\stop[^a-zA-Z]/)),
  
    
    // # INLINE MATH
    //
    // ConTeXt can handle inline math mode like TeX, marking the start and stop of math mode with a dollar sign ('$').
    // Brace groups ({}) are needed in inline math mode.
    
    math_group: $ => seq("{", repeat($._math_content), "}"),
    
    _math_content: $=> choice($.line_comment, $.escaped, $.math_group, $.math_text),
    
    math_text: $ => /[^${}]+/,
    
    inline_math: $ => prec(10,seq('$', repeat1($._math_content), '$')),
    
        
    // # COMMANDS
    
    command: $ => prec.right(
      choice(
        seq(
          $.command_name,
          repeat(
            choice(
              $.empty_block,
              $.option_block,
              $.settings_block,
            )
          ),
          optional($.command_scope),
          $._command_stop,
        ),
      )
    ),
    
    // ## Command Name
    command_name: $ => /\\[@a-zA-Z:]+/,
    
    // ## Empty Block
    empty_block: $ => choice(
      "[]",
      seq("[" ,/\s*/, "]"),
    ),
    
    // ## Option Block         
    option_block: $ => prec(12, seq("[",sepBy($.keyword, ','),"]")), 
     
    keyword: $ =>  /[^\s=,\[\]]+/,
    
    // ## Settings Block
    settings_block: $ => prec(14,seq("[",sepBy($._setting, ','),"]")),
    
    _setting: $ => choice(
      $.generic_setting,
      $.title_setting,
      $.subtitle_setting,
    ),
    
    generic_setting: $ => seq($.key, '=', $.value),
    
    title_setting: $ => seq("title", "=", $.value),
    
    subtitle_setting: $ => seq("subtitle", "=", $.value),
    
    key: $ => /[^\s=,\[\]]+/,
    
    value: $ => prec.right(repeat1($._value_content)),
    
    _value_content: $ => choice($.line_comment, $.escaped, $.value_brace_group, $.value_text, $.command),
    
    value_text: $ => /[^\\{}\[\]\s,][^\\{}\[\],]*/,
    
    value_brace_group: $ => seq("{", repeat($._value_content), "}"),
    
    // ## Scope
    command_scope: $ => seq("{", repeat($._command_scope_content), "}" ),
    
    // # TEXT
    // text: $ => new RegExp('[^\\]\\['+escaped_chars.slice(1).join('')+'\\]+'),   
    // text: $ => /[^\^#$%&_{}|~\\]+/,
    
    
    // # ESCAPED CHARACTERS
    escaped_char: $ => choice(...escaped_chars),
    
    escaped: $ => prec.right(16,seq('\\', $.escaped_char)),
    
    
    // # EXTRAS
    
    _whitespace: $ => /\s+/,
    
    line_comment: $ => /[^\\]%[^\r\n]*/,
         
  },
});
