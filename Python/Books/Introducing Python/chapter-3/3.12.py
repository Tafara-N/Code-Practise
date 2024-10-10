#!/usr/bin/env python3

"""
Make a French-to-English dictionary called `f2e` from `e2f`.

Use the `items` method

------------

In the `f2e` dictionary, keys are French words and values are English words.

The items method returns a list of tuples, where each tuple is a key-value pair.

We reverse the dictionary `e2f` using a dictionary comprehension and store the
keys in the variable `french` and the values in the variable `english`.

Then use the french and english variables to create the `f2e` dictionary.

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
