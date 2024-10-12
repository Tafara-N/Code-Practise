#!/usr/bin/env python3

"""
Select and print the title column from the book table in alphabetical order.

"""

import sqlite3


database = sqlite3.connect("books.db")
cursor = database.cursor()

query = "SELECT title FROM books ORDER BY title ASC"
cursor.execute(query)

records = cursor.fetchall()

for record in records:
    print(record[0])

cursor.close()
database.close()
