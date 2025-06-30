numbers = [1,2,3,4,5]

for num in numbers:
    print(num,end=" ") # 1 2 3 4 5
print()
    
for num in reversed(numbers):
    print(num,end=" ") # 5 4 3 2 1
print()

tuple_numbers = (1,3,5,7,9)
for num in reversed(tuple_numbers):
    print(num,end=" ") # 9 7 5 3 1
print()

set_numbers = {1,5,10,15}
# set reversed is not possible
# for num in reversed(set_numbers):
#     print(num,end=" ")

profile = {
    "name": "Amjad",
    "age" : 22,
    "country": "Bangladesh"
}

for key,value in profile.items():
    print(f"{key:10} : {value}")