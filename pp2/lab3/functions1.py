#Exercise 1. A recipe you are reading states how many grams you need for the ingredient. Unfortunately, your store only sells items in ounces. Create a function to convert grams to ounces. ounces = 28.3495231 * grams
"""
n = int(input())
def ingredient(n):
    a = 28.3495231 * n
    return a
print(ingredient(n))

#Exercise 2. Read in a Fahrenheit temperature. Calculate and display the equivalent centigrade temperature. The following formula is used for the conversion: C = (5 / 9) * (F – 32)

n = int(input())
def Fahrenheit(n):
    C = ((5/9) * (n - 32))
    return C;
print(Fahrenheit(n))


#3. Write a program to solve a classic puzzle: We count 35 heads and 94 legs among the chickens and rabbits in a farm. How many rabbits and how many chickens do we have? create function: solve(numheads, numlegs):

#4. You are given list of numbers separated by spaces. Write a function filter_prime which will take list of numbers as an agrument and returns only prime numbers from the list.

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            return False
    return True

def filter_prime(max_num):
    prime_numbers = []
    for num in range(2, max_num + 1):
        if is_prime(num):
            prime_numbers.append(num)
    return prime_numbers

#Example usage
max_number = int(input("Enter a number: "))
filtered_numbers = filter_prime(max_number)
print(f"Prime number up to {max_number} are: {filtered_numbers}")


#5. Write a function that accepts string from user and print all permutations of that string.

def permutater(string, l, r):
    if l == r:
        print(''.join(string))
    else:
        for i in range(l, r + 1):
            string[l], string[i] = string[i], string[l]
            permutater(string, l + 1, r)
            string[l], string[i] = string[i], string[l] # backtrack

def print_permutations(input_string):
    n = len(input_string)
    string_list = list(input_string)
    permutater(string_list, 0, n - 1)

input_string = input("Enter a string: ")
print("All permutations of the string are:")
print_permutations(input_string)


#6. Write a function that accepts string from user, return a sentence with the words reversed. We are ready -> ready are We

def reverse_sentence(sentence):
    # Split the sentence into a list of words
    words = sentence.split()

    # Reverse the other of words
    reversed_words = words[::-1]

    # Join the reversed words back into a new sentence
    reversed_sentence = ' '.join(reversed_words)
    return reversed_sentence

sentence = input("Input sentence: ")
reversed_sentence = reverse_sentence(sentence)
print("Original sentence:", sentence)
print("Reversed sentence:", reversed_sentence)


#9. Write a function that computes the volume of a sphere given its radius.

import math

def sphere_volume(radius):
    volume = (4/3) * math.pi * (radius ** 3)
    return volume

radius = int(input("Enter an input: "))
volume = sphere_volume(radius)
print(f"The volume of a sphere with radius {radius} is {volume:.2f}")


#10. Write a Python function that takes a list and returns a new list with unique elements of the first list. Note: don't use collection set.

def get_unique_elements(lst):
    unique_list = []
    for item in lst:
        if item not in unique_list:
            unique_list.append(item)
    return unique_list

input_str = input("Enter an list of input: ") #.split()
#lst = [int(num) for num in input_str]
lst = input_str.split()
unique_list = get_unique_elements(lst)
print("Unique elements:", unique_list)

#11. Write a Python function that checks whether a word or phrase is palindrome or not. Note: A palindrome is word, phrase, or sequence that reads the same backward as forward, e.g., madam

def is_palindrome():
    #cleaned_text = ''.join(char for char in text.lower() if char.isalnum())
    text = input("Enter a word or phrase: ")
    #Remove spaces and convert to lowercase
    text = ''.join(text.split()).lower()
    if text == text[::-1]:
        print(f"'{text}' is palindrome.")
    else:
        print(f"'{text}' is not palindrome.")
is_palindrome()

#if is_palindrome(text):
 #   print(f"'{text}' is palindrome.")
#else:
 #   print(f"'{text}' is not palindrome.")

#12. Define a functino histogram() that takes a list of integers and prints a histogram to the screen. For example, histogram([4, 9, 7]) should print the following:
# ****
# *********
# *******

def histogram():
    numbers = input("Enter an input: ").split()
    numbers_list = [int(num) for num in numbers]

    for number in numbers_list:
        print("*" * number)
histogram()
"""
