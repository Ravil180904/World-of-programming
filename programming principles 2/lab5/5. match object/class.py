# match object
#1. 
"""
import re

word = "roses are red, violets are blue"
matches = re.finditer("roses|violets", word)

for match in matches:
    print(match.group())
"""

#2. 
"""
import re
word = "roses are red, violets are blue"
matches = re.finditer("roses|violets", word)

for match in matches:
    print(match.start())
    print(match.end())
    print(match.span())
"""
