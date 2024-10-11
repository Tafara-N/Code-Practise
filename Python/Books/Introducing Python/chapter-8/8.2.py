#!/usr/bin/env python3

"""
Opening test.txt and reading its contents into the string test2.

Compare if test1 and test2 the same?

"""

test1 = "This is a test of the emergency text system"

with open("test.txt", "r", newline="") as file:
    test2 = file.read()

print("The strings are the same" if test1 == test2 else "The strings are different")
