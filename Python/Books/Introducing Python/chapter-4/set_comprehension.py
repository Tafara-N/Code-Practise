#!/usr/bin/env python3

"""
Use a set comprehension to create the set `odd` from the odd numbers in range(10)

"""

odd = {number for number in range(10) if number % 2 != 0}

print(odd)
