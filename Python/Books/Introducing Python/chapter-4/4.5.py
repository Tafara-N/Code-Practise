#!/usr/bin/env python3

"""
Use a dictionary comprehension to create the dictionary `squares`.

Use `range(10)` to return the keys, and use the square of each key as its value

"""

from rich import print_json


squares: dict[int, int] = {key: key ** 2 for key in range(10)}

print_json(data=squares)
