# A concise way to create lists in python compact and easier to read than traditional loops

numbers = [1,10,5,9,8,-2,7,6,-4,-3]
doubles = []

# Traditional loop
for num in numbers:
    doubles.append(num*2)
print(doubles) # [2, 20, 10, 18, 16, -4, 14, 12, -8, -6]

doubles_num = [num*2 for num in numbers]
print(doubles_num) # [2, 20, 10, 18, 16, -4, 14, 12, -8, -6]

positive_nums = [num for num in numbers if num>0]
print(positive_nums) # [1, 10, 5, 9, 8, 7, 6]

even_nums = [num for num in numbers if num % 2 == 0]
print(even_nums) # [10, 8, -2, 6, -4]

fruits = ["apple","mango","banana","pineapple"]
first_letter_fruits = [fruit[0] for fruit in fruits]
print(first_letter_fruits) # ['a', 'm', 'b', 'p']

capitalize_fruits = [fruit.capitalize() for fruit in fruits]
print(capitalize_fruits) # ['Apple', 'Mango', 'Banana', 'Pineapple']