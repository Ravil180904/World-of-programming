#1. Packing a tuple: 
#fruits = ("apple", "banana", "cherry")

#2. Unpacking a tuple
"""
fruits = ("apple", "banana", "cherry")

(green, yellow, red) = fruits

print(green)
print(red)
print(yellow)
"""

#3. Assign the rest of the values as a list called "red":
"""
fruits = ("apple", "banana", "cherry", "strawberry", "raspberry")

(green, yellow, *red) = fruits

print(green)
print(yellow)
print(red)
"""

#4. Add a list of values the "tropic" variable:
"""
fruits = ("apple", "mango", "papaya", "pineapple", "cherry")

(green, *tropic, red) = fruits

print(green)
print(tropic)
print(red)
"""
