#!/usr/bin/env python3

"""
Select and print all columns from the book table in order of publication.

"""

import sqlite3


database = sqlite3.connect("books.db")
cursor = database.cursor()

query = "SELECT * FROM books ORDER BY year ASC"
cursor.execute(query)

records = cursor.fetchall()

for record in records:
    print(f"{record[0]}, {record[2]}")

cursor.close()
database.close()
