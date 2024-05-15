#!/usr/bin/env python3

# Program that prints all possible different combinations of two digits

for i in range(9):
    for j in range(i + 1, 10):
        if i * 10 + j < 89:
            print("{:d}{:d}".format(i, j), end=", ")
print("{:d}".format(89))
