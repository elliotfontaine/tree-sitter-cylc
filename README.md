# tree-sitter-cylc

[![CI](https://img.shields.io/github/actions/workflow/status/elliotfontaine/tree-sitter-cylc/ci.yml?logo=github&label=CI)][ci]
[![pypi](https://img.shields.io/pypi/v/tree-sitter-cylc?logo=pypi&logoColor=ffd242)][pypi]
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)][license]

A [Tree-Sitter][repo-tree-sitter] grammar for [Cylc][repo-cylc]'s workflow configurations.

## References

- [The `.cylc` File Format][docs-cylc-format]
- [Workflow Configuration][docs-workflow-config]
- [Global Configuration][docs-global-config]

## Syntax Highlighting

As a grammar, tree-sitter-cylc can be used to generate syntax highlighting for Cylc files in text
editors that support Tree-Sitter. [`/queries/highlights.scm`][query-highlights] and
[`/queries/injections.scm`][query-injections] can be used as a template to write queries
for your target editor.

#### Supported Editors:

- [Zed][zed] — ✅[`zed-cylc`][repo-zed-cylc]
- [Neovim][neovim], [Helix][helix], [Lapce][lapce], [Pulsar][pulsar] and [GNU Emacs][emacs].

## Python Bindings

tree-sitter-cylc is available as a package on [PyPi][pypi]. You
can install it through pip as follows:

```sh
pip install tree-sitter tree-sitter-cylc
```

You can then use the **tree_sitter_cylc** module to parse Cylc files from Python:

```python
import tree_sitter_cylc as tscylc
from tree_sitter import Language, Parser

CYLC_LANGUAGE = Language(tscylc.language())
parser = Parser(CYLC_LANGUAGE)

source_code = str(
    """
[runtime]
    [[task_1]]
        script = echo "Hello, World!"
"""
)

tree = parser.parse(bytes(source_code, "utf8"))

root_node = tree.root_node
runtime_section = root_node.children[0]
task_section = runtime_section.children[3]
setting = task_section.children[3]
value = setting.child_by_field_name("value")

assert root_node.type == "workflow_configuration"
assert root_node.start_point == (0, 0)
assert root_node.end_point == (4, 0)
assert runtime_section.type == "runtime_section"
assert task_section.type == "task_section"
assert setting.type == "setting"
assert value.type == "unquoted_string"
```

See [Tree-Sitter's Python bindings][docs-python-bindings]
documentation for more information.

## Contributing

Contributions, bug reports, and suggestions are welcome! Please submit a pull request or file an issue on
the [GitHub repository][repo-tree-sitter-cylc].

## License

This project is licensed under the MIT License. See [LICENSE][license] for details.

<!-- Links -->

[ci]: https://github.com/elliotfontaine/tree-sitter-cylc/actions/workflows/ci.yml
[pypi]: https://pypi.org/project/tree-sitter-cylc/
[license]: https://github.com/elliotfontaine/tree-sitter-cylc/blob/main/LICENSE
[query-highlights]: https://github.com/elliotfontaine/tree-sitter-cylc/blob/main/queries/highlights.scm
[query-injections]: https://github.com/elliotfontaine/tree-sitter-cylc/blob/main/queries/injections.scm
[repo-tree-sitter]: https://github.com/tree-sitter/tree-sitter
[repo-tree-sitter-cylc]: https://github.com/elliotfontaine/tree-sitter-cylc
[repo-cylc]: https://github.com/cylc/cylc-flow
[docs-cylc-format]: https://cylc.github.io/cylc-doc/stable/html/reference/config/file-format.html
[docs-workflow-config]: https://cylc.github.io/cylc-doc/stable/html/reference/config/workflow.html
[docs-global-config]: https://cylc.github.io/cylc-doc/stable/html/reference/config/global.html
[docs-python-bindings]: https://github.com/tree-sitter/py-tree-sitter?tab=readme-ov-file#usage
[zed]: https://zed.dev/
[repo-zed-cylc]: https://github.com/elliotfontaine/zed-cylc
[neovim]: https://neovim.io/
[helix]: https://helix-editor.com/
[lapce]: https://lapce.dev/
[pulsar]: https://pulsar-edit.dev/
[emacs]: https://www.gnu.org/software/emacs/
