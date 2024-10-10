#!/usr/bin/env python3

"""
Encode `mystery`, this time using UTF-8, into the bytes variable pop_bytes.

Print pop_bytes.

"""

mystery = "\U0001f4a9"

pop_bytes = mystery.encode("utf-8")

print(pop_bytes)
