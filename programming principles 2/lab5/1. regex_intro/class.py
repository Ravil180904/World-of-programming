#1.
"""
import re

word = "AbcAbc"

print(re.match("Abc", word))
"""

#2.
"""
import re

word = "AbcAbcabc"
print(re.findall("Abc", word))
"""
#3.
# meta characters
# * + . \ ? [ ] { } ( ) ^ $ |
# * - 0 or more occurences
"""
import re

word = "AbcAbAbccccabc"
print(re.findall("Abc*", word))
"""

#4.
# meta characters
# * + . \ ? [ ] { } ( ) ^ $ |
# + - 1 or more occurences
"""
import re

word = "AbcAbAbccccabc"
print(re.findall("Abc+", word))
"""

#5.

# meta characters
# * + . \ ? [ ] { } ( ) ^ $ |
# ? - 0 or 1 occurence
"""
import re
word = "AbcAbAbccccabc"

print(re.findall("Abc?", word))
"""

#6.1.

# meta characters
# * + . \ ? [ ] { } ( ) ^ $ |
# . - any character
"""
import re

word = "AbcAbAbccccabc"
print(re.findall("...", word))
"""

#6.2. 

# meta characters
# * + . \ ? [ ] { } ( ) ^ $ |
# . - any character
"""
import re
word = "AbcAbAbccccabc"

print(re.findall("A.+", word))
"""

#7.

# meta characters
# * + . \ ? [ ] { } ( ) ^ $ |
# ^ - (caret) match only at the beginning
# $ - match only at the end
"""
import re
word = "Abc AbAbccccabcAbb"

print(re.findall("^Ab+", word))

print(re.findall("Ab+$", word))
"""

#8. 

# meta characters
# * + . \ ? [ ] { } ( ) ^ $ |
# | - either or
"""
import re
word = "roses are red, violets are blue"

print(re.findall("roses|violets", word))
"""
