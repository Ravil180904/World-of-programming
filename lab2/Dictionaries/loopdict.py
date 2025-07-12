#1. Print all key names in the dictionary, one by one:
"""
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

for x in thisdict:
    print(x)

#2. Print all values in the dictionary, one by one:

thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

for x in thisdict:
    print(thisdict[x])


#3. You can also use the values() method to return values of a dictionary:

thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

for x in thisdict.values():
    print(x)

#4. You can use the keys() method to return the keys of a dictionary:

thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

for x in thisdict.keys():
    print(x)

#5. Loop through both keys and values, by using the items() method:

thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

for x, y in thisdict.items():
    print(x, y)
"""
