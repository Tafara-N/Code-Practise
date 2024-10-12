#!/usr/bin/env python3

"""
Use the sqlite3 module to create a SQLite database called books.db, and a table
called books with these fields:
  title (text), author (text), and year (integer)

"""

import sqlite3


database = sqlite3.connect("books.db")

query = """CREATE TABLE books (
    title TEXT,
    author TEXT,
    year INT
    )"""

cursor = database.cursor()
cursor.execute(query)
database.close()
