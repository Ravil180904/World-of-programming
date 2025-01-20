# 19. Prefix "Is" String Modifier

def new_string(text):
    if len(text) >= 2 and text[:2] == "Is":
        return text
    else:
        return "Is" + text

#user_input = input("Enter a text: ")
#print(new_string(user_input)) 

# 20. String Copy Generator 

def larger_string(text, n):
    result = ""

    for i in range(n):
        result = result + text
    
    return result

#string_input = input("Enter a strings: ")
#number_input = int(input("Enter a number input: "))

#print(larger_string(string_input, number_input)) 

# 23. String Prefix Copies

def substring_copy(text, n):
    flen = 2

    if flen > len(text):
        flen = len(text)
    substr = text[:flen]
    result = ""

    for i in range(n):
        result = result + substr
    return result

text_input = input("Enter a text: ")
number_input = int(input("Enter a number input: "))

print(substring_copy(text_input, number_input)) 