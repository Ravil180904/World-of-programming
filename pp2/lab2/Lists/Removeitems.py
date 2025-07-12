# 1. Ramove Specified Item

#Example 1. Remove "banana"
thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")
print(thislist)

#Example 2. Remove the first occurance of "banana":
thislist = ["apple", "banana", "cherry", "banana", "kiwi"]
thislist.remove("banana")
print(thislist)

#2. Remove Specified Index

#Example 1. Remove the second item:
thislist = ["apple", "banana", "cherry", "banana", "kiwi"]
thislist.pop(1)
print(thislist)

#Example 2. Remove the last item:
thislist = ["apple", "banana", "cherry"]
thislist.pop()
print(thislist)

#Example 3. Remove the first item:
thislist = ["apple", "banana", "cherry"]
del thislist[0]
print(thislist)

#Example 4. Delete the entire list:
thislist = ["apple", "banana", "cherry"]
#del thislist
print(thislist)

#3. Clear the list

#Example 1. Clear the list content:
thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist)
