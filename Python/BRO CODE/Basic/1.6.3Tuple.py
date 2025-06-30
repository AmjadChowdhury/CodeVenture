# tuple -> A tuple is an ordered, immutable collection in Python

my_tuple = (1,2,3)
print(my_tuple)

# Creating Tuples
t1 = (10 ,20 ,30)
t2 = ("Apple","Mango","Banana")
t3 = (1,)  # Single-element tuple (comma is required!)
t4 = tuple([40, 50, 60]) # Using constructor
print(t1, t2, t3, t4)

# Accessing Elements
t1 = (10 ,20 ,30, 40, 50, 60, 70)
print(t1[0]) # 10
print(t1[-1]) # 30

# Slicing
print(t1[1:4]) # (20, 30, 40)

# Nested Tuples
t1 = ((1,2),(3,4),(4,5))
print(t1[1][1]) # 4

# Search & Count
t1 = (10 ,20 ,30, 20, 40, 50, 60, 70)
print(t1.count(20)) # 2
print(t1.index(40)) # 4

# Immutability,unchangeable
t = (1, 2, 3)
# t[0] = 10 , This will raise TypeError

# Length
t1 = (10 ,20 ,30, 20, 40, 50, 60, 70)
print(len(t1)) # 8

# Tuple Concatenation
a = (1,2,3)
b = (5,6,7)
print(a + b)

# Tuple Repetition
print(a * 3) # (1, 2, 3, 1, 2, 3, 1, 2, 3)

# Loop trhough
a = (1,2,3)
for num in a:
    print(a,end=" ")
print()
    
# Tuple Unpacking
person = ("Amjad", 25, "UK")
name,age,country = person
print(name, age, country) # Amjad 25 UK
