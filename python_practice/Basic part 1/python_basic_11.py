# 83. List Greater-Than Test
# Pictorial presentation
 
# Create a list 'num' containing integer values.
##num = [2, 3, 4, 5]
#num = list(map(int, input("Enter space-separated integers: ").split()))

# Print a blank line for better readability
#print()

# Check if all elements in the 'num' list are greater than 1 and print the result
#print(all(x > 1 for x in num))

# Check if all elements in the 'num' list are greater than 4 and print the result
#print(all(x > 4 for x in num))

# Print a blank line for better readability
#print() 


# Sample solution-2: 
# Define a function 'test' that takes
# The function checks if all elements in the 'nums' list greater than 'n' and returns the result.
#def test(nums, n):
 #   return(all(x > n for x in nums))

# Create a list 'nums' containing integer values.
##nums = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
#nums = list(map(int, input("Enter numbers separated by spaces: ").split()))

# Print the original list of numbers
#print("Original list numbers: ")
#print(nums)

# Set the value of 'n' to 12
##n = 12
#n = int(input("Enter the value of n: "))

# Print a message indicating that we're checking if all numbers in the list are greater than 'n'.
#print("\nCheck whether all numbers of the said list are greater than", n)

# Call the 'test' function again with the updated 'n' value and print the result.
#print(test(nums, n)) 

