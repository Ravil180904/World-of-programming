# Builtin-in functions

# map()
# reversed()
# filter()
# all(), any()
# sum()
# chr()
# min(), max()

# 1. 
"""
nums = [1, 2, 3, 4, 5]

nums_doubled = list(map(lambda x: x * 2, nums))
print(nums_doubled)

#2.

nums = [1, 2, 3, 4, 5]
nums_doubled = list(map(lambda x: x * 2, nums))

print(str(nums_doubled))
print(', '.join(map(str, nums_doubled)))


#3. 

nums = [1, 2, 3, 4, 5]

print(list(reversed(nums)))


#4. 

word = "qwerty"
print(str(reversed(word))) # this won't give the expected result

print(''.join(reversed(word)))


#5. 

nums = list(range(1, 51))
nums_odd = list(filter(lambda x : x % 2 != 0, nums))

print(nums_odd)


#6. 

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


#7. 

nums = [1, -8, 11, 6, 3]
print(sum(nums))
print(max(nums))
print(min(nums))


#8. 

A_ascii = 65
print(chr(A_ascii))

alphaber_ascii = list(range(65, 91))
print(alphaber_ascii)

alphabet = list(map(chr, alphaber_ascii))
print(alphabet)


#9.

A_ascii = ord('A')
print(A_ascii)


#10. 

values1 = [1, True, 'hi', 3.14]
values2 = [0, True, 'hi', 3.14]

print("values1, all, any:", all(values1), any(values1))
print("values2, all, any:", all(values2), any(values2))


#11

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
