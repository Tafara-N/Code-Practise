#!/usr/bin/env python3

"""
Using `f2e`, print the English equivalent of the French word `chien`.
"""

from rich import print_json


f2e: dict[str, str] = {
    "chien": "dog",
    "chat": "cat",
    "morse": "walrus",
}

print_json(data=f2e["chien"])
