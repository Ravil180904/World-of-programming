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

1. The match_string() function takes a string as input and checks if it matches the specified regular expression pattern.
2. The regular expression pattern r'^a(b*)?$' is used to match the string:
   - ^ matches the start of the string.
   - a matches the letter 'a'.
   - (b*)? matches zero or more 'b' characters, enclosed in a capturing group.
   - $ matches the end of the string.
3. The re.match() function is used to check if the input string matches the pattern. 
If it does, a message is printed indicating that the string matches the pattern. 
Otherwise, a message is printed indicating that the string does not match the pattern.
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

1. The match_string() function takes a string as input and checks if it matches the specified regular expression pattern.
2. The regular expression pattern r'^ab{2,3}$' is used to match the string:
   - ^ matches the start of the string.
   - a matches the letter 'a'.
   - b{2,3} matches two to three 'b' characters.
   - $ matches the end of the string.
3. The re.match() function is used to check if the input string matches the pattern.
If it does, a message is printed indicating that the string matches the pattern. 
Otherwise, a message is printed indicating that the string does not match the pattern.
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

1. The find_sequences() function takes a string text as input.
2. The regular expression pattern r'\b[a-z]+_[a-z]+\b' is used to match the desired sequences:
   - \b matches a word boundary, ensuring the match is a standalone sequence.
   - [a-z]+ matches one or more lowercase letters.
   - _ matches the underscore character.
   - [a-z]+ matches one or more lowercase letters.
   - \b matches a word boundary, ensuring the match is a standalone sequence.
3. The re.findall() function is used to find all matches of the pattern in the input text.
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

1. The find_sequences() function takes a string text as input.
2. The regular expression pattern r'\b[A-Z][a-z]*\b' is used to match the desired sequences:
   - \b matches a word boundary, ensuring the match is a standalone sequence.
   - [A-Z] matches a single uppercase letter.
   - [a-z]* matches zero or more lowercase letters.
   - \b matches a word boundary, ensuring the match is a standalone sequence.
3. The re.findall() function is used to find all matches of the pattern in the input text.
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

1. The find_matches() function takes a string text as input.
2. The regular expression pattern r'a.*b$' is used to match the desired strings:
   - a matches the letter 'a'.
   - .* matches any character (except newline) zero or more times.
   - b$ matches the letter 'b' at the end of the string.
3. The re.findall() function is used to find all matches of the pattern in the input text.
4. If any matches are found, they are printed. Otherwise, a message is printed indicating that no matches were found.
5. The function is tested with three different input texts, demonstrating the matching behavior.

In the first example, the function finds two matches: "ab" and "Grab the cab".

In the second example, no matches are found, and the program prints a message indicating that no matches were found.

In the third example, the function finds one match: "Grab the cab".

The key aspects of this program are:
- The use of the a to match the letter 'a'.
- The use of .* to match any character (except newline) zero or more times.
- The use of b$ to match the letter 'b' at the end of the string.

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

1. The replace_punctuation() function takes a string text as input.
2. The regular expression pattern r'[ ,\.]' is used to match all occurrences of space, comma, or dot.
3. The re.sub() function is used to replace the matched characters with a colon (:) and store the modified text in the new_text variable.
4. The modified text is then returned by the function.
5. The program prompts the user to enter the text to modify.
6. The replace_punctuation() function is called with the user's input, and the modified text is stored in the modified_text variable.
In this program, the re.sub() function is used to perform the replacement. The regular expression pattern r'[ ,\.]' matches any space, comma, or dot character. The replacement string ':' is used to replace the matched characters with a colon.

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

1. The snake_to_camel() function takes a snake case string as input.
2. The function splits the input string by the underscore character ('_') using the split() method, creating a list of words.
3. The first word in the list is kept as is, and the rest of the words are capitalized using a list comprehension and the capitalize() method.
4. The capitalized words are then joined back into a single string using the join() method, creating the camel case string.
5. The modified camel case string is returned by the function.
6. The program prompts the user to enter a snake case string.
7. The snake_to_camel() function is called with the user's input, and the resulting camel case string is stored in the camel_case_string variable.

In this program, the key steps are:
1. Splitting the snake case string into a list of words.
2. Capitalizing the first letter of each word (except the first one).
3. Joining the capitalized words back into a single string.


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

1. The split_at_uppercase() function takes a string input_string as input.
2. The regular expression pattern r'[A-Z]' is used to find all the uppercase letters in the input string.
3. The re.finditer() function is used to find all the matches of the pattern in the input string, and the start indices of these matches are stored in the split_points list.
4. The input string is then split at the identified positions using a list comprehension. The zip() function is used to iterate over the start indices and create slices of the input string.
5. The resulting list of substrings is returned by the function.
6. The program prompts the user to enter a string.
7. The split_at_uppercase() function is called with the user's input, and the resulting list of substrings is stored in the result variable.

1. Identifying the uppercase letters in the input string using a regular expression.
2. Storing the start indices of the uppercase letters in the split_points list.
3. Splitting the input string at the identified positions using a list comprehension and the zip() function.

1. The split_at_uppercase() function takes a string input_string as input.
2. An empty list result is initialized to store the substrings.
3. The function iterates over the characters in the input string using a for loop.
4. For each character, the function checks if it is uppercase using the isupper() method.
5. If the current character is uppercase and the current_substring is not empty, the current_substring is added to the result list.
6. A new current_substring is then started with the current uppercase character.
7. If the current character is not uppercase, it is appended to the current_substring.
8. After the loop, the last current_substring is added to the result list.
9. The result list, containing the substrings, is returned by the function.
10. The program prompts the user to enter a string.
11. The split_at_uppercase() function is called with the user's input, and the resulting list of substrings is stored in the result variable.
12. The split string is printed to the console.
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

1. The insert_spaces() function takes a string input_string as input.
2. An empty string result is initialized to store the modified string.
3. The function iterates over the characters in the input string using a for loop and the enumerate() function to get the index of the current character.
4. For each character, the function checks if the current character is uppercase and the previous character is not a space.
5. If the condition is true, a space is added to the result string.
6. The current character is then added to the result string.
7. The modified string is returned by the function.
8. The program prompts the user to enter a string.
9. The insert_spaces() function is called with the user's input, and the resulting modified string is stored in the modified_string variable.
10. The modified string is printed to the console.

1. Iterating over the characters in the input string.
2. Checking if the current character is uppercase and the previous character is not a space.
3. If the condition is true, inserting a space before the current character.
4. Appending the current character to the result string.

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
1. The camel_to_snake() function takes a string input_string as input.
2. An empty string result is initialized to store the snake case string.
3. The function iterates over the characters in the input string using a for loop.
4. For each character, the function checks if the current character is uppercase using the isupper() method.
5. If the current character is uppercase, the function checks if the result string is not empty (i.e., not the first character). If it's not empty, an underscore is added to the result string.
6. The uppercase character is then converted to lowercase using the lower() method and added to the result string.
7. If the current character is lowercase, it is directly added to the result string.
8. The final result string, which represents the snake case version of the input string, is returned by the function.
9. The program prompts the user to enter a camel case string.
10. The camel_to_snake() function is called with the user's input, and the resulting snake case string is stored in the snake_case_string variable.
11. The snake case string is printed to the console.

"""
