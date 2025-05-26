numbers = [12,25,65,4,8,13,45]

#            0  1  2  3 4 5  6
# numbers = [12,25,65,4,8,13,45]
#            -7 -6 -5 -4-3-2 -1

# list(start:end:step)
print(numbers[1:7])
print(numbers[1:4])
print(numbers[1:4:1])
print(numbers[1:4:2])
print(numbers[4:1:-1])
print(numbers[:])
print(numbers[2:])
print(numbers[:6])
print(numbers[:]) # short cut copy a list
print(numbers[::-1]) # short cut reverse list