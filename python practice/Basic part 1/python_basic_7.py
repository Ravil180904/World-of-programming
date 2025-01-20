# 38. Expression Solver (x + y) * (x + y).

#x = int(input("Enter a first number: "))
#y = int(input("Enter a second numebr: "))

#result = x * x + 2 * x * y + y * y
#print("({} + {}) ^ 2) = {}".format(x, y, result))
##print("({} + {}) ^ 2) = {}", result) 

# 40. Distance Between Points

import math

#def get_coordinates(point_name):
    #x = float(input(f"Enter the x-coordinate for {point_name}: "))
    #y = float(input(f"Enter the y-coordinate for {point_name}: "))
    #return [x, y]

#p1 = get_coordinates("p1")
#p2 = get_coordinates("p2")

#distance = math.sqrt(((p1[0] - p2[0]) ** 2) + ((p1[1] - p2[1]) ** 2))
#print(distance) 

# 48. String to Numeric Parser

#n = "246.2458"
n = str(input("Enter an input: "))

print(float(n))
print(int(float(n)))
