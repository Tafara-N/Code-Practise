#!/usr/bin/env python3

"""
For the `Element` class, define a method called `dump()` that prints the values
of the object’s attributes (`name`, `symbol`, and `number`).

Create the `hydrogen` object from this new definition and use `dump()` to print
its attributes.

"""

class Element:
    """
    A class representing an element
    """

    def __init__(self, name: str, symbol: str, number: int):
        self.name = name
        self.symbol = symbol
        self.number = number

    def dump(self):
        return f'name: {self.name}, \nsymbol: {self.symbol}, \nnumber: {self.number}'


element = {
    'name': 'Hydrogen',
    'symbol': 'H',
    'number': 1
}

hydrogen = Element(**element)

print(hydrogen.dump())
