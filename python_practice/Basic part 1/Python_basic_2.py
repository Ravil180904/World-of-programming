# 7. File Extension Extractor

#filename = input("Input the Filename: ")
#f_extns = filename.split(".")

#print("The extension of the file is : " + repr(f_extns[-1]))
#print("The extension of the file is : " + (f_extns[-1]))

# 8. First and Last Colors

color_list = ["Red", "Green", "White", "Black"]

print("%s %s" % (color_list[0], color_list[-1]))

# 9. Exam Schedule Formatter

exam_st_date = (11, 12, 2014)
print("The examination will start from : %i / %i / %i" % exam_st_date)

#10. Number Expansion Calculator
# Input 5 
# Output 5 5 555: 555+55+5=615
#a = int(input("Input an integer: "))

#n1 = int("%s" % a)
#n2 = int("%s%s" % (a, a))
#n3 = int("%s%s%s" % (a, a, a))

#print(n1 + n2 + n3) 

# 12. Monthly Calendar Display

import calendar

#y = int(input("Input the year: "))
#m = int(input("Input the month: "))

#print(calendar.month(y, m))

# 15. Sphere Volume Calculator

pi = 3.1415926535897931
r = 6.0
V = 4.0/3.0 * pi * r**3

print("The volume of the sphere is: ", V)
