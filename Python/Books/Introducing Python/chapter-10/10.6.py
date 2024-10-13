#!/usr/bin/env python3

"""
Use multiprocessing to create three separate processes.

Make each one wait a random number of seconds between one and five, print the
  current time, and then exit.

"""

import datetime
import multiprocessing
import random
import time


def process() -> None:
    """
    Create a process that waits a random number of seconds between one and five,
        prints the current time, and then exits.

    """

    # Wait a random number of seconds between one and five
    time.sleep(random.randint(1, 5))

    print(f"Waiting: {random.random():.2f}\n {datetime.datetime.now()}")

def main() -> None:
    """
    Use multiprocessing to create three separate processes.

    """

    for _ in range(3):
        multiprocessing.Process(target=process).start()


if __name__ == "__main__":
    main()
