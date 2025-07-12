# 1. Write a Python program with builtin function to multiply all the numbers in a list input [1,2,3] output [1, 4, 9]
"""
x = int(input("Enter a x: "))
nalogovaya = []
for i in range(x):
    credit = int(input("Enter a list: "))
    nalogovaya.append(credit)
ipoteka = list(map(lambda e : e * e, nalogovaya))

print(list(ipoteka))
"""
"""
x = input("Enter a x: ")
nalogovaya = x.split()

for i in range(1, len(nalogovaya)):
    nalogovaya[i] = int(nalogovaya[i])
def is_square(lamb, nalogovaya):
    return lamb(nalogovaya)

ipoteka = is_square(lambda e : e * e, nalogovaya)

print(list(ipoteka))"""
#2. Write a Pyton program with builtin function that accepts a string and calculate the number of upper case letters and lower case letters 
# GeeksForGeeks
"""
Str = input("")
lowercase=0
uppercase=0
for i in Str:
    if(i.isupper()):
        uppercase += 1
    else:
        lowercase += 1
print("The number of uppercase: ", uppercase)
print("the number of lowercase: ", lowercase)
"""

#3 Write a Python program with builtin function that checks whether a passed string is palindrome or not
# malayalam Yes
# geeks No
"""
String = input("Enter a string: ")
#String = String.casefold()
revstr = reversed (String)

if (list (String) == list (revstr)):
    print("Yes")
else:
    print("No")
"""

#4. Write a Python program that invoke square root function after specific milliseconds.
"""
from time import sleep
import math
number = float(input("Sample input: "))
millisecond = float(input(""))
def ded_inside(lamb, number, millisecond):
    sleep(millisecond / 1000)
    return lamb(number)

square_root=ded_inside(lambda x: math.sqrt(x), number, millisecond)
print("Square root of ", number, " after ", millisecond, " milliseconds is ", square_root)
"""

#5. Write a Python program with builtin function that returns True if all elements of the tuple are true.
"""
halyava = input("list: ")
list_halyava = halyava.split()

for i in range(len(list_halyava)):
    list_halyava[i] = bool(list_halyava[i])
print(list_halyava)
x = all(list_halyava)
print("Values:", x)
"""
"""
halyava = [True, True, 1]

x = all(halyava)
print(x)
"""