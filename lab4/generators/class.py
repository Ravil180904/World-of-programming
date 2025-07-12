#1. Iterators and Generators
"""
nums = [1, 2, 3, 4, 5]

iter_nums = iter(nums)

print(next(iter_nums))
print(next(iter_nums))
print(next(iter_nums))
print(next(iter_nums))
print(next(iter_nums))
print(next(iter_nums))

#for num in iter_nums:
 #   print(num)


#2. Iterators and Generators

nums = [1, 2, 3, 4, 5]

iter_nums = iter(nums)
for num in iter_nums:
    print(num)
"""

#3. Iterators and generators
"""
class Mynumbers:
    def __iter__(self):
        self.a = 1
        return self
    
    def __next__(self):
        x = self.a
        self.a += 1
        return x
    
mynums = Mynumbers()
nums_iter = iter(mynums)

print(next(nums_iter))
print(next(nums_iter))
print(next(nums_iter))
"""

#4.1. Iterators and Generators
"""
class Mynumbers:
    def __iter__(self):
        self.a = 1
        return self
    
    def __next__(self):
        x = self.a
        self.a += 1
        return x
    
mynums = Mynumbers()

# infinite loop
for i in mynums:
    print(i)


#4.2. Iterators and Generators

class MyNumbers:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    
    def __iter__(self):
        return self
    
    def __next__(self):
        if self.a > self.b:
            raise StopIteration
        x = self.a
        self.a += 1
        return x

mynums = MyNumbers(1, 10)

# not infinite now
for i in mynums:
    print(i)
"""

#5. 
"""
def num_sequence(a, b):
    start = a
    stop = b
    while start <= stop:
        yield start
        start += 1

print(list(num_sequence(1, 10)))
"""

#6. 
"""
def square_sequence(a, b):
    start = a
    stop = b
    while start <= stop:
        yield start ** 2
        start += 1
print(list(square_sequence(1, 10)))
"""

#7.1.
"""
def square_sequence(a, b):
    start = a
    stop = b
    while start <= stop:
        yield start ** 2
        start += 1

for square in square_sequence(1, 10):
    print(square, end= ' ')


#7.2.
def square_sequence(a, b):
    start = a
    stop = b
    while start <= stop:
        yield start ** 2
        start += 1

squares = list(square_sequence(1, 10))
print(', '.join(map(str, squares)))


#7.3.
def square_sequence(a, b):
    start = a
    stop = b
    while start <= stop:
        yield str(start ** 2)
        start += 1

squares = list(square_sequence(1, 10))

print(', '.join(squares))
"""

#8.1.
"""
nums = list(range(10))

print(nums)

#8.2.
nums = [num ** 2 for num in range(10)]
print(nums)
"""
