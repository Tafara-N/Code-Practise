#!/usr/bin/env python3

"""
Read books.csv and insert its data into the book table.

"""

import csv
import sqlite3

database = sqlite3.connect("books.db")
cursor = database.cursor()


with open("books.csv", "r", newline="") as file:
    data = csv.DictReader(file)

    query = "INSERT INTO books (title, author, year) VALUES (?, ?, ?)"
    for row in data:
        cursor.execute(query, (row['title'], row['author'], row['year']))

database.commit()
database.close()
