#1. Print the second item in the tuple:
"""
thistuple = ('apple', 'banana', 'cherry')
print(thistuple[1])
"""

#2. Print the last item of the tuple:
"""
thistuple = ("apple", "banana", "cherry")
print(thistuple[-1])
"""

#3. Return the third, fourth, and fifth item:
"""
thistuple = ("apple", "banana", "cherry", "orange", "kiwi", "melon", "mango")
print(thistuple[2:5])
"""

#4. This example returns and items from beginning to, but NOT included, "kiwi":
"""
thistuple = ("apple", "banana", "cherry", "orange", "kiwi", "melon", "mango")
print(thistuple[:4])
"""

#5. This example returns the items from "cherry" and to the end:
"""
thistuple = ("apple", "banana", "cherry", "orange", "kiwi", "melon", "mango")
print(thistuple[2:])
"""

#6. This example returns the items from index -4 (included) to index -1 (excluded)
"""
thistuple = ("apple", "banana", "cherry", "orange", "kiwi", "melon", "mango")
print(thistuple[-4:-1])
"""

#7. Check if "apple" is present in the tuple:
"""
thistuple = ("apple", "banana", "cherry")
if "apple" in thistuple:
    print("Yes, 'apple' is in the fruits tuple")
"""
