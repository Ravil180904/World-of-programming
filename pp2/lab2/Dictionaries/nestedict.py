#1. Create a dictionary that contain three dictionaries:
"""
myfamily = {
    "child1" : {
        "name" : "Emil",
        "year" : 2004
    },
    "child2" : {
        "name" : "Tobias",
        "year": 2007
    },
    "child3" : {
        "name" : "Linus",
        "year" : 2011
    }
}
print(myfamily)


#2. Create three dicionaries, then create one dictionary that will contain the other three dictionaries:

child1 = {
    "name" : "Emil",
    "year" : 2004
}
child2 = {
    "name" : "Tobias",
    "year": 2007
}
child3 = {
    "name" : "Linus",
    "year" : 2011
}

myfamily = {
    "child1" : child1,
    "child2" : child2,
    "child3" : child3
}
print(myfamily)


#3. Print the name of child 2:

myfamily = {
    "child1" : {
        "name" : "Emil",
        "year" : 2004
    },
    "child2" : {
        "name" : "Tobias",
        "year": 2007
    },
    "child3" : {
        "name" : "Linus",
        "year" : 2011
    }
}
print(myfamily["child2"]["name"])

#4. Loop through the keys and values of all nested dictionaries:

myfamily = {
    "child1" : {
        "name" : "Emil",
        "year" : 2004
    },
    "child2" : {
        "name" : "Tobias",
        "year": 2007
    },
    "child3" : {
        "name" : "Linus",
        "year" : 2011
    }
}

for x, obj in myfamily.items():
    print(f"keys <{x}>")
    for z in obj:
        print(f"objtects: <{z + ':', obj[z]}")
#The end!
"""
