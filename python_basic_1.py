# 1. Unique Numbers Check
# Sample solution

# Define a function named test_distinct that takes a list 'data' as a parameter.
#def test_distinct(data):
    # Check if the length of the list is equal to the length of the set created from the list.
 #   if len(data) == len(set(data)):
        # If the lengths are equal, it means all elements in the list are distinct.
  #      return True
   # else:
        # If the lengths are not equal, there are duplicate elements in the list.
    #    return False

# Get input from the user, split by spaces, and convert to integers
#user_input = input("Enter a list of numbers separated by spaces: ")
#data_list = list(map(int, user_input.strip().split()))

# Call the test_distinct function with the user's input and print the result.
#print(test_distinct(data_list))

# Call the test_distinct function with a list [1, 5, 7, 9] and print the result.
##print(test_distinct([1, 5, 7, 9]))

# Call the test_distinct function with a list [2, 4, 5, 5, 7, 9] and print the result.
##print(test_distinct([2, 4, 5, 5, 7, 9]))



# 2. All Unique Strings

# Import the 'random' module to shuffle elements in a list
#import random

# Create a list of characters containing vowels.
#char_list = ['a', 'e', 'i', 'o', 'u']

# Shuffle the elements in the 'char_list' randomly.
#random.shuffle(char_list)

# Print the shuffled list of characters as a string.
#print(''.join(char_list))


# 3. Remove Every Third
# Sample solution

# Define a function named 'remove_nums' that takes a list 'int_list' as a parameter.
#def remove_nums(int_list):
    # Set the starting position for removal to the 3rd element (0-based index).
 #   position = 3 - 1
    # Initialize the index variable to 0.
  #  idx = 0
    # Get the length of the input list.
   # len_list = len(int_list)

    # Continue removing elements until the list is empty.
    #while len_list > 0:
        # Calculate the new index based on the starting position and current index.
     #   idx = (position + idx) % len_list
        # Print and remove the element at the calculated index.
      #  print(int_list.pop(idx))
        # Decrement the length of the list.
       # len_list -= 1

# Create a list of numbers.
##nums = [10, 20, 30, 40, 50, 60, 70, 80, 90]

# Accept input from the user.
#user_input = input("Enter numbers separated by spaces: ")
#nums = [int(x) for x in user_input.split()]

# Call the 'remove_nums' function with the list of numbers.
#remove_nums(nums)
