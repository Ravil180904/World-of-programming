#1. 
"""
x = 200

def myfunc():
    y = 300
    def innerfunc():
        print(y)
    innerfunc()

print(x)
myfunc()
"""
#2. 
"""
x = 200

def myfunc():
    x = 300
    def innerfunc():
        print(x)
    innerfunc()

myfunc()
print(x)
"""

#3.1. 
"""
x = 200

def myfunc():
    global x
    x = 300
    def innefunc():
        print(x)
    innefunc()

print(x)
myfunc()

#3.2. 

def myfunc():
    global x
    x = 300
    def innerfunc():
        print(x)
    innerfunc()

print(x)
myfunc()
"""
