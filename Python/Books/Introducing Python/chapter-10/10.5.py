#!/usr/bin/env python3

"""
List the files in your parent directory

os.listdir(".."): Lists everything in the parent directory

"""

import os


def main() -> list[str]:
    """
    List the files in your parent directory

    Returns:
        list[str]:
            The files in your parent directory
    """

    # Lists only the files in the parent directory
    files = [file for file in os.listdir("..") if os.path.isfile(file)]

    return files


if __name__ == "__main__":
    print(main())
