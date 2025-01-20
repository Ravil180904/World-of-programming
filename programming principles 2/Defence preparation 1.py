#1. Write a function called calculate_factorial that takes a positive integer as a parameter and returns its factorial (use recursion)
def calculate_factorial(n):
    if n == 0:
        return 1
    else:
        return n * calculate_factorial(n-1)
n = int(input())
print(calculate_factorial(n))

#2. Write a recursive function fibonacci that returns the nth Fibonacci number.
def fibonacci(n):
    a = 1
    b = 2
    if n<0:
        print("Error")
    elif n == 0:
        return a
    elif n == 1:
        return b
    else:
        for i in range(2, n+1):
            c = a + b
            a = b
            b = c
        return c
n = int(input())
print(fibonacci(n))


#3. Write a function called is_even that takes an integer as a parameter and returns True if it's even and False otherwise.
n = int(input())
def is_even(n):
    if(n % 2 == 0):
        return True
    else:
        return False
print(is_even(n))
