#1. Write a Python program to list only directories, files and all directories, files in a specified path.
"""
import os

directors = "C://Users//Darya//Documents//programming-principles-2//lab3"
files = os.listdir(directors)

print(directors)
print(files)
"""

#2. Write a Python program to check for access to a specified path. Test the existence, readability, writability and executability of the specified path
"""
import os

exist_file = os.access("C://Users//Darya//Documents//programming-principles-2//lab3", os.F_OK)
print(exist_file)
readable_file = os.access("C://Users//Darya//Documents//programming-principles-2//lab3", os.R_OK)
print(readable_file)
writable_file = os.access("C://Users//Darya//Documents//programming-principles-2//lab3", os.R_OK)
print(writable_file)
executable_file = os.access("C://Users//Darya//Documents//programming-principles-2//lab7", os.EX_OK)
print(executable_file)
"""

#3. Write a Python program to test whether a given path exists or not. If the path exist find the filename and directory portion of the given path.
"""
import os
path = "C://Users//Darya//Documents//programming-principles-2//lab3"

exists_file = os.path.exists(path)
if (exists_file == True):
    print("File name:",os.path.basename(path))
    print("Dir name:",os.path.dirname(path))
else:
    print("No")
"""

#5. Write a Python program to write a list to a file.
"""
list_input = input("Enter a list:")
list_listed = list_input.split()

with open(r'C://Users//Darya//Documents//programming-principles-2//lab6//hello.txt', 'w') as fp:
    for i in list_listed:
        fp.write("%s\n" % i)
    print("Done")
"""

#6. Write a Python program to generate 26 text files named A.txt, B.txt, and so on up to Z.txt
"""
import string
credit = string.ascii_lowercase
for i in credit:
    with open(i, 'w') as file:
        file.write(i)
"""
"""
#7. Write a Python program to copy the contents of a file to another file
from shutil import copyfile
copyfile('C://Users//Darya//Documents//programming-principles-2//lab6//hello.txt', 'abc.txt')
"""
