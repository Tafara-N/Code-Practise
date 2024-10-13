#!/usr/bin/env python3

"""
Write the current date as a string to the text file today.txt

"""

from datetime import datetime


def main() -> None:
    """
    Main function to write the current date to the file today.txt.
    """

    with open("today.txt", "w") as file:
        date = datetime.now().strftime("%Y-%m-%d")
        file.write(date)


if __name__ == "__main__":
    main()
