# Boolean values

#Example 1
print(10 > 9)
print(10 == 9)
print(10 < 9)

#Example 2
a = 200
b = 33
if b > a:
    print("b is greater than a")
else:
    print("b is not greater than a")


#Evaluate values and variables
#Example 3
print(bool("Hello"))
print(bool(15))

#Example 4
x = "Hello"
y = 15
print(bool(x))
print(bool(y))
print("\n")

#Most values are true
#Example 5
print(bool("abc"))
print(bool(123))
print(bool(["apple", "cherry", "banana"]))
print("\n")

#Some values are false
#Example 6
print(bool(False))
print(bool(None))
print(bool(0))
print(bool(""))
print(bool(()))
print(bool([]))
print(bool({}))
print("\n")

#Example 7
class myclass():
    def _len_(self):
        return 0

myobj = myclass()
print(bool(myobj))


#Functions can return a boolean
#Example 8
def myFunction():
    return True

print(myFunction())

#Example 9
def myFunction():
    return True

if myFunction():
    print("YES!")
else:
    print("NO!")

#example 10
x = 200
print(isinstance(x, int))