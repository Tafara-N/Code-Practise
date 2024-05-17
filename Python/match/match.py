#!/usr/bin/env python3

# Using the match statement to greet users by name

name = input("Enter your name: ")

match name:
    case "Caourage" | "Tafara" | "Millicent" | "Charles":
        print(f"Hello, {name} Nyamhunga!")
    case "Amahle":
        print(f"Hello, {name} Dlamini!")
    case _:
        print("Hello, stranger!")
