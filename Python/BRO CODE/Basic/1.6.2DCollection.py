matrix = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
]

print(matrix[0])
print(matrix[1][2])

print(len(matrix))
print(len(matrix[0]))

for row in matrix:
    for x in row:
        print(x,end=" ")
    print()
print()