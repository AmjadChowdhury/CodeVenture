# Consession stand program

menu = {"paratha": 15,
        "naan": 15,
        "firni": 50,
        "soda": 40,
        "coffee": 80,
        "water": 20}

print("---------- Menu ---------")
for key,value in menu.items():
    print(f"{key:10}:{value}")
print("-------------------------")

cart = []
total = 0

while True:
    food = input("Food item name(q to quit) : ")
    if food.lower() == 'q':
        break
    elif menu.get(food) is not None:
        cart.append(food)
    else:
        print(f"Sorry, This {food} is not available here.")

for item in cart:
    total += menu.get(item)
    print(item,end=" ")
print()
print(f"Total bill {total}")