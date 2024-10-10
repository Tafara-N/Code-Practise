#!/usr/bin/env python3

"""
Use `zip()` to make a dictionary called `movies` that pairs these lists:
titles = ['Creature of Habit', 'Crewel Fate'] and
plots = ['A nun turns into a monster', 'A haunted yarn shop']

Algorithm:
==========
1. Create a list called `titles` with two strings
2. Create a list called `plots` with two strings
3. Use `zip()` to combine the two lists into a dictionary called `movies`
4. Print the dictionary `movies`

"""

from typing import Dict
from rich import print_json


titles: list[str] = ['Creature of Habit', 'Crewel Fate']
plots: list[str] = ['A nun turns into a monster', 'A haunted yarn shop']

movies: Dict[str, str] = dict(zip(titles, plots))

print_json(data=movies)
