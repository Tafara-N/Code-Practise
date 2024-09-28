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

"""

from rich import print_json


life: dict[str, str | dict] = {
    "animals": {
        "cats": ["Henri", "Grumpy", "Lucy"],
        "octopi": {},
        "emus": {},
    },
    "plants": {},
    "other": {},
}

print_json(data=life)
