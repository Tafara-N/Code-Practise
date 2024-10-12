#!/usr/bin/env python3

"""
Use the sqlalchemy module to connect to books.db select and print the title
column from the book table in alphabetical order.

"""

from sqlalchemy import create_engine, MetaData, Table, select


engine = create_engine("sqlite:///books.db")
metadata = MetaData()

books = Table("books", metadata, autoload_with=engine)

query = select(books.c.title).order_by(books.c.title)

with engine.connect() as connection:
    records = connection.execute(query).fetchall()

    for record in records:
        print(record.title)
