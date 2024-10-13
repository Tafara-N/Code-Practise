#!/usr/bin/env python3

"""
List the files in your current directory

os.listdir(): Lists everything in the current directory

"""

import os


def main() -> list[str]:
    """
    List the files in your current directory

    Returns:
        list[str]:
            The files in your current directory
    """

    # Lists only the files in the current directory
    files = [file for file in os.listdir() if os.path.isfile(file)]

    return files


if __name__ == "__main__":
    print(main())
