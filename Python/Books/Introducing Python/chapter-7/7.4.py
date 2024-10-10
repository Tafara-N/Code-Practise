#!/usr/bin/env python3

"""
Write the poem by using old-style formatting

Substitute the strings: 'roast beef', 'ham', 'head', and 'clam'
  into this string:

"""

poem = """    My kitty cat likes %s,
    My kitty cat likes %s,
    My kitty cat fell on his %s
    And now thinks he's a %s.
"""

args = {
    1: 'roast beef',
    2: 'ham',
    3: 'head',
    4: 'clam'
}

print(poem % (args[1], args[2], args[3], args[4]), end='')
