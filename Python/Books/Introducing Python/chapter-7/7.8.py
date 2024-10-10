#!/usr/bin/env python3

"""
Using the poem from the mammoth.txt file: "Ode on the Mammoth Cheese" by
  James McIntyre, do the following:

Import the re module to use Python’s regular expression functions.

Use re.findall() to print all the words that begin with c.

"""

import re


pattern = re.compile(r"\bc\w*")

with open("mammoth.txt", "r") as file:
    for line in file:
        words = re.findall(pattern, line)
        for word in words:
            print(word)
