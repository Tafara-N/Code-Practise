#!/usr/bin/env python3

"""
Assign the value `7` to the variable `guess_me` and the value `1` to the variable
`start`. Write a while loop that compares `start` with `guess_me`.

Print `too low` if `start` is less than `guess_me`.

If `start` equals `guess_me`, print `'found it!'` and exit the loop. If `start`
is greater than `guess_me`, print `'oops'` and exit the loop.

Increment `start` at the end of the loop.

"""

guess_me: int = 7
start: int = 1

while True:
    if start < guess_me:
        print("too low")
    elif start == guess_me:
        print("found it!")
        break
    else:
        print("oops")
        break
    start += 1
