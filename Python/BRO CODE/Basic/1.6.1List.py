# list -> [] ordered and changeable,duplicates ok

fruits = ["Apple","Mango","Orange","Apple"]
# print(dir(fruits))
print(fruits[0])
print(fruits[-1])
print(fruits)

print(len(fruits))
fruits.append("Pineapple")
fruits.insert(1,"Banana")
if "Apple" in fruits:
    fruits.remove("Apple")  # Removes first occurrence
fruits.pop() # Removes last item
del fruits[0] # Deletes by index
fruits.reverse()
print(fruits)
if "Apple" in fruits:
    index = fruits.index("Apple")
    print(index)
    
fruits.clear()
print(fruits)

my_list = [1,4,5,2]
my_list[1] = 6 # modify elements
print(my_list)

print(len(my_list)) # 4, Length of list
print(min(my_list)) # 1, Minimum value
print(max(my_list)) # 6, Maximum value
print(sum(my_list)) # 14, Sum of all values

my_list.sort() # Ascending order
print(my_list) # [1, 2, 5, 6]
my_list.sort(reverse=True) # Descending order
print(my_list) # [6, 5, 2, 1]

# Loop Through List
for x in my_list:
    print(x,end=" ")
print()
    
# List comprehension
squares = [x**2 for x in my_list]
print(squares) # [36, 25, 4, 1]

# Copy a List
copy1 = my_list.copy()
copy2 = my_list[:]  # Slice method

print(copy1,copy2)

# Combine Lists
list1 = [1, 2]
list2 = [3, 4]
combined = list1 + list2
list1.extend(list2)

print(combined,list1)