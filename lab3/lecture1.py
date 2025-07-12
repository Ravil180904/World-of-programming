#1. Clases and Objects
"""
class Person:
    name = "Linus"

    def introduce(self):
        print("My name is Linus")

Linus = Person()
print(Linus.name)
Linus.introduce()


#2. Classes and Objects

class Person:
    name = "Linus"

    def introduce(self):
        print(f"My name is {self.name}")

personchik = Person()
print(personchik.name)

personchik.name = "Aminkaa"
print(personchik.name)
personchik.introduce()


#3. Define a class named Rectangle which inherits from Shape class from task 2. Class instance can be constructed by a length and width. The Rectangle class has a method which can compute the area.

class Person:
    def __init__(self):
        print("Person created!")
        name = "Anonymous"
    
    def introduce(self):
        print(f"My namew is {self.name}")

person1 = Person()
person2 = Person()
person3 = Person()


#4. Classes and objects

class Person:
    def __init__(self, name):
        self.name = name
        print(f"Person with name {self.name} created!")
    
    def introduce(self):
        print(f"My name is {self.name}")

person1 = Person("Linus")
person2 = Person("Aminka")
person3 = Person("Nikita")

person1.introduce()


#5. Classes and Objects

class Person:
    def __init__(self, name):
        self.name = name
        print(f"Person with name {self.name} created!")
    
    def introduce(self):
        print(f"My name is {self.name}")

person1 = Person("Linus")

print(person1)
print(person1.name)
person1.introduce()


#6. Classes and objects

class Person:
    def __init__(self, name):
        self.name = name
        print(f"Person with name {self.name} created!")
    
    def __str__(self):
        return f"My name is {self.name}"
    
person1 = Person("Linus")
print(person1.name)


#7. Inhetirance

class Person:
    def __init__(self, name):
        self.names = name
        print(f"Person with name {self.names} created!")
    
    def __str__(self):
        return f"My name is {self.names}"

class Student(Person):
    pass

student1 = Student("Efim")
print(student1)


#8. Inhetirance

class Person:
    def __init__(self, name):
        self.name = name
        print(f"Person with name {self.name} created!")
    
    def __str__(self):
        return f"My name is {self.name}"

class Student(Person):
    def __init__(self, name, ID):
        self.name = name
        self.ID = ID

    def __str__(self):
        return f"My name is {self.name} and my ID is {self.ID}"
    
student1 = Student("Efim", "23B2023")
print(student1)

class students(Person):
    pass
student2 = students("Efim")
print(student2)


#9. Inheritate

class Person:
    def __init__(self, name):
        self.name = name
        print(f"{self.name} created!")
    
    def __str__(self):
        return f"My name is hor {self.name}"

class Student(Person):
    #extending functionality
    def __init__(self, name, ID, age):
        super().__init__(name)
        #self.name = name
        self.ID = ID
        self.age = age

    # overriding
    def __str__(self):
        return f"My name is {self.name} and my ID is {self.ID} and age {self.age}"
    
    # adding new method
    def attendLecture(self, date):
        print(f"{self.name} attended a lecture on {date}")
    
student1 = Student("Efim", "23B2023", "18")
print(student1)

student1.attendLecture("01-02-2024")


#10.  Lambda functions

def add1(a, b):
    return a + b

lambda a, b : a + b


#11 Lambda functions

def add1(a, b):
    return a + b

add2 = lambda a, b : a + b

print(add1(5, 4))
print(add2(7, 2))


#12. Lambda functions

def ourmap(func, arr):
    for element in arr:
        print(func(element))

nums = [1, 2, 3, 4, 5]
ourmap(lambda a : a ** 2, nums)


#13. Lambda functions

def ourmap(func, arr):
    result = []

    for element in arr:
        result.append(func(element))
    
    return result

nums = [1, 2, 3, 4, 5]

print(ourmap(lambda a: a ** 2, nums))


#nums = [1, 2, 3, 4, 5]

#result = list(map(lambda x: x ** 2, nums))
#print(result)


#14. Lambda functions

def power(n):
    return lambda a : a ** n

#square = power(2)

#cube = power(3)

n_value = int(input("enter the value of n for the power function: "))
base_value = int(input("Enter the base value: "))

custom_power = power(n_value)

print(f"{base_value} raised to the power of {n_value} is: {custom_power(base_value)}")


#15. 
a = input()
b = input()

print(type(a), type(b))
print(a + b)


#16. How to get input
a = int(input())
b = int(input())

print(type(a), type(b))
print(a + b)
"""
