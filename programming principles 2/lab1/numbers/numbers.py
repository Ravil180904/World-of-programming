#1. Python numbers

#Example

x = 1 #int
y = 2.8 #float
z = 1j #complex

print(type(x))
print(type(y))
print(type(z))


#2. Int

x = 1
y = 35656222554887711
z = -3255522

print(type(x))
print(type(y))
print(type(z))


#3. Float

x = 1.10
y = 1.0
z = -35.59

print(type(x))
print(type(y))
print(type(z))


# Float can also be scientific numbers with an "e" to indicate the power of 10

x = 35e3
y = 12E4
z = -87.7e100

print(type(x))
print(type(y))
print(type(y))


#4. Complex


x = 3+5j
y = 5j
z = -5j

print(type(x))
print(type(y))
print(type(z))


#5. Type conversion


x = 1 # int
y = 2.8 # float
z = 1j # complex

#convert from int to float:
a = float(x)

#convert from float to int:
b = int(y)

#convert from int to complex:
c = complex(x)

print(a)
print(b)
print(c)

print(type(a))
print(type(b))
print(type(c))


#6. Random number

import random

print(random.randrange(1, 10))


#Exercise: Insert the correct syntax to convert x into a floating point number.

x = 5
x = float(x)
print(x)
print(type(x))