#!/usr/bin/env python3

"""
Use a generator comprehension to return the string 'Got ' and a number for the
numbers in `range(10)`

Iterate through this by using a for loop

ALgorithm:
==========
1. Create a generator comprehension
2. Return the string 'Got ' and a number for the numbers in `range(10)`
3. Iterate through this by using a for loop

Solution:
=========
Concate the string 'Got ' with the number in range(10),
    - (convert the number to string using str() function)

"""

from typing import Generator


generator: Generator[str, None, None] = ('Got ' + str(number) for number in range(10))

for item in generator:
    print(item)


if __name__ == '__main__':
    pass
