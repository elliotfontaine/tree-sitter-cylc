## Queries

`highlights.scm`: exemple query to implement syntax highlighting.
`njections.scm`: exemple query to implement code injection for bash.

⚠️ Note that tree-sitter queries are usually non-portable because the capture tags (e.g. `@text.literal`) are defined by the extension API of each IDE, not the parser. The ones given here are for Zed.
