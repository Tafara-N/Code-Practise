#!/usr/bin/env python3

"""
Program prints the ASCII alphabet, in lowercase:
    Print all the letters except q and e
"""

for letter in range(97, 123):
    if letter not in [101, 113]:
        print(chr(letter), end="")
print()
