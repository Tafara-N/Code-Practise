#!/usr/bin/env python3

"""
Make a dictionary called `plain` with the key-value pairs
'a': 1, 'b': 2, and 'c': 3, and then print it

"""

from collections.abc import Mapping
from rich import print_json


plain: Mapping[str, int] = {
    'a': 1,
    'b': 2,
    'c': 3
    }

print_json(data=plain)
