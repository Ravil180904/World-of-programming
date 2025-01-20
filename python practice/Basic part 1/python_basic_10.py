# 67. Pressure Unit Converter

#kpa = float(input("Input pressure in kilopascals: "))
#psi = kpa / 6.894757229
#mmhg = kpa * 760 / 101.325
#atm = kpa / 101.325

#print("The pressure in pounds per square inch: %.2f psi" % (psi))
#print("The pressure in millimeters of mercury: %.2f mmHg" % (mmhg))
#print("Atmosphere pressure: %.2f atm." % (atm)) 

# 68. Sum of Digits

#num = int(input("Input a four-digit number: "))

#x = num // 1000
#x1 = (num - x * 1000) // 100
#x2 = (num - x * 1000 - x1 * 100) // 10
#x3 = num - x * 1000 - x1 * 100 - x2 * 10

#print("The sum of digits in the number is:", x + x1 + x2 + x3)
