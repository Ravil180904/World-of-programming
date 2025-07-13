# 3. Current DateTime Display

import datetime

now = datetime.datetime.now()

print("Current date and time: ")

print(now.strftime("%Y-%m-%d %H:%M:%S"))

# 4. Circle Area Calculator

from math import pi

#r = float(input("Input the radius of the circle : "))
#area = pi * r ** 2

# Display the result, including the radius and calculated area
#print("The area of the circle with radius " + str(r) + " is: " + str(area)) 

# 5. Reverse Full Name

#fname = input("Input your First name: ")
#lname = input("Input your Last name: ")

#print("Hello " + lname + " " + fname) 

# 6. List and Tuple Generator

values = input("Input some comma-separated numbers: ")
#values = input("Input some comma-separated numbers: ").split(",")
# Split the 'values' string into a list using commas as separators and store it in the 'list' variable
list = values.split(",")
#list = values
# Convert the 'list' into a tuple and store it in the 'tuple' variable
tuple = tuple(list)

print('List : ', list)
print('Tuple : ', tuple)
