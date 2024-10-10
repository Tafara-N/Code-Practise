#!/usr/bin/env python3

"""
Using your three-word dictionary `e2f`, print the French word for `walrus`

"""

from rich import print_json


e2f: dict[str, str] = {
    "dog": "chien",
    "cat": "chat",
    "walrus": "morse",
}

print_json(data=e2f["walrus"])
