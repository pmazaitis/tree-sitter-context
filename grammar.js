// Note: the escaped backslash _must_ be the last character in this array (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

module.exports = grammar({
  name: 'ConTeXt',

  rules: {
    // The production rules of the context-free grammar for the ConTeXt markup language

    document: $ => repeat1($._content),
    
    // AREA MARKERS
       
    main_start: $ => prec(2, choice("\\starttext","\\startcomponent")), 
    
    main_stop: $ => prec(2, choice("\\stoptext","\\stopcomponent")),   
       
    // CONTENT COLLECTIONS
    
    _content: $ => choice($.comment, $.escaped, $.brace_group, $.math_group, $.text, $.command, $._newline, $.main_start, $.main_stop),
    
    _opcontent: $ => choice($.comment, $.escaped, $.brace_group, $.optext, $.command, $._newline),

    // _math_content: $=> choice($.comment, $.escaped, $.math_brace_group, $.math_text, $._newline),
    _math_content: $=> choice($.math_text),

    // COMMENTS
    
    comment: $ => prec(1, token(seq('%', /.*/))),

    // ESCAPED CHARACTERS

    escapechar: $ => choice(...escaped_chars),

    escaped: $ => prec(1, seq('\\', $.escapechar)),

    // GROUPS
    
    // brace_group: $ => prec(1, seq("{", repeat($._content), "}")),
    
    math_brace_group: $ => prec(1, seq("{", repeat($._math_content), "}")),
    
    brace_group: $ => prec(1, choice( seq("{", repeat($._content), "}"), seq("{", repeat($._content), "\\egroup"), seq("\\bgroup", repeat($._content), "}"), seq("\\bgroup", repeat($._content), "\\egroup"))),
    
    // math_brace_group: $ => prec(1, choice( seq("{", repeat($._math_content), "}"), seq("{", repeat($._math_content), "\\egroup"), seq("\\bgroup", repeat($._math_content), "}"), seq("\\bgroup", repeat($._math_content), "\\egroup"))),
    
    math_group: $ => prec(1, seq('$', repeat($._math_content), '$')),
    
    
    // COMMANDS
    
    command: $ => prec(1, seq('\\', $.name, repeat(seq(optional(/\s+/), $.optionblock)), optional(/\s+/))),
    
    optionblock: $ =>  prec(1, seq('[', optional(seq($._options, optional(repeat(seq(',', optional(/\s+/), $._options))))), optional(','), ']')),
     
    _options: $ => seq($.opkey, optional(seq('=', optional($.opval)))),
    
    opkey: $ =>  /[^=,\[\] ]+/,
            
    opval: $ => repeat1($._opcontent),
    
    // We have to double the slashes at the end of the regexp to account for the under-interpolation of escape in this context
    text: $ => new RegExp('[^\\]\\['+escaped_chars.slice(1).join('')+'\\]+'),
    
    optext: $ => /[^\\{}\[\]\s,][^\\{}\[\],]*/,
    
    math_text: $ => /[^$]*/,
    
    name: $ => /[a-zA-Z0-9]+/,
 
    _newline: $ => prec(1, '\n'),
    
    _extras: $ => choice(" ", "\t", "\n"),
    
  },
  
  // conflicts: $ => [
  //   [$.preamble, $.main_none]
  // ]
});
