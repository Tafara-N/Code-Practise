#!/usr/bin/env python3

"""
Parse the date from today_string

"""

from datetime import datetime


def main() -> None:
    """
    Parse the date from today_string
    """

    with open("today.txt", "r") as file:
        today_string = file.read()
        today = datetime.strptime(today_string, "%Y-%m-%d")

        print(today)


if __name__ == "__main__":
    main()
