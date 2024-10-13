#!/usr/bin/env python3

"""
Read the text file today.txt into the string today_string

"""

def main() -> None:
    """
    Read the text file today.txt into the string today_string
    """

    with open("today.txt", "r") as file:
        today_string = file.read()
    print(today_string)


if __name__ == "__main__":
    main()
