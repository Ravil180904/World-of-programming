#for match in matches: 

"""class Person:
    def __init__(self, name, surname, ID):
        self.name = name
        self.surname = surname
        self.ID = ID
    def __str__(self):
        return self.name + " " + self.surname + self.ID

class Student(Person):
    def __init__(self, name, surname, ID):
        self.name = name
        self.surname = surname
        self.ID = ID

    def __str__(self):
        return self.name + " " + self.surname + " " + self.ID
    
student = Student("Linus", "Torvalds", "23B2024")

print(student.name)
print(student.surname)
print(student.ID)
print(student)
"""

"""class Person:
    def __init__(self, name, surname, ID):
        self.name = name
        self.surname = surname
        self.ID = ID
    def __str__(self):
        return self.name + " " + self.surname + self.ID

class Student(Person):
    def __init__(self, name, surname, ID):
        self.name = name
        self.surname = surname
        self.ID = ID

    def __str__(self):
        return self.name + " " + self.surname + " " + self.ID
    
student = Student("Linus", "Torvalds", "23B2024")

print(student.name)
print(student.surname)
print(student.ID)
print(student)"""

"""import re

string = "Abccc123 Abc_Ab12345Ab Ab"
pattern = re.compile("Abc")
print(pattern)
print()
print(re.findall(r"\bAb", string))
print()

print(re.match("Ab", string))
match_object = re.match("Abcc", string)
print(match_object)
print(match_object.string)
"""

import re

name = input ("Enter a file:")
hand = open (name,'r')
for line in hand:
    line = line.rstrip()
    str = re.findall('^a.*$b\w',line)
    print (str)
