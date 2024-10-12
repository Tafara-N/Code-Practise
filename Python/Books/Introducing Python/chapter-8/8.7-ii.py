#!/usr/bin/env python3

"""
Another way to load data into database from a CSV file.

Read books.csv and insert its data into the book table.

- Use the DictReader() method, which returns a dict object
- Use the row object to access the data
- The row's keys are the header columns, which are used to access the data
.. in the row object and insert it into the database

"""

import csv
import sqlite3

database = sqlite3.connect("books.db")
cursor = database.cursor()


with open("books.csv", "r", newline="") as file:
    data = csv.DictReader(file)

    query = "INSERT INTO books (title, author, year) VALUES (?, ?, ?)"

    for row in data:
        cursor.execute(query, (row["title"], row["author"], row["year"]))

    database.commit()
    database.close()
