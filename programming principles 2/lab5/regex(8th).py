#8. Write a Python program to split a string at uppercase letters.

import re

def split_at_uppercase(input_string):
    return re.findall('[A-Z][^A-Z]*', input_string)

input_string = input("Enter a string: ")
result = split_at_uppercase(input_string)
print(result)

#1. The program prompts the user to enter a string using the input() function and stores it in the input_string variable.
#2. The split_at_uppercase() function is called with the user-provided input_string as an argument.
#3. The resulting list of substrings is stored in the result variable.
#4. Finally, the result list is printed to the console.
# HelloWorldMyNameIsPython 
