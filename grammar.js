// Note: the escaped backslash _must_ be the last character in this array (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

module.exports = grammar({
  name: 'ConTeXt',

  rules: {
    // The production rules of the context-free grammar for the ConTeXt markup language

    // GENERAL DOCUMENT CONTENT
    
    document: $ => repeat1($._content),
    
    _content: $ => choice($.comment, $.escaped, $.brace_group, $.inline_math, $.text, $.command, $._newline, $.main_start, $.main_stop),


    // AREA MARKERS
    //
    // This ConTeXt commands divide the context file into:
    //   - Preamble (interpreted commands, but content is not displayed)
    //   - Main (Content is displayed)
    //   - Postamble (Everything is ignored by the processor)
       
    main_start: $ => prec(20, choice("\\starttext","\\startcomponent")), 
    
    main_stop: $ => prec(20, choice("\\stoptext","\\stopcomponent")),   
    
        
    // COMMENTS
    
    comment: $ => prec(10, token(seq('%', /.*/))),


    // ESCAPED CHARACTERS

    escapechar: $ => choice(...escaped_chars),

    escaped: $ => prec(10, seq('\\', $.escapechar)),


    // BRACE GROUP
    //  
    // This grouping class can accept either a '{' or a '\bgroup' to start the group, and a '}' or a '\egroup' to end the group. They do not need to match.
      
    brace_group: $ => prec(10, choice( 
      seq("{", repeat($._content), "}"), 
      seq("{", repeat($._content), "\\egroup"), 
      seq("\\bgroup", repeat($._content), "}"), 
      seq("\\bgroup", repeat($._content), "\\egroup")
    )),
  
  
    // INLINE MATH
    //
    // ConTeXt can handle inline math mode like TeX, marking the start and stop of math mode with a dollar sign ('$').
    // Brace groups ({}) are needed in inline math mode.
    
    math_group: $ => seq("{", repeat($._math_content), "}"),
    
    _math_content: $=> choice($.comment, $.escaped, $.math_group, $.math_text),
    
    math_text: $ => /[^${}]+/,
  
    inline_math: $ => prec(10,seq('$', repeat1($._math_content), '$')),
    
    // This one works!
    // math: $ => prec(10, seq('$', /[^$]*/, '$')),
    
    
    // COMMANDS
    
    command: $ => prec(10, seq('\\', $.command_name, repeat(seq(optional(/\s+/), $.optionblock)), optional(/\s+/))),
    
    command_name: $ => /[a-zA-Z]+/,
    
    optionblock: $ =>  prec(10, seq('[', optional(seq($._options, optional(repeat(seq(',', optional(/\s+/), $._options))))), optional(','), ']')),
     
    _options: $ => seq($.opkey, optional(seq('=', optional($.opval)))),
    
    opkey: $ =>  /[^=,\[\] ]+/,
            
    opval: $ => repeat1($._opcontent),
    
    _opcontent: $ => choice($.comment, $.escaped, $.brace_group, $.optext, $.command, $._newline),

    optext: $ => /[^\\{}\[\]\s,][^\\{}\[\],]*/,
    
    
    // TEXT CONTENT
    
    // We have to double the slashes at the end of the regexp to account for the under-interpolation of escape in this context
    text: $ => new RegExp('[^\\]\\['+escaped_chars.slice(1).join('')+'\\]+'),
  
    _newline: $ => prec(10, '\n'),
    
    _extras: $ => choice(" ", "\t", "\n"),
    
  },
  
  // conflicts: $ => [
  //   [$.preamble, $.main_none]
  // ]
});
