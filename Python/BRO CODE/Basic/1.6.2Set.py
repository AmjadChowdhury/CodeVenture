# set -> {} unordered and immutable,but add/remove ok.no duplicates

my_set = {1,4,5}
empty_set = set()
print(my_set,empty_set) # {1, 4, 5} set()
empty_set.add(4)
print(empty_set) # {4}

# Add Elements
my_set.add(3)
my_set.update([7,8]) # # Add multiple elements
print(my_set)

# Remove Elements
if 2 in my_set:
    my_set.remove(2)
my_set.discard(11) # No error if 11 not found
my_set.pop() # Removes a random element
print(my_set)
my_set.clear() # Empties the set
print(my_set)

# Loop Through Set
a = {1,2,3,4}
b = {4,5,6}
for num in a:
    print(num,end=" ")
print()

# Set Operations
# Union
print(a | b) # {1, 2, 3, 4, 5, 6}
print(a.union(b)) # {1, 2, 3, 4, 5, 6}
# Intersection
print(a & b) # {4}
print(a.intersection(b)) # {4}
# Difference
print(a - b) # {1, 2, 3}
print(a.difference(b)) # {1, 2, 3}
# Symmetric Difference
print(a ^ b) # {1, 2, 3, 5, 6}
print(a.symmetric_difference(b)) # {1, 2, 3, 5, 6}

# Check Subsets and Supersets, Disjoint Sets
a = {1,2}
b = {1,2,3}
c = {4,5}
print(a.issubset(b)) # True
print(b.issuperset(a)) # True
print(a.isdisjoint(c)) # True

# Set Comprehension
square_set = [x**2 for x in a]
print(square_set) # [1, 4]

# Membership Test
if 2 in a:
    print("Yes, 2 exist") # Yes, 2 exist