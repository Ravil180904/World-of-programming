def is_group_member(group_data, n):
    for value in group_data:
        if n == value:
            return True
    return False

# Get input from the user for the list
user_input = input("Enter a list of items separated by space: ")
user_list = user_input.split()  # Split input into a list of strings

n = input("Enter the item to check for membership: ")  # Get the item to check (as a string)

# Call the function and print the result
result = is_group_member(user_list, n)  # Check for membership in the list of strings
print(result)  # Output will be either True or False based on membership
print(user_list)