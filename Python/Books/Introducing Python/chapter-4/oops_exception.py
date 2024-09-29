#!/usr/bin/env python3

"""
Define an exception called `OopsException`.

Raise this exception to see what happens.

Then write the code to catch this exception and print `'Caught an oops'`

Algorithm:
==========
1. Define an exception class called `OopsException`, inherits from `Exception`
2. Raise this exception to see what happens
3. Write the code to catch this exception and print `'Caught an oops'`

"""

class OopsException(Exception):
    """
    An exception class that inherits from `Exception`
    """

    def __init__(self, message: str='Oops!'):
        """
        Initialize the exception with a message

        Arguments:
            message : str : A string
        """

        self.message = message


try:
    raise OopsException
except OopsException as error:
    print('Caught an oops')
