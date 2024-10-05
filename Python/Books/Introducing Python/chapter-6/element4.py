#!/usr/bin/env python3

"""
Call `print(hydrogen)`.

In the definition of `Element`, change the name of method `dump` to `__str__`,
create a new `hydrogen` object, and call `print(hydrogen)` again.

"""

class Element:
    """
    A class representing an element
    """

    def __init__(self, name: str, symbol: str, number: int):
        self.name = name
        self.symbol = symbol
        self.number = number

    def __str__(self):
        return f'name: {self.name}, \nsymbol: {self.symbol}, \nnumber: {self.number}'


element = {
    'name': 'Hydrogen',
    'symbol': 'H',
    'number': 1
}

hydrogen = Element(**element)

print(hydrogen)
