#!/usr/bin/env python3

"""
Using the poem from the mammoth.txt file: "Ode on the Mammoth Cheese" by
  James McIntyre, do the following:

Find all four-letter words that begin with 'c'.

"""

import re

pattern = re.compile(r"\bc\w{3}\b")

with open("mammoth.txt", "r") as file:
    for line in file:
        words = re.findall(pattern, line)
        for word in words:
            print(word)
