# Things to Do

- `8.1`. Assign the string `'This is a test of the emergency text system'` to the variable `test1`, and write `test1` to a file called `test.txt`.

- `8.2`. Open the file `test.txt` and read its contents into the string `test2`. Are `test1` and `test2` the same?

- `8.3`. Save these text lines to a file called `books.csv`. Notice that if the fields are separated by commas, you need to surround a field with quotes if it contains a comma.

```csv
    author,book
    J R R Tolkien,The Hobbit
    Lynne Truss,"Eats, Shoots & Leaves"
```

- `8.4`. Use the `csv` module and its `DictReader` method to read `books.csv` to the variable `books`. Print the values in `books`. `Did DictReader` handle the quotes and commas in the second book’s title?

- `8.5`. Create a CSV file called `books.csv` by using these lines:

```csv
    title,author,year
    The Weirdstone of Brisingamen,Alan Garner,1960
    Perdido Street Station,China Miéville,2000
    Thud!,Terry Pratchett,2005
    The Spellman Files,Lisa Lutz,2007
    Small Gods,Terry Pratchett,1992
```

8.6. Use the sqlite3 module to create a SQLite database called books.db, and a table
called books with these fields: title (text), author (text), and year (integer).
8.7. Read books.csv and insert its data into the book table.
8.8. Select and print the title column from the book table in alphabetical order.

8.9. Select and print all columns from the book table in order of publication.
8.10. Use the sqlalchemy module to connect to the sqlite3 database books.db that you
just made in exercise 8.6. As in 8.8, select and print the title column from the book
table in alphabetical order.

8.11. Install the Redis server and the Python redis library (pip install redis) on
your computer. Create a Redis hash called test with the fields count (1) and name
('Fester Bestertester'). Print all the fields for test.

- `8.12`. Increment the `count` field of `test` and print it.

## Author

**Tafara Nyamhunga  - [Github](https://github.com/tafara-n) / [Twitter](https://twitter.com/tafaranyamhunga)**
