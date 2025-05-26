numbers = [12,3,45,65,72,4,5,9,50]

numbers.append(10)
print(numbers)

numbers.insert(2,71)
print(numbers)

last = numbers.pop()
print(last, numbers)

if 41 in numbers:
    numbers.remove(41)
print(numbers)

if 45 in numbers:
    numbers.remove(45)
print(numbers)

if 45 in numbers:
    index = numbers.index(45)
    print(index)

if 3 in numbers:
    index = numbers.index(3)
    print(index)

numbers.sort()
print(numbers)

numbers.reverse()
print(numbers)