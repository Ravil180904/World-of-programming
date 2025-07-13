# 61 Feet to Other Units

#d_ft = int(input("Input distance in feet: "))
#d_inches = d_ft * 12
#d_yards = d_ft / 3.0
#d_miles = d_ft / 5280.0

#print("The distance in inches is %i inches." % d_inches)
##print(f"The distance in inches is {d_inches} inches.")

#print("The distance in yards is %.2f yards" % d_yards)
#print("The distance in miles is %.2f miles." % d_miles) 

# 62. Time to Seconds Converter

#days = int(input("Input days: ")) * 3600 * 24
#hours = int(input("Input hours: ")) * 3600
#minutes = int(input("Input minutes: ")) * 60
#seconds = int(input("Input seconds: "))

#time = days + hours + minutes + seconds
#print("The amount of seconds:", time) 

# 65. Seconds to DHMS Converter

time = float(input("Input time in seconds: "))

day = time // (24 * 3600)
time = time % (24 * 3600)
hour = time // 3600
time %= 3600
minutes = time // 60
time %= 60
seconds = time

print("d:h:m:s-> %d:%d:%d:%d" % (day, hour, minutes, seconds)) 
