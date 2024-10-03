#!/usr/bin/env python3

"""
Make an `OrderedDict` called `fancy` from the same pairs listed in `5.5` and
print it.

Did it print in the same order as plain?

"""

from collections import OrderedDict


fancy: OrderedDict[str, int] = OrderedDict([
    ('a', 1),
    ('b', 2),
    ('c', 3)
    ])

print(fancy)
