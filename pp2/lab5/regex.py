#1. Write a Python program that matches a string that has an 'a' followed by zero or more 'b''s.
"""import re

word = input("Enter a word: ")
text = re.compile("[ab]+")
n = text.finditer(word)
print(list(n))
"""
#print(re.match("ab+", word))

#2. Write a Python program that matches a string that has an 'a' followed by two to three 'b'.
"""import re

word = input("Enter a word: ")
text = re.compile("ab{2,3}")
n = text.search(word)
print(n)
"""
#3. Write a Python program to find sequences of lowercase letters joined with a underscore.
"""import re

word = input("Enter a word: ")
text = re.compile('[a-z]+_[a-z]+')

matches = text.finditer(word)
print(list(matches))
"""

#4. Write a Python program to find the sequences of one upper case letter followed by lower case letters
"""import re

word = input("Enter a word: ")
text = re.compile(r"[A-Z]+_[A-Z]+")

matches = text.finditer(word)
print(list(matches))
"""
#5. Write a Python program that matches a string that has an 'a' followed by anything, ending in 'b'.
"""import re

word = input("Enter a word: ")
credit = re.compile(r'a.*?b$')
nalog = credit.finditer(word) 

print(list(nalog))
"""

#6. Write a Python program to replace all occurrences of space, comma, or dot with a colon.
"""import re

word = input("Enter a word: ")
text = re.sub("[ ,.]", ":", word)
print(text)
"""
#7. Write a python program to convert snake case string to camel case string. geeksforgeeks_is_best
"""import re

word = input("Enter a word: ")
#ipoteka = re.findall("[A-Z][a-z]*",word)
def to_camel_case(word):
    text = re.split(r"[_]", word)
    for i in range(1, len(text)):
        text[i] = text[i].capitalize()
    return text

print(''.join(to_camel_case(word)))
"""
#8. Write a Python program to split a string at uppercase letters. GeeksForGeeks

"""import re
word = input("Enter a word: ")
text = [i for i in re.split("([A-Z][^A-Z]*)", word) if i]
print(str(text))"""

#9. Write a Python program to insert spaces between words starting with capital letters. PythonExercisesPracticeSolution
"""
import re

word = input("Enter a word: ")
text = ""
for i in range(len(word)):
    if(word[i].isupper()):
        text += " "
        text += word[i]
    else:
        text += word[i]
#nalog = ' '.join(text[0:])
print(''.join(text))
"""

#10. Write a Python program to convert a given camel case string to snake case. GeeksForGeeks

"""import re

word = input("Enter a word: ")
text = re.findall("[A-Z][a-z]*", word)
def credit(text):
    for i in range(0, len(text)):
        text[i] = text[i][0].lower()+text[i][1:]
    return text
print('_'.join(credit(text)))"""
#print(''.join(nalog))
