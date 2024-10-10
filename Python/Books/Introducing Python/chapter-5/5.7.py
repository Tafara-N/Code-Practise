#!/usr/bin/env python3

"""
Make a defaultdict called `dict_of_lists` and pass it the argument list.

Make the list dict_of_lists['a'] and append the value 'something for a' to
it in one assignment.

Print dict_of_lists['a']

"""

from collections import defaultdict


dict_of_lists: defaultdict[str, list[str]] = defaultdict(list)

dict_of_lists["a"].append("something for a")

print(dict_of_lists["a"])
