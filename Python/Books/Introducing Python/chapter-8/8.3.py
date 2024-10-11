#!/usr/bin/env python3

"""
Saving these text lines to a file called books.csv

"""

data = """author,book
J R R Tolkien,The Hobbit
Lynne Truss,"Eats, Shoots & Leaves"
"""

with open("books.csv", "w", newline="") as file:
    file.write(data)
