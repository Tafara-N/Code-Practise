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


def get_odds() -> Generator[int, None, None]:
    """
    A generator function that returns the odd numbers from range(10).

    Yields:
        Generator[int, None, None]
            The odd numbers from range(10)
    """

    yield from (
        number for number in range(10) if number % 2 != 0
        )


for index, number in enumerate(get_odds()):
    if index == 2:
        print(number)
        break


if __name__ == '__main__':
    pass
