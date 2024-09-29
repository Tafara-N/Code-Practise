#!/usr/bin/env python3

"""
A generator function `get_odds` that returns the odd numbers from range(10).

Use a for loop to find and print the third value returned.

Algorithm:
==========
1. Create a generator function `get_odds`
2. Returns the odd numbers from range(10)
3. Use a for loop to find and print the third value returned

"""

from typing import Generator


generator: Generator[int, None, None] = (
    number for number in range(10) if number % 2 != 0
    )

# print(list(generator))

for index, number in enumerate(generator):
    if index == 2:
        print(number)
        break


if __name__ == '__main__':
    pass
