"""import os

print(os.listdir()) # list everything in the current dir

path = '../builtin_functions/' # relative path

print(os.listdir(path)) # list everything in the path
"""


# Built-in functions

# reversed()
"""
nums = [1, 2, 3, 4, 5]

print(list(reversed(nums)))
"""

# Built-in functions

# reversed()
"""
word = "qwerty"

print(str(reversed(word))) # - this won't give the expected result

print(''.join(reversed(word)))
"""

# Built-in functions

# filter()
"""
nums = list(range(1, 51))

nums_odd = list(filter(lambda x : x % 2 != 0, nums))

print(nums_odd)
"""

# Built-in functions

# filter()
"""
from math import sqrt, ceil

nums = list(range(1, 51))

def is_prime(x):
    if x == 1:
        return False
    root = ceil(sqrt(x))
    for i in range(2, root + 1):
        if x % i == 0:
            return False
    return True

nums_prime = list(filter(is_prime, nums))

print(nums_prime)
"""

# Built-in functions

# chr()
"""
A_ascii = 65

print(chr(A_ascii))

alphabet_ascii = list(range(65, 91))

print(alphabet_ascii)

alphabet = list(map(chr, alphabet_ascii))

print(alphabet)
"""

'''
values1 = [1, True, 'hi', 3.14] 
values2 = [0, True, 'hi', 3.14]

print("values1, all, any:", all(values1), any(values1))
print("values2, all, any:", all(values2), any(values2))
'''


# Built-in functions

# all(), any()
"""
from math import sqrt, ceil

nums = list(range(1, 51))

def is_prime(x):
    if x == 1:
        return False
    root = ceil(sqrt(x))
    for i in range(2, root + 1):
        if x % i == 0:
            return False
    return True

nums_isprime = list(map(is_prime, nums))

print(all(nums_isprime), any(nums_isprime))

print(sum(nums_isprime)) # amount of primes in the list
"""


"""


halyava = input("list: ")
list_halyava = halyava.split()

print("Values: ", all(list_halyava))
for i in range(len(list_halyava)):
    list_halyava[i] = int(list_halyava[i])
print(sum(list_halyava))


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


"""
list_input = input("Enter a list:")
list_listed = list_input.split()

with open(r'C://Users//Darya//Documents//programming-principles-2//lab6//hello.txt', 'w') as fp:
    for i in list_listed:
        fp.write("%s\n" % i)
    print("Done")
"""

"""
pettern = "[a-zA-Z0-9]+\.[com|net]"
if(re.search(pettern, input)):
print("Valid email")
"""