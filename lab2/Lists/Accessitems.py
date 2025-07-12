#1. Access items

#Example Print the second item of the list:
thislist = ["apple", "banana", "cherry"]
print(thislist[1])

#2. Negative indexing

#Example Print the last item of the list:
thislist = ["apple", "banana", "cherry"]
print(thislist[-1])

#3. Range of Indexes

#Example 1. Return the third, fourth, and fifth item:
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:5])

#Example 2. This example returns the items from the beginning to, but NOT including, "kiwi":
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[:4])

#Example 3. This example returns the items from "cherry" to the end:
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:])

#4. Range of Negative indexes

#Example 1. This example returns the items from "orange" (-4) to, but NOT including "mango" (-1):
thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[-4:-1])

#5. Check if Item Exists

#Example 1. Check if "apple" is present in the list:
thislist = ["apple", "banana", "cherry"]
if "apple" in thislist:
    print("Yes, 'apple' is in the fruits list")
