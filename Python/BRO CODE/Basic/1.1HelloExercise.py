# cart Exercise

items = input("Item name : ")
price = float(input(f"price for {items} : "))
quantity = int(input(f"How many {items} you wnat to buy : "))

total = price * quantity
print("--------------cart---------------")
print(f"Total bill you should pay to buy {items} is {total}")

# Madlabs Program
name = input("Enter a name: ")
place = input("Enter a place: ")
thing = input("Enter a thing: ")
animal = input("Enter an animal: ")

print(f"{name} went to {place} with a {animal} to find a magical {thing}.")