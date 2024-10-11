#!/usr/bin/env python3

"""
Assigning a string and writing it to a file called test.txt

"""

test1 = "This is a test of the emergency text system"

with open("test.txt", "w", newline="") as file:
    file.write(test1)
