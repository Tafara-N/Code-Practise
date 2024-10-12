#!/usr/bin/env python3

"""
Create a Redis hash called test with the fields:
  count (1) and name ('Fester Bestertester').

Print all the fields for test.

"""

import redis


client = redis.Redis()
client.delete("test")

data = {
    "count": 1,
    "name": "Fester Bestertester"
}

client.hset("test", mapping=data)

fields = client.hgetall("test")

for key, value in fields.items():
    print(f"{key.decode("utf-8")}: {value.decode("utf-8")}")

client.connection_pool.disconnect()
