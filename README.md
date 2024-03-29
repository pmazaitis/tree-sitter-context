# tree-sitter-context

## Description

`tree-sitter-context` is a [Tree-Sitter](https://tree-sitter.github.io/tree-sitter/) parser for the [ConTeXt](https://www.contextgarden.net) document preparation system.

This parser supports:

- Parsing ConTeXt files into a concrete syntax tree of tokens (text, commands, command parts, etc.)
- Preserving the hierarchy of ConTeXt environments in the tree
- Marking inclusions of other languages to be handled by other tree-sitter parsers (for example, Lua code in a `.tex` file can be handled by [`tree-sitter-lua`](https://github.com/Azganoth/tree-sitter-lua), if the appropriate parser is installed)
- Syntax highlighting using the syntax tree

This parser should work with tools (editors, formatters) that can work with Tree-Sitter parsers. The Tree-Sitter system also supports several language bindings for building custom tools.

## Installation

How you install `tree-sitter-context` depends on the tool you're using it with.

Some tools only require a URL to this repository, and will handle downloading and configuring the parser for their use.

Other tools require the repository to be cloned or downloaded to local disk by hand. Once the repository is local, it can be referenced by the tool (usually though a configuration setting).

## Use

This Tree-Sitter parser works with tools that support Tree-Sitter parsers in general.

Tree-Sitter driven syntax highlighting support is built into (at least!) these text editors (useful for a quick test or demo):

- Atom (https://atom.io)
- NeoVim (https://neovim.io)
- Helix (https://helix-editor.com)

...and can be enabled with a plugin for others (Virtual Studio Code, Nova, ...).

The [`tree-sitter-cli`](https://github.com/tree-sitter/tree-sitter/blob/master/cli/README.md) command line utility can be used for simple and direct testing of parsing and highlighting. (A [nice intro to `tree-sitter-cli` usage](https://dcreager.net/tree-sitter/getting-started/) is available.)

Setting up Tree-Sitter on your system may involve satisfying dependencies; see the Tree-Sitter documentation on [using parsers](https://tree-sitter.github.io/tree-sitter/using-parsers).

## Contributing

New features and updates cheerfully considered via pull request. Please include tests for any new features, and make sure all the tests in the test suite pass.

Bug reports cheerfully accepted (especially with areas of ConTeXt less well-served by this parser!). Please use issues to report bugs. Please include as much as possible to make the bug approachable in the report: minimal examples, logs, and especially expectations are all helpful.

## Caveats

### Bugs

Oh, probably lots. :)

### Limitations

For the moment, this parser does not play nicely with the `tree-sitter-latex` parser when deciding which parser should be used to handle a file with the extension `.tex` (resolving this is a WIP).

Experience with integrating this parser with editors has change the stance to localization: the idea of descrete parsers for langauge support has been abandoned. The next step is to have the parser recognize synonymous commands acrross the supported language interfaces, and conflate those down to specific nodes. 

### Quirks

Due to how command and scope endings are handled, this parser includes a bunch of empty text nodes in the tree (resolving this is a WIP).

## Support

If you have a question, [please raise a GitHub issue with your question using the question template](https://github.com/pmazaitis/tree-sitter-context_en/issues/new?assignees=&labels=&template=question.md&title=), or [start a discussion topic](https://github.com/pmazaitis/tree-sitter-context_en/discussions).

If you have a feature request, [please raise a GitHub issue with your question using the feature request template](https://github.com/pmazaitis/tree-sitter-context_en/issues/new?assignees=&labels=&template=feature_request.md&title=).

If you have a bug report, [please raise a GitHub issue using the bug report template](https://github.com/pmazaitis/tree-sitter-context_en/issues/new?assignees=&labels=&template=bug_report.md&title=). Anything that you can offer to make the bug reproducible and/or understandable is gratefully accepted.

_I am a hobbyist software developer._ I want to improve this software, but I can't guarantee that I will always have the time and energy to do so. Best efforts, and onward!

## Credits

The [`tree-sitter-latex`](https://github.com/latex-lsp/tree-sitter-latex) parser was an enormous help in navigating the development of an external scanner.

## License

MIT License (https://opensource.org/licenses/MIT)

Copyright 2022 Paul Mazaitis

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
