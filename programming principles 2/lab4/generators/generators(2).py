#1. Create a generator that generates the squares of numbers up to some number N.
"""
def square_generator():
    N = int(input("Enter the upper limit N: "))
    for i in range(N+1):
        yield i** 2

for square in square_generator():
    print(square)
"""
#2. Write a program using generator to print the even numbers between 0 and n in comma separated form where n is input from console
"""
def even_numbers_generator(n):
    for i in range(0, n+1, 2):
        yield i

def main():
    n = int(input("Enter the upper limit n: "))
    #even_numbers = [str(num) for num in even_numbers_generator(n)]
    #print(", ".join(even_numbers))
    even_numbers = [num for num in even_numbers_generator(n)]
    print(', '.join(map(str, even_numbers)))

if __name__ == "__main__":
    main()
"""

#3. Define a function with a generator which can iterate the numbers, which are divisible by 3 and 4, between a given range 0 and n.
"""
def divisible_by_3_and_4():
    n = int(input("Enter the upper limit n: "))
    for i in range(0, n+1):
        if i % 3 == 0 and i % 4 == 0:
            yield i

def main():
    #for num in divisible_by_3_and_4():
      #  print(num)
    divisible_generator = [str(num) for num in divisible_by_3_and_4()]
    print(', '.join(divisible_generator))

if __name__ == "__main__":
    main()
"""

#4. Implement a generator called squares to yield the square of all numbers from (a) to (b). Test it with a "for" loop and print each of the yielded values.
#First method
"""
def squares(a, b):
    for i in range(a, b+1):
        yield i ** 2

# Test the squares generator
a = int(input("Enter the starting number: "))
b = int(input("Enter the ending number: "))

for square in squares(a, b):
    print(square)
"""
#Second method
"""
def squares(a, b):
    for i in range(a, b+1):
        yield i ** 2

# Test the squares generator
a = int(input("Enter the starting number: "))
b = int(input("Enter the ending number: "))

square = list(squares(a, b))
print(', '.join(map(str, square)))
"""

#5. Implement a generator that returns all numbers from (n) down to 0.
"""
def count_down(n):
    while n >= 0:
        yield n
        n -= 1

n = int(input("Enter a number: "))

for num in count_down(n):
    print(num)
"""
