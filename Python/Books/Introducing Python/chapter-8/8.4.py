#!/usr/bin/env python3

"""
Use the csv module and it's DictReader method to read books.csv to the variable
books.

Print the values in books.

Did DictReader handle the quotes and commas in the second book’s title?

"""

import csv


with open("books.csv", "r", newline="") as file:
    books = csv.DictReader(file)

    [print(book) for book in books]
