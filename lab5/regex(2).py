#1. Write a Python program that matches a string that has an 'a' followed by zero or more 'b''s.
"""
import re
def match_string():
    input_string = input("Enter a string: ")
    pattern = r'^a(b*)?$'
    if re.match(pattern, input_string):
        print(f"The string '{input_string}' matches the pattern.")
    else:
        print(f"The string '{input_string}' does not match the pattern.")

match_string()
"""

#2. Write a Python program that matches a string that has an 'a' followed by two to three 'b'.
"""
import re

def match_string(input_string):
    #input_string = input("Enter a string: ")
    pattern = r'^ab{2,3}$'
    if re.match(pattern, input_string):
        print(f"The string '{input_string}' matches the pattern.")
    else:
        print(f"the string '{input_string}' does not match the pattern.")

input_string = input("Enter a string: ")
match_string(input_string)
"""

#3. Write a Python program to find sequences of lowercase letters joined with a underscore.
"""
import re

def find_sequences(text):
    pattern = r'\b[a-z]+_[a-z]+\b'
    matches = re.findall(pattern, text)

    if matches:
        print("Sequence of lowercase letters joined with an underscore:")
        for match in matches:
            print(match)
    else:
        print("No matches found.")

text_input = input("Enter a string:")
find_sequences(text_input)
# The quick_brown fox_jumps over_the lazy_dog.
# The quick_brown fox_jumps over_the_lazy_dog.
# This is a test STRING with no matches
"""

#4. Write a Python program to find the sequences of one upper case letter followed by lower case letters.
"""
import re

def find_sequence(text):
    pattern = r'\b[A-Z][a-z]*\b'
    matches = re.findall(pattern, text)

    if matches:
        print("Sequences of one uppercase letter followed by lowercase letters:")
        for match in matches:
            print(match)
    else:
        print("No matches found")

input_text = input("Enter the text to search: ")
find_sequence(input_text)
# The Quick brown Fox jumps over the Lazy dog.
# This is a TEST string with no matches.
"""

#5. Write a Python program that matches a string that has an 'a' followed by anything, ending in 'b'.
"""
import re

def find_matches(text):
    pattern = r'a.*b$'
    matches = re.findall(pattern, text)

    if matches:
        print("Matches found:")
        for match in matches:
            print(match)
    else:
        print("No matches found.")

input_text = input("Enter the text to search: ")
find_matches(input_text)
# This is a test string that does not end in b. The cat sat on the mat. Grab the cab.
"""

#6. Write a Python program to replace all occurrences of space, comma, or dot with a colon.
"""
import re

def replace_punctuation(text):
    pattern = r'[ ,\.]'
    new_text = re.sub(pattern, ':', text)
    return new_text

input_text = input("Enter the text to modify: ")
modified_text = replace_punctuation(input_text)
print("Modified text:")
print(modified_text)
"""
"""
import re

input_string = input("Enter a string: ")
output_string = re.sub(r"[ ,.]", ":", input_string)
#output_string = ":".join(output_string.split(":"))
print(output_string)
"""
# the text to modify: The quick, brown fox. jumps over the lazy dog.

#7. Write a python program to convert snake case string to camel case string.
"""
import re

def snake_to_camel(snake_case_string):
    words = snake_case_string.split('_')
    camel_case_words = [words[0]] + [word.capitalize() for word in words[1:]]
    camel_case_string = ''.join(camel_case_words)
    return camel_case_string

input_string = input("Enter the snake case string: ")
camel_case_string = snake_to_camel(input_string)
print("Camel case string:", camel_case_string)
# my_snake_case_string
"""

#8. Write a Python program to split a string at uppercase letters.
"""
import re

def split_at_uppercase(input_string):
    pattern = r'[A-Z]'
    split_points = [m.start() for m in re.finditer(pattern, input_string)]
    result = [input_string[i:j] for i, j in zip([0] + split_points, split_points + [None])]
    return result

input_string = input("Enter the string: ")
result = split_at_uppercase(input_string)

print("Split string:", result)
"""
"""
import re

def split_at_uppercase(input_string):
    result = []

    current_substring = ""
    for char in input_string:
        if char.isupper():
            if current_substring:
                result.append(current_substring)
            current_substring = char
        else:
            current_substring += char
        
    if current_substring:
        result.append(current_substring)
    return result

input_string = input("Enter the string: ")
result = split_at_uppercase(input_string)
print("Split string:", result)
"""
    
# HelloWorldPythonIsGreat

#9. Write a Python program to insert spaces between words starting with capital letters.
"""
import re

def insert_spaces(input_string):
    result = ""

    for i, char in enumerate(input_string):
        if i > 0 and char.isupper() and input_string[i-1] != " ":
            result += " "
        result += char
    return result

input_string = input("Enter the string: ")
modified_string = insert_spaces(input_string)
print("Modified string:", modified_string)
# HelloWorldPythonIsGreat
"""

#10. Write a Python program to convert a given camel case string to snake case. 
"""
def camel_to_snake(input_string):
    result = ""

    for char in input_string:
        if char.isupper():
            if result:
                result += "_"
            result += char.lower()
        else:
            result += char
    return result

input_string = input("Enter the camel case string: ")
snake_case_string = camel_to_snake(input_string)

print("Snake case string:", snake_case_string) 

# HelloWorldPythonIsGreat
"""
