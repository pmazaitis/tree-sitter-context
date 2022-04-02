// Note: the escaped backslash _must_ be the last character in this array (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

module.exports = grammar({
  name: 'context',

  extras: $ => [/[ \t\n\s]/],

  externals: $ => [
    $.command_stop
  ],

  rules: {
    // The production rules of the context-free grammar for the ConTeXt markup language

    // GENERAL DOCUMENT CONTENT
    
    document: $ => repeat1($._content),
    
    _content: $ => choice($.comment, $.escaped, $.brace_group, $.inline_math, $.text, $.command, $.command_group, $._newline, $.main_start, $.main_stop),


    // AREA MARKERS
    //
    // These ConTeXt commands divide the context file into areas:
    //   - Preamble (interpreted commands, but content is not displayed)
    //   - Main (Content is displayed)
    //   - Postamble (Everything is ignored by the processor)
       
    main_start: $ => prec(20, choice("\\starttext","\\startcomponent")), 
    
    main_stop: $ => prec(20, choice("\\stoptext","\\stopcomponent")),   
    
        
    // COMMENTS
    
    // TODO: tokenize multi-line comments?
    
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
  
    // COMMAND GROUP
    //
    // ConTeXt can also group document content between the commands "\start" and "\stop"
    
    command_group: $ => prec(10, seq(/\\start[^a-zA-Z]/, repeat($._content), /\\stop[^a-zA-Z]/)),
    

    // INLINE MATH
    //
    // ConTeXt can handle inline math mode like TeX, marking the start and stop of math mode with a dollar sign ('$').
    // Brace groups ({}) are needed in inline math mode.
    
    math_group: $ => seq("{", repeat($._math_content), "}"),
    
    _math_content: $=> choice($.comment, $.escaped, $.math_group, $.math_text),
    
    math_text: $ => /[^${}]+/,
  
    inline_math: $ => prec(10,seq('$', repeat1($._math_content), '$')),

    
    // COMMANDS
    
    // For this parser, we'll use the following labels: option blocks of keywords, and settings blocks of key/value pairs.
    //
    // An _option block_ is a square bracket delimited set of none or more keywords, separated by commas. 
    // A _keyword_ is a switch to modify command behavior. Keywords may contain spaces.
    //
    // A _settings block_ is a square bracket delimited set of none or more key/value pairs, separated by commas (",").
    // A key/value pair is separated by an equals sign ("="). Keys may not have spaces in them. Values can be grouped
    // with curly braces.
    //
    // Arbitrary whitespace can occur between a command name and any options or settings blocks _except_ for a sequence of
    // two or more EOLs. Two EOLs in sequence terminate the command. Anything other than whitespace will also terminate 
    // the command at that point.
    
    
    // Command names cannot contain numbers
    command_name: $ => /[a-zA-Z]+/,
    
    // Option block
    optionblock: $ => prec(
                        12, 
                         seq(
                            '[', 
                            optional(
                              seq(
                                $.keyword, 
                                optional(
                                  repeat(
                                    seq(
                                      ',', 
                                      // optional(/\s+/), 
                                      $.keyword, 
                                      // optional(/\s+/),
                                    )
                                  )
                                )
                              )
                            ), 
                            optional(','), 
                            ']'
                          )
                        ),
     
    keyword: $ =>  /[^=,\[\]]+/,
     
    // Settings block
    settingsblock: $ => prec(
                          14, 
                          seq(
                            '[', 
                            optional(
                              seq($.setting, 
                                optional(
                                  repeat(
                                    seq(
                                      ',', 
                                      optional(/\s+/), 
                                      $.setting, 
                                      optional(/\s+/),
                                    )
                                  )
                                )
                              )
                            ), 
                            optional(','), 
                            ']'
                            )
                          ),
    
    setting: $ => seq($.key, '=', optional($.value)),
    
    key: $ => /[^=,\[\]]+/,
    
    value: $ => repeat1($._value_content),
    
    _value_content: $ => choice($.comment, $.escaped, $.value_brace_group, $.value_text, $.command, $._newline),
    
    value_text: $ => /[^\\{}\[\]\s,][^\\{}\[\],]*/,
    
    value_brace_group: $ => seq("{", repeat($._value_content), "}"),
        
    // The complete command rule
    command: $ => prec.right(
                    10, 
                      seq(
                        '\\', 
                        $.command_name,
                        optional(
                          repeat(
                            choice(
                              $.optionblock, 
                              $.settingsblock, 
                            )
                          )  
                        ),
                        $.command_stop,
                      )
                    ),
    
    // TEXT CONTENT
    
    // We have to double the slashes at the end of the regexp to account for the under-interpolation of escape in this context
    text: $ => new RegExp('[^\\]\\['+escaped_chars.slice(1).join('')+'\\]+'),
  
    _newline: $ => prec(10, '\n'),
        
    _end_of_line: $ =>  prec(10, choice('\n', '\r', '\r\n')),   
        
  },
  
  // conflicts: $ => [
  //   [$.preamble, $.main_none]
  // ]
});
