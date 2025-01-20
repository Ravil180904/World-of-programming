#1. Define a class which has at least two methods: getString: to get a string from console input printString: to print the string in upper case.
"""
class StringOperation:
    def __init__(self):
        self.string = ""

    def getstring(self):
        self.string = input("Enter a string: ")
    
    def printString(self):
        print(self.string.upper())
# Create an instance of the class
string_obj = StringOperation()
# Call the getString method to get the string input
string_obj.getstring()
# Call the printString method to print the string in uppercase
string_obj.printString()

#2. Define a class named Shape and its subclass Square. The Square class has an init function which takes a length as argument. Both classes have a area function which can print the area of the shape where Shape's area is 0 by default.

class Shape:
    def area(self):
        return 0
class Square(Shape):
    def __init__(self, length):
        self.length = length

    def area(self):
        return self.length ** 2
# Get the length of the square from the user   
length = float(input("Enter a number:"))
# Create an instance of the Square class 
square_obj = Square(length)
# Call the area function of the Square class
print("Area of the square:", square_obj.area())
# Call the area function of the parent Shape class
shape_obj = Shape()
print("Area of the default shape:", shape_obj.area())


#3. Define a class named Rectangle which inherits from Shape class from task 2. Class instance can be constructed by a length and width. The Rectangle class has a method which can compute the area.

class Shape:
    def area(self):
        return 0
    
class Square(Shape):
    def __init__(self, length):
        self.length = length

    def area(self):
        return self.length ** 2

class Rectangle(Shape):
    def __init__(self, length, width):
        self.length = length
        self.width = width

    def area(self):
        return self.length * self.width

# Get the length and width of the rectangle from the user
length = float(input("Enter the length:"))
width = float(input("Enter the width:"))

# Create an instance of the Rectangle class
rectangle_obj = Rectangle(length, width)

# Call the area function of the Rectangle class
print("Area of the rectangle:", rectangle_obj.area())

#Create an instance of the Square class
squarch = float(input("Enter a squared:"))
square_obj = Square(squarch)

# Call the area function of the Square class
print("Area of the square:", square_obj.area())

# Call the area function of the parent Shape class
shape_obj = Shape()
print("Area of the default shape:", shape_obj.area())


#4. Write the definition of a Point class. Objects from this class should have a
# a method show to display the coordinates of the point
# a method move to change these coordinates
# a method dist that computes the distance between 2 points

#6. Write a program which can filter prime numbers in a list by using filter function. Note: Use lambda to define anonymous functions.

def is_prime(num):
    if num < 2:
        return False
    for i in range(2, int(num ** 0.5) + 1):
        if num % i == 0:
            return False
    return True

# Take input from the user
number_input = int(input("Enter the maximum number: "))

# Generate a list of numbers from 2 to the maximum number
number = list(range(2, number_input + 1))

# Filter prime numbers using the filter function and a lambda
prime_numbers = list(filter(lambda x: is_prime(x), number))
print("Prime numbers up to", number_input, "are:", prime_numbers)
"""
