#1.
"""
a = float(3)
b = float(3.0)
c = float("3")

print(type(a), a)
print(type(b), b)
print(type(c), c)
"""
#2.
"""
a = "hello"
print(a[1])
"""

#3.
""" 
a = "hello"
print(a[1:4])
"""

#4.
"""
a = "hello"

print(a[:3])

print(a[3:])
"""

#5.
"""
a = "hello"
print(a[-1])

print(a[-3:-1])
"""

#6.
"""
a = "hello"

for x in a:
    print(x)
    print("-----")
"""

#7.
"""
a = "hello"

print(len(a))

for i in range(0, len(a)):
    print(a[i])
    print("-----")
"""

#8.
"""
ourlist = [117, 203, 392]

print("First number is:", ourlist[0])

ourlist[0] = 152
print("First number is:", ourlist[0])

ourlist[0] += 22
print("First number is:", ourlist[0])

for x in ourlist:
    print(x)
    print("-----")
"""

#9.
"""
ourlist = [117, "Dog", True, 3.14]

print(ourlist)

a, b, c, d = ourlist
print(a, b, c, d)
"""

#10.
"""
ourtuple = ("Toyota", "Camry", 2018, "White", 80000)
print(ourtuple)

print(ourtuple[0])

make, model, year, color, mileage = ourtuple

print(make, model, year, color, mileage)
"""

#11.
"""
ourdict = {
    "Dog" : 100,
    "Cat" : 50,
    "Elephant" : 2,

}
print(ourdict)

ourdict["Dog"] = 10

ourdict["Cat"] -= 20

for x in ourdict:
    print(x, ourdict)
"""

#12.
"""
ourset1 = {"Dog", "Cat", "Mouse"}

print(ourset1)

ourset2 = {"Dog", 10, True}

print(ourset2)

ourset3 = {"Dog", 10, True, 1}

print(ourset3)
"""
