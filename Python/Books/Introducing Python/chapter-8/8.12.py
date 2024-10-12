#!/usr/bin/env python3

"""
Increment the count field of test and print it.

"""

import redis


client = redis.Redis()

fields = client.hgetall("test")

print("Before:")
print("========")

for key, value in fields.items():
    print(f"{key.decode("utf-8")}: {value.decode("utf-8")}")

print()

count = client.hincrby("test", "count", 1)

print("Now:")
print("====")
print(f"count: {count}")

client.connection_pool.disconnect()
