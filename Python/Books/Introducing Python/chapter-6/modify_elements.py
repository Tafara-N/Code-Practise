#!/usr/bin/env python3

"""
Modify `Element` to make the attributes `name`, `symbol`, and `number` private.

Define a getter property for each to return its value.

"""

class Element:
    """
    A class representing an element
    """

    def __init__(self, name: str, symbol: str, number: int):
        self.__name = name
        self.__symbol = symbol
        self.__number = number

    @property
    def name(self) -> str:
        """
        Getter for `name` attribute.

        Returns:
            str:
                The value of the `name` attribute.
        """

        return self.__name

    @name.setter
    def name(self, value: str) -> None:
        """
        Setter for `name` attribute.

        Arguments:
            value: The value to set the `name` attribute to.
        """

        self.__name = value

    @property
    def symbol(self) -> str:
        """
        Getter for `symbol` attribute.

        Returns:
            str
                The value of the `symbol` attribute.
        """

        return self.__symbol

    @symbol.setter
    def symbol(self, value: str) -> None:
        """
        Setter for `symbol` attribute.

        Arguments:
            value: The value to set the `symbol` attribute to.
        """

        self.__symbol = value

    @property
    def number(self) -> int:
        """
        Getter for `number` attribute.

        Returns:
            int
                The value of the `number` attribute.
        """

        return self.__number

    @number.setter
    def number(self, value: int) -> None:
        """
        Setter for `number` attribute.

        Arguments:
            value: The value to set the `number` attribute to.
        """

        self.__number = value

    def __str__(self) -> str:
        """
        String representation of the object.

        Returns:
            str:
                A string representation of the object.
        """

        return f'name: {self.name}, \nsymbol: {self.symbol}, \nnumber: {self.number}'


element = {
    'name': 'Hydrogen',
    'symbol': 'H',
    'number': 1
}

hydrogen = Element(**element)

print(hydrogen, "\n")

print(hydrogen.name)

print(hydrogen.symbol)

print(hydrogen.number, "\n")

# Try to access the private attributes directly: this will raise an AttributeError
print(hydrogen.__name)
