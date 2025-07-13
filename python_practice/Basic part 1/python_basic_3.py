# 16. Difference from 17

def difference(n):
    if n <= 17:
        return 17 - n
    else:
        return(n - 17) * 2

print(difference(22))
print(difference(14))

# 17. Prefix "Is" String Modifier

def new_string(text):
    if len(text) >= 2 and text[:2] == "Is":
        return text
    else:
        return "Is" + text

#user_input = input("Enter a string: ")
#print(new_string(user_input))

# 18. Triple Sum Calculator

def sum_thrice(x, y, z):
    sum = x + y + z

    if x == y == z:
        sum = sum * 3
    return sum

one_argument = int(input("Enter a first number: "))
two_argument = int(input("Enter a second number: "))
third_argument = int(input("Enter a third argument: "))

print(sum_thrice(one_argument, two_argument, third_argument)) 