#!/usr/bin/env python3

# Program deletes inactive users from a dictionary

users = {
    "Tafara": "active", "Amahle": "active",
    "Tendai": "inactive", "Tawanda": "inactive"
    }

print(users)

for user, status in users.copy().items():
    if status == "inactive":
        del users[user]

active_users = {}

for user, status in users.items():
    if status == "active":
        active_users[user] = status

print(active_users)
