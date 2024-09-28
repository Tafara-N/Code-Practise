#!/usr/bin/env python3

"""
Make and print a set of English words from the keys in `e2f`

"""

e2f: dict[str, str] = {
    "dog": "chien",
    "cat": "chat",
    "walrus": "morse",
}

english_set = set(e2f.keys())

print(english_set)
