#!/usr/bin/env python3

"""
Read books.csv and insert its data into the book table.

- Use the reader() method
- convert the reader object to a list
- slice the first line (Header Column) and load the data

"""

import csv
import sqlite3

database = sqlite3.connect("books.db")
cursor = database.cursor()

with open("books.csv", "r", newline="") as file:
    reader = csv.reader(file)
    data = list(reader)

    query = "INSERT INTO books (title, author, year) VALUES (?, ?, ?)"

    for row in data[1:]:
        cursor.execute(query, row)

    database.commit()
    database.close()
