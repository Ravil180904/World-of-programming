#1. Get the value of the "model" key:
"""
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
x = thisdict["model"]
print(x)


#2. Get a list of the keys: The keys() method will return a list of all the keys in the dictionary

x = thisdict.keys()
print(x)

#3. Add a new item to the original dictionary, and see that the keys list gets updated as well:

car = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

x = car.keys()
print(x) #before the change

car["color"] = "white"
print(x) #after the change

#4. Get a list of the values:

thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

x = thisdict.values()
print(x)

#5. Make a change in the original dictionary, and see that the values list gets updated as well:

car = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

x = car.values()
print(x)  #before the change

car["year"] = 2020
print(x) #after the change

#6. Add a new item to the original dictionary, and see that the values list gets updated as well:

car = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

x = car.values()
print(x) #before the change

car["color"] = "red"
print(x) #after the change
"""

#7. Get a list of the key: value pairs
"""
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
x = thisdict.items()
print(x)


#8. Make a change in the original dictionary, and see that the items list gets updated as well:

car = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

x = car.items()
print(x) #before the change

car["year"] = 2020
print(x) #after the change

#9. Add a new item to the original dictionary, and see that the items list gets updated as well:

car = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

x = car.items()
print(x) #before the change

car["color"] = "red"
print(x) #after the change



#10. Check if "model" is present in the dictionary:

thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}

if "model" in thisdict:
    print("Yes, 'model' is one of the keys in the thisdict dictionary")
#The end!!!
"""
