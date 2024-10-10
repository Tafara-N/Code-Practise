#!/usr/bin/env python3

"""
Capitalize the element in `things` that refers to a `person` and then print the
list. Did it change the element in the list?

It temporarily changes the element in the list.

The original list remains unchanged, if we want to permanently change the list,
then we have to assign the capitalized element to the list.

things[1] = things[1].capitalize()

"""

things = ["mozzarella", "cinderella", "salmonella"]

capitalized = things[1].capitalize()

print(capitalized, "\n")
print(things)
