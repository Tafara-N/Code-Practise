#!/usr/bin/env python3

"""
Create a Unicode string called `mystery` and assign it the value '\U0001f4a9'.

Print mystery. Look up the Unicode name for mystery.

"""

import unicodedata


mystery = "\U0001f4a9"

print(mystery)

print(unicodedata.name(mystery))
