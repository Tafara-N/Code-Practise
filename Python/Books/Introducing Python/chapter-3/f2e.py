#!/usr/bin/env python3

"""
Make a French-to-English dictionary called `f2e` from `e2f`.

Use the `items` method

"""

from rich import print_json


e2f: dict[str, str] = {
    "dog": "chien",
    "cat": "chat",
    "walrus": "morse",
}

f2e: dict[str, str] = {
    french: english for english, french in e2f.items()
}

print_json(data=f2e)
