# 1. Create a generator that generates the squares of numbers up to some number N
"""
N = int(input())
def square(x):
    for i in range(1, x+1):
        yield i**2
for N in square(N):
    print (N)

# 2. Write a program using generator to print the even numbers between 0 and n in comma separated form where n is input from console.
n = int(input())
def evens(n):
    for i in range(0, n+1):
        if i%2 == 0:
            yield i
for n in evens(n):
    print(n)

# 3. Define a function with a generator which can iterate the numbers, which are divisible by 3 and 4, between a given range 0 and n.
n = int(input())
def number(n):
    for i in range (0, n+1):
        if i % 3 == 0 and i % 4 == 0:
            yield i
        else:
            pass
for N in number(n):
    print(N)

# 4. Implement a generator called squares to yield the square of all numbers from (a) to (b). Test it with a "for" loop and print each of the yielded values.
a = int(input())
b = int(input())

def square(a, b):
    for i in range(a, b+1):
        yield i ** 2
print("Numbers of squares: ")
for n in square(a, b):
    print(n)

# 5. Implement a generator that returns all numbers from (n) down to 0.
n = int(input())
def numbers(n):
    while n>0:
        yield n-1
        n -= 1
print("Numbers: ")
for x in numbers(n):
    print(x)
"""
