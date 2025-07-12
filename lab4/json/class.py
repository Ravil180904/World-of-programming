# JSON - JavaScript Object Notation
#1. 
"""
import json

car = {
    "make": "Toyota",
    "color": "White",
    "year": 2023
}

car_json = json.dumps(car)
print(car_json)
"""

#2. 
"""
import json

car_json = '{"make": "Toyota", "color": "White", "year": 2023}'

car = json.loads(car_json)

key = input("Enter: ")
print(car[key])
"""

#3. 
"""
import json

file = open("C:\\Users\\Darya\\Documents\\programming-principles-2\\lab4\\json\\car.json")

car_json = file.read()
car = json.loads(car_json)

key = input("Enter: ")
print(car[key])
"""
