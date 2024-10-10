#!/usr/bin/env python3

"""
Make a class called `Thing` with no contents and print it.

Then, create an object called `example` from this class and also print it.

Are the printed values the same or different?

"""

class Thing:
    """
    A class with no contents
    """

    pass


print(Thing)

example = Thing()
print(example)

# The printed values are different. The first one is the class itself, and the
# second one is an object of the class.
