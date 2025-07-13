# 84. Character Frequency Counter
# Sample solution: Using count() function:

# Create a string 's' containing a sentence.
##s = "The quick brown fox jumps over the lazy dog."
#s = input("Enter a sentence: ")

# Print a message indicating the original string.
#print("Original string:")

# Print the original string 's'.
#print(s)

# Get the character to count from the user
#char_to_count = input("Enter the character to count: ")

# Print a message indicating the number of occurrences of 'o' in the string.
##print("Number of occurences of 'o' in the said string:")
#print(f"Number of occurences of '{char_to_count}' in the said string: ")

# Print the count of occurences of the character 'o' in the string 's'
##print(s.count("o"))
#print(s.count(char_to_count)) 


# Using loop: 

# Create a string 's' containing a sentence.
##s = "The quick brown fox jumps over the lazy dog."
#s = input("Enter a sentence: ")

# Print a message indicating the original string.
#print("Original string:")

# Print the oroginal string 's'.
#print(s)

# Get the character to count from the user
#char_to_count = input("Enter the character to count: ")

# Print a message indicating the number of occurences of 'o' in the string.
##print("Number of occurences of 'o' in the said string:")
#print(f"Number of occurences of '{char_to_count}' in the said string: ")

#ctr = 0

# Iterate through each character 'c' in the string 's'.
#for c in s:
    # Check if the character 'c' is equal to 'o'.
 #   #if c == 'o':
  #  if c == char_to_count:
        # If 'c' is 'o', increment the counter 'ctr' by 1.
   #     ctr = ctr + 1

# Print the final count of occurences of 'o' in the string 's'.
#print(ctr) 


# Using Lambda functions: 

# Create a string 's' containing a sentence.
##s = "The quick brown fox jumps over the lazy dog."
#s = input("Enter a sentence: ")


# Print a message indicating the original string
#print("\nOriginal string: ")

# Print the original string 's'.
#print(s)

# Get the character to count from the user
#char_to_count = input("\nEnter the character to count: ")

# Print a message indicating the number of occurrences of 'o' in the string.
##print("Number of occurences of 'o' in the said string:")
#print(f"\nNumber of occurences of '{char_to_count}' in the said string:")

# Use the `map` function along with a lambda function to count occurrences of 'o' in the string 's'.
# It maps '1' for each character containing 'o' and '0' otherwise and then sums those values.
##ctr = sum(map(lambda x: 1 if 'o' in x else 0, s))
#ctr = sum(map(lambda x: 1 if char_to_count in x else 0, s))

# Print the count of occurences of 'o'.
#print(ctr) 


# Using regular expressions: 

# Import the 're' module, which provides support for regular expressions.
import re

# Create a string 's' containing a sentence.
##s = "The quick brown fox jumps over the lazy dog."
#s = input("Enter a sentence: ")

# Print a message indicating the original string.
#print("\nOriginal string:")

# Print the original string 's'.
#print(s)

# Get the character to count from the user
#char_to_count = input("\nEnter the character to count: ")

# Print a message indicating the number of occurences of 'o' in the string.
#print("\nNumber of occurrences of 'o' in the said string:")

# Use the 're.findall' function to find all occurrences of 'o' in the string 's' and then count them.
##ctr = len(re.findall("o", s))
#ctr = len(re.findall(char_to_count, s))

# Print the count of occurences of 'o'
#print(ctr) 
