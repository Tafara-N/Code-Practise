#!/usr/bin/env python3

# Function that prints a string in uppercase

def uppercase(str):
    for letter in str:
        if ord(letter) in range(97, 123):
            letter = chr(ord(letter) - 32)
        print("{}".format(letter), end="")
    print()
