# 67. Pressure Unit Converter

#kpa = float(input("Input pressure in kilopascals: "))
#psi = kpa / 6.894757229
#mmhg = kpa * 760 / 101.325
#atm = kpa / 101.325

#print("The pressure in pounds per square inch: %.2f psi" % (psi))
#print("The pressure in millimeters of mercury: %.2f mmHg" % (mmhg))
#print("Atmosphere pressure: %.2f atm." % (atm)) 

# 68. Sum of Digits

#num = int(input("Input a four-digit number: "))

#x = num // 1000
#x1 = (num - x * 1000) // 100
#x2 = (num - x * 1000 - x1 * 100) // 10
#x3 = num - x * 1000 - x1 * 100 - x2 * 10

#print("The sum of digits in the number is:", x + x1 + x2 + x3)

# 69. Sort Three Numbers

#x = int(input("Input first number: "))
#y = int(input("Input second number: "))
#z = int(input("Input third number: "))

#a1 = min(x, y, z)
#a3 = max(x, y, z)
#a2 = (x + y + z) - a1 - a3

#print("Numbers in sorted order: ", a1, a2, a3) 

# 73. Line Midpoint Calculator

print("Calculate the midpoint of a line: ")
#x1 = float(input("The value of x (the first endpoint): "))
#y1 = float(input("The value of y (the first ednpoint): "))

#x2 = float(input("The value of x: "))
#y2 = float(input("The value if y: "))

#x_m_point = (x1+x2)/2
#y_m_point = (y1+y2)/2
##print()
#print("The midpoint of the line is: ")
#print("The midpoint's x value is: ", x_m_point)
#print("The midpoint's y value is: ", y_m_point)

# 77. Endianness Checker

import sys

print()

if sys.byteorder == "little":
    print("Little-endian platform")
else:
    print("Big-endian platform")
#print()

# 81. Concatenate Strings

#print("Concaterating with the + operator")
#list_of_colors = ["Red", "White", "Black"]
#colors = list_of_colors[0] + '-' + list_of_colors[1] + '-' + list_of_colors[2]
#print("All colors: " + colors) 

list_of_colors = ["Red", "White", "Black"]
#user_color = input("Please enter a color: ")
#list_of_colors.append(user_color)

colors = '-'.join(list_of_colors)
print("All colors: " + colors)

# 82. Sum of Container Items

user_input = input("Enter a list of numbers: ")
numbers = [int(x) for x in user_input.split(',')]
s = sum(numbers)
print("Sum of the container:", s)
