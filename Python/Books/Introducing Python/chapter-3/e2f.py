#!/usr/bin/env python3

"""
Make an English-to-French dictionary called `e2f` and print it.

Here are your starter words:
`dog` is `chien`, `cat` is `chat`, and `walrus` is `morse`

"""

from rich import print_json


e2f: dict[str, str] = {
    "dog": "chien",
    "cat": "chat",
    "walrus": "morse",
}

print_json(data=e2f)
