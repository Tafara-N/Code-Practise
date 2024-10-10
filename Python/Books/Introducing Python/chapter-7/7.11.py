#!/usr/bin/env python3

"""
Using the poem from the mammoth file: "Ode on the Mammoth Cheese" by
  James McIntyre, do the following:

Find all words that contain exactly three vowels in a row.

"""

import re


pattern = re.compile(r"\b\w*[aeiou]{3}\w*\b")

with open("mammoth.txt", "r") as file:
    for line in file:
        words = re.findall(pattern, line)
        for word in words:
            print(word)
