#!/usr/bin/env python3

"""
Make a class called `Element`, with instance attributes `name`, `symbol`, and
`number`.

Create an object of this class with the values `'Hydrogen'`, `'H'`, and `1`.

"""

class Element:
    """
    A class representing an element
    """

    def __init__(self, name, symbol, number):
        self.name = name
        self.symbol = symbol
        self.number = number

hydrogen = Element('Hydrogen', 'H', 1)

print(hydrogen)
print(hydrogen.name)
print(hydrogen.symbol)
print(hydrogen.number)
