#!/usr/bin/env python3

rgb = ["Red", "Green", "Blue"]
rgba = rgb

# They are equal because they reference the same object
print(id(rgb) == id(rgba))

# Both "rgb" and "rgba" will be updated
rgba.append("Yellow")
print(rgb, rgba)

update = rgba[:]

update[-1] = "Black"

print(rgba, rgb)

###############################################################################
names =["John", "Jane", "Doe"]
new_names = ["John", "Jane", "Doe"]

# They are not equal because they reference different objects
print(id(names) == id(new_names))

# Only "new_names" will be updated
new_names.append("Smith")
print(names, new_names)
