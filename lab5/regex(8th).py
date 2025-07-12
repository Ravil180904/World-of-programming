#8. Write a Python program to split a string at uppercase letters.

import re

def split_at_uppercase(input_string):
    return re.findall('[A-Z][^A-Z]*', input_string)

input_string = input("Enter a string: ")
result = split_at_uppercase(input_string)
print(result)

# HelloWorldMyNameIsPython 
