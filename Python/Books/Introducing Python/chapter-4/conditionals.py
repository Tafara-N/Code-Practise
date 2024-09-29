#!/usr/bin/env python3

"""
Assign the value `7` to the variable `guess_me`.

Then, write the conditional tests (if, else, and elif) to print the string
'too low' if `guess_me` is `less` than 7, 'too high' if `greater` than `7`, and
'just right' if `equal` to `7`

"""

guess_me: int = 7

if guess_me < 7:
    print("too low")
elif guess_me > 7:
    print("too high")
else:
    print("just right")
