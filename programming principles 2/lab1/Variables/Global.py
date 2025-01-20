#1. Global variables

x = "awesome"

def myfunc():
    print("Python is " + x)
myfunc()

x = "awesome"

def myfunc():
    x = "fantastic"
    print("Python is " + x)

myfunc()
print("Python is " + x)


#2. the global keyword

x = "awesome"

def myfunc():
    global x
    x = "fantastic"

myfunc()

print("Python is " + x)
