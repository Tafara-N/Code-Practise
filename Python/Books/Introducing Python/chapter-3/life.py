#!/usr/bin/env python3

"""
Make a multilevel dictionary called `life`.

Use these strings for the topmost keys:
'animals'`, `'plants'`, and `'other'.

Make the `'animals'` key refer to another dictionary with the keys:
'cats', 'octopi', and 'emus'.

Make the `'cats'` key refer to a list of strings with the values:
'Henri', 'Grumpy', and 'Lucy'.

Make all the other keys refer to empty dictionaries.

-----

- Print the top-level keys of life

- Print the keys for life['animals']

- Print the values for life['animals']['cats']

"""

from rich import print_json


life: dict[str, dict[str, dict | list]] = {
    "animals": {
        "cats": ["Henri", "Grumpy", "Lucy"],
        "octopi": {},
        "emus": {},
    },
    "plants": {},
    "other": {},
}

print_json(data=life)

print("\n", life.keys())

print("\n", life["animals"].keys())

print("\n", life["animals"]["cats"])
