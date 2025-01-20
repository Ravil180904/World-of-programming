# 31. GCD Calculator

def gcd(x, y):
    gcd = 1

    if x % y == 0:
        return y
    for k in range(int(y/2), 0, -1):
        if x % k == 0 and y % k == 0:
            gcd = k
            break
    return gcd

#input_x = int(input("Enter a first number: "))
#input_y = int(input("Enter a second number: "))

#print("Gcd of x and y =", gcd(input_x, input_y)) 


# 32.  LCM Calculator

def lcm(x, y):
    if x > y:
        z = x
    else:
        z = y
    
    while True:
        if(z % x == 0) and (z % y == 0):
            lcm = z
            break
        z += 1
    return lcm

#input_x = int(input("Enter a first number: "))
#input_y = int(input("Enter a second number: "))

#print(lcm(input_x, input_y)) 


# 33. Triple Sum with Equality Rule

def sum_three(x, y, z):
    if x == y or y == z or x == z:
        sum = 0
    else:
        sum = x +  y + z
    return sum

#input_x = int(input("Enter a first number: "))
#input_y = int(input("Enter a second number: "))
#input_z = int(input("Enter a third number: "))

#print(sum_three(input_x, input_y, input_z)) 


# 34. Conditional Sum to 20

def sum(x, y):
    sum = x + y

    if sum in range(15, 20):
        return 20
    else:
        return sum

#input_x = int(input("Enter a first number: "))
#input_y = int(input("Enter a second number: "))
#print(sum(input_x, input_y)) 


# 35. Equality or 5 Rule Checker

def test_number5(x, y):
    # Check if any of the following conditions are met:
    # 1. x is equal to y.
    # 2. The absolute difference between x and y is equal to 5.
    # 3. The sum of x and y is equal to 5.
    if x == y or abs(x - y) == 5 or (x + y) == 5:
        return True
    else:
        return False

#input_x = int(input("Enter a first number: "))
#input_y = int(input("Enter a second number: "))

#print(test_number5(input_x, input_y)) 
