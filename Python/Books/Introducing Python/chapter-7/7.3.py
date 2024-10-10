#!/usr/bin/env python3

"""
Using UTF-8, decode pop_bytes into the string variable pop_string.

Print pop_string.

Is pop_string equal to mystery?

"""

mystery = "\U0001f4a9"
pop_bytes = mystery.encode("utf-8")

pop_string = pop_bytes.decode(encoding="utf-8")

print(pop_string)
print(pop_string == mystery)
