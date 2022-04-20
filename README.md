# tree-sitter-context_en

## Description

`tree-sitter-context_en` is a [Tree-Sitter](https://tree-sitter.github.io/tree-sitter/) parser for the [ConTeXt](https://www.contextgarden.net) document preparation system.

This parser supports:

- Parsing ConTeXt files into a concrete syntax tree of tokens (text, commands, command parts, etc.)
- Marking inclusions of other languages to be handled by other tree-sitter parsers (for example, Lua code in a `.tex` file can be handled by [`tree-sitter-lua`](https://github.com/Azganoth/tree-sitter-lua), if installed)
- Syntax highlighting using the syntax tree

This parser should work with tools (editors, formatters) that can work with Tree-Sitter parsers. The Tree-Sitter system also supports several language bindings for building custom tools.

## Installation

Clone or download the repository to local disk.

This Tree-Sitter parser should also be available via `npm` if that's a viable alternative.

Some tools only require a URL to the repository; they will download and install the parser as needed.

## Use

This Tree-Sitter parser works with tools that Support Tree-Sitter parsers in general.

The [`tree-sitter-cli`](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md) command can be used for testing parsing and highlighting.

Tree-Sitter supports language bindings for building custom tools.

## Contributing

Features and updates cheerfully considered via pull request. Please include tests for any new features, and make sure all the tests in the test suite pass.

Bug reports cheerfully accepted (especially with areas of ConTeXt less well-served by this parser!). Please use issues to report bugs. Please include as much as possible to make the bug approachable in the report: minimal examples, logs, and especially expectations are all helpful.

As the name implies, `tree-sitter-context_en` is a parser for the English interface to ConTeXt. This repo can be used as a starting point to produce new parsers to other language interfaces to ConTeXt, but this repo is not meant to be extended to handle more than one language.

## Caveats and Bugs

### Bugs

Oh, probably lots. :)

### Quirks

The parser accepts non-compliant syntax in the argument for project structure commands.

Due to how command and scope endings are handled, this parser includes a bunch of empty text nodes in the tree (WIP).

## Support

If you have a question, _please raise a GitHub issue_ (or a discussion topic).

If you have a bug report, _please raise a GitHub issue_. Anything that you can offer to make the bug reproducible and/or understandable is gratefully accepted.

_I am a hobbyist software developer._ I want to improve this software (not for the least of reasons that I want my ConTeXt environment to be better!), but I can't guarantee that I will always have the time and energy to do so. Best efforts, and onward!

## Credits

The [`tree-sitter-latex`](https://github.com/latex-lsp/tree-sitter-latex) parser was an enormous help in navigating the development of an external scanner.

## License

MIT License (https://opensource.org/licenses/MIT)

Copyright 2022 Paul Mazaitis

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
