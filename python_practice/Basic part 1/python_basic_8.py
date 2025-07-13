# 57. Method Execution Time

import time

def sum_of_n_numbers(n):
    start_time = time.time()

    s = 0
    for i in range(1, n+1):
        s = s + i
    end_time = time.time()
    return s, end_time - start_time

#n = int(input("Enter a number: "))
#print("Time to sum of 1 to", n, "and required time to calculate is:", sum_of_n_numbers(n)) 

# 58. Sum of First n Positives 

#n = int(input("Input a number: "))
#sum_num = (n * (n + 1)) / 2
#print("Sum of the first", n , "positive integers:", sum_num) 

# 59. Height to Centimeters

print("Input your height: ")

#h_ft = int(input("Feet: "))
#h_inch = int(input("Inches: "))
#h_inch = h_ft * 12
#h_cm = round(h_inch * 2.54, 1)

#print("Your height is: %d cm." % h_cm) 
#print("Your height is:", h_cm) 

# 60. Triangle Hypotenuse Calculator\

from math import sqrt
print("Input lengths of shorter triangle sides:")

a = float(input("a: "))
b = float(input("b: "))
c = sqrt(a**2 + b**2)
print("The length of the hypotenuse is:", c) 