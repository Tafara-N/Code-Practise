#!/usr/bin/env python3

"""
Make a dictionary with these keys and values:
'name': 'Hydrogen', 'symbol': 'H', 'number': 1.

Then, create an object called `hydrogen` from class `Element` using this
dictionary.

"""

class Element:
    """
    A class representing an element
    """

    def __init__(self, name: str, symbol: str, number: int):
        self.name = name
        self.symbol = symbol
        self.number = number

element = {
    'name': 'Hydrogen',
    'symbol': 'H',
    'number': 1
}

hydrogen = Element(**element)

print(hydrogen.__dict__)

print(hydrogen.name)
