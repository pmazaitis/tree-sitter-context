// Note: the escaped backslash _must_ be the last character in this array (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

module.exports = grammar({
  name: 'ConTeXt',

  rules: {
    // The production rules of the context-free grammar for the ConTeXt markup language

    // GENERAL DOCUMENT CONTENT
    
    document: $ => repeat1($._content),
    
    _content: $ => choice($.comment, $.escaped, $.brace_group, $.math_group, $.text, $.command, $._newline, $.main_start, $.main_stop),


    // AREA MARKERS
    //
    // This ConTeXt commands divide the context file into:
    //   - Preamble (interpreted commands, but content is not displayed)
    //   - Main (Content is displayed)
    //   - Postamble (Everything is ignored by the processor)
       
    main_start: $ => prec(2, choice("\\starttext","\\startcomponent")), 
    
    main_stop: $ => prec(2, choice("\\stoptext","\\stopcomponent")),   
    
        
    // COMMENTS
    
    comment: $ => prec(1, token(seq('%', /.*/))),


    // ESCAPED CHARACTERS

    escapechar: $ => choice(...escaped_chars),

    escaped: $ => prec(1, seq('\\', $.escapechar)),


    // BRACE GROUP
    //  
    // This grouping class can accept either a '{' or a '\bgroup' to start the group, and a '}' or a '\egroup' to end the group. They do not need to match.
      
    brace_group: $ => prec(1, choice( 
      seq("{", repeat($._content), "}"), 
      seq("{", repeat($._content), "\\egroup"), 
      seq("\\bgroup", repeat($._content), "}"), 
      seq("\\bgroup", repeat($._content), "\\egroup")
    )),
  
  
    // MATH GROUP
    //
    // ConTeXt can handle inline math mode like TeX, marking the start and stop of math mode with a dollar sign ('$').
    // Brace groups ({}) are important to handle in inline mat hmode.
    
    math_brace_group: $ => prec(1, seq("{", repeat($._math_content), "}")),
    
    // _math_content: $=> choice($.comment, $.escaped, $.math_brace_group, $.math_text, $._newline),
    
    _math_content: $=> choice($.math_text),
    
    math_group: $ => prec(1, seq('$', repeat($._math_content), '$')),
    
    math_text: $ => /[^$]*/g,
    
    
    // COMMANDS
    
    command: $ => prec(1, seq('\\', $.command_name, repeat(seq(optional(/\s+/), $.optionblock)), optional(/\s+/))),
    
    command_name: $ => /[a-zA-Z]+/,
    
    optionblock: $ =>  prec(1, seq('[', optional(seq($._options, optional(repeat(seq(',', optional(/\s+/), $._options))))), optional(','), ']')),
     
    _options: $ => seq($.opkey, optional(seq('=', optional($.opval)))),
    
    opkey: $ =>  /[^=,\[\] ]+/,
            
    opval: $ => repeat1($._opcontent),
    
    _opcontent: $ => choice($.comment, $.escaped, $.brace_group, $.optext, $.command, $._newline),

    optext: $ => /[^\\{}\[\]\s,][^\\{}\[\],]*/,
    
    
    // TEXT CONTENT
    
    // We have to double the slashes at the end of the regexp to account for the under-interpolation of escape in this context
    text: $ => new RegExp('[^\\]\\['+escaped_chars.slice(1).join('')+'\\]+'),
  
    _newline: $ => prec(1, '\n'),
    
    _extras: $ => choice(" ", "\t", "\n"),
    
  },
  
  // conflicts: $ => [
  //   [$.preamble, $.main_none]
  // ]
});
