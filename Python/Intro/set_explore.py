# In Python, a set is an unordered, mutable collection of unique elements.
# s1 = {1, 2, 3}
# s2 = set([4, 5, 6])   # From list
# s3 = set("hello")     # {'h', 'e', 'l', 'o'}
# s4 = set()            # Empty set (NOT `{}`, which is a dict)



numbers = [5,10,15,3,5,10,3,15]
numbers_set = set(numbers)
print(numbers_set)

numbers_set.add(12)
print(numbers_set)

if 12 in numbers_set:
    numbers_set.remove(12)
    print(numbers_set)

A = {1,3,5,7}
B = {1,2,3,4,5,6,7}

print(A & B)
print(A | B)

# s = {1, 2, 3}

# s.add(4)           # {1, 2, 3, 4}
# s.remove(2)        # {1, 3, 4} — raises error if 2 not in set
# s.discard(5)       # No error even if 5 not in set
# s.pop()            # Removes a random element
# s.clear()          # Empties the set
# a = {1, 2, 3}
# b = {3, 4, 5}

# a | b      # Union: {1, 2, 3, 4, 5}
# a & b      # Intersection: {3}
# a - b      # Difference: {1, 2}
# a ^ b      # Symmetric Difference: {1, 2, 4, 5}