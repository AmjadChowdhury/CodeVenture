import random

# print(help(random))
num = random.randint(1,10)
print(num)

options = ("rock","paper","scissors")
option = random.choice(options)
print(option)

cards = ["2","3","4","5","6","7","8","9","10","J","Q","K","A"]
random.shuffle(cards)
print(cards)