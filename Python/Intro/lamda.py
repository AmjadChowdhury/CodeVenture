numbers = [12,3,5,11,6]

doubled_nums = lambda x : x * 2
print(doubled_nums(4))

squared_nums = lambda x : x * x
print(squared_nums(4))

add_nums = lambda x,y : x + y
print(add_nums(5,6))

all_doubled_nums = map(doubled_nums,numbers)
print(list(all_doubled_nums))

footballer = [
    {"name": "CR7","age": 41},
    {"name": "Messi","age": 39},
    {"name": "neymar","age": 33},
    {"name": "Bappe","age": 27},
    {"name": "Bellingham","age": 23},
    {"name": "Vini","age": 24},
]

less_25_footballer = filter(lambda player: player['age'] <=25,footballer)
print(list(less_25_footballer))