# n Python, a tuple is an ordered, immutable collection of items. It is similar to a list, but cannot be modified (i.e., you cannot change, add, or remove elements after creation).


def multiple():
    return 4,5

print(multiple())

accessories = "Pen","Pencil","Sunglass","Paper"
print(accessories)
print(accessories[1])
print(accessories[1:4])
print(accessories.count('Pen')) # 1
print(accessories.index('Pen')) # 0

tuple_digit = ([3,4,5],[8,9,10])
tuple_digit[0][1] = 1
print(tuple_digit)