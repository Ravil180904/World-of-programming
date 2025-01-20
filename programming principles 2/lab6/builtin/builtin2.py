#1. Write a Python program with builtin function to multiply all the numbers in a list
"""
# First method
from functools import reduce

def multiply_numbers(num_list):
    return reduce(lambda x, y: x * y, num_list)

print("Enter the numbers: ")
user_input = input()
numbers = [int(num) for num in user_input.split()]

result = multiply_numbers(numbers)
print(f"The product of all numbers is: {result}") 

#1. We import the reduce() function from the functools module, which is a built-in Python module that provides higher-order functions.

#2. We define a function called multiply_numbers() that takes a list of numbers as input and returns the product of all the numbers in the list.

#3. Inside the multiply_numbers() function, we use the reduce() function to perform the multiplication. The reduce() function takes two arguments:
 #  - A function that performs the operation on the elements of the list (in this case, a lambda function that multiplies two numbers)
  # - The list of numbers to be operated on

#4. The reduce() function applies the lambda function to the first two elements of the list, then applies the result to the next element, and so on, until all the elements have been processed. The final result is the product of all the numbers in the list.

#5. In the example usage, we create a list of numbers [2, 3, 4, 5] and call the multiply_numbers() function with this list as an argument. The function returns the product of all the numbers, which is 120.


# Second method

def multiply_numbers(numbers):
    result = 1
    for x in numbers:
        result *= x
    return result

print("Enter the numbers: ") 
list = input()
numberoid = [int(num) for num in list.split()]

result = multiply_numbers(numberoid)
print(f"The result is: {result}")


#2. Write a Python program with builtin function that accepts a string and calculate the number of upper case letters and lower case letters

def count_case(string):
    upper_count = 0
    lower_count = 0

    for char in string:
        if char.isupper():
            upper_count += 1
        if char.islower():
            lower_count += 1
    return upper_count, lower_count

input_string = input("Enter a string: ")
upper_count, lower_count = count_case(input_string)
print(f"Upper case letters: {upper_count}")
print(f"Lowercase letters: {lower_count}")

# Hello, World! This is a sample string

#1. The program prompts the user to enter a string using the input() function.
#2. The count_case() function is called with the user-provided string as an argument.
#3. The function counts the number of uppercase and lowercase letters in the input string, and returns the counts as a tuple.
#4. The returned values are assigned to the upper_count and lower_count variables.
#5. Finally, the program prints the counts of uppercase and lowercase letters.

#3. Write a Python program with builtin function that checks whether a passed string is palindrome or not.

def is_palindrome(string):
    cleaned_string = ''.join(char for char in string.lower() if char.isalnum())
    return cleaned_string == cleaned_string[::-1]

input_string = input("Enter a string: ")
if is_palindrome(input_string):
    print(f"{input_string} is a palindrome")
else:
    print(f"{input_string} is not a palindrome")

#  Panama, level, radar, rotator, hello world!

#1. The program prompts the user to enter a string using the input() function.
#2. The is_palindrome() function is called with the user-provided string as an argument.
#3. Inside the is_palindrome() function, the input string is cleaned by removing non-alphanumeric characters and converting it to lowercase using the str.lower() and str.isalnum() functions.
#4. The cleaned string is then compared to its reverse using the slice notation [::-1]. If the cleaned string is the same as its reverse, it is a palindrome, and the function returns True. Otherwise, it returns False.
#5. The returned value from the is_palindrome() function is used in an if-else statement to print whether the input string is a palindrome or not.


#4. Write a Python program that invoke square root function after specific milliseconds.
#$Sample Input:
#25100
#2123
#Sample Output:
#Square root of 25100 after 2123 miliseconds is 158.42979517754858

import time, math

def square_root_after_delay(delay_ms, number):
    time.sleep(delay_ms / 1000)
    result = math.sqrt(number)
    print(f"The suare root of {number} is {result:.2f}")

number = float(input("Enter a number: "))
delay_ms = int(input("Enter the delay in milliseconds: "))

print(f"calculating the square root of {number} after {delay_ms} milliseconds...")
square_root_after_delay(delay_ms, number)

#1. The program imports the time and math modules.
#2. The square_root_after_delay() function takes two arguments: delay_ms (the delay in milliseconds) and number (the number to calculate the square root of).
#3. Inside the function, the time.sleep() function is used to pause the program execution for the specified delay in milliseconds.
#4. After the delay, the math.sqrt() function is used to calculate the square root of the input number.
#5. The result is then printed to the console.
#6. In the example usage, the program prompts the user to enter a number and the delay in milliseconds.
#7. The program then waits for the specified delay before calculating and printing the square root of the user-provided number.
"""

#5. Write a Python program with builtin function that returns True if all elements of the tuple are true.
# First method:
""" 
def check_all_true(tup):
    return all(tup)
num_elements = int(input("Enter the number of elements in the tuple: "))
tuple_elements = []

for i in range(num_elements):
    element = input(f"Enter element {i+1}: ")
    if element.lower() == 'true':
        tuple_elements.append(True)
    elif element.lower() == 'false':
        tuple_elements.append(False)
    else:
        tuple_elements.append(bool(eval(element)))

user_tuple = tuple(tuple_elements)
print("User-provided tuple:", user_tuple)
print("All elements are true:", check_all_true(user_tuple))

#1. The check_all_true() function remains the same as before, using the built-in all() function to check if all elements of the input tuple are True.
#2. The program prompts the user to enter the number of elements in the tuple.
#3. The program then prompts the user to enter each element of the tuple one by one.
#4. For each element, the program checks if the user input is "true" or "false" (case-insensitive) and appends the corresponding boolean value to the tuple_elements list.
#5. If the user input is neither "true" nor "false", the program uses the bool(eval(element)) expression to convert the input to a boolean value and append it to the tuple_elements list.
#6. The tuple_elements list is then converted to a tuple and stored in the user_tuple variable.
#7. The program prints the user-provided tuple and the result of calling the check_all_true() function with the user_tuple as the argument.
"""

#Second method:
"""
user_input = input("Enter a tuple: ")
tuple_data = tuple(eval(user_input))

result = all(tuple_data)
print(f"All elements in the tuple are True: {result}")
# True, False, True

#In this updated version, the program first prompts the user to enter a tuple as a string, for example, "True, False, True".
#Then, the program converts the input string to a tuple using the eval() function, which evaluates the string as a Python expression.
#Finally, the all() function is used to check if all elements in the tuple are True, and the result is printed to the console.
""" 
# The end!!! 
