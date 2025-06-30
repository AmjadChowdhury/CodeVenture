# Shopping cart
# By using while loop and list

cart = []
prices = []
while True:
    items = input("Enter items name(for quite 'q') : ")
    if items.lower() == 'q':
        break
    cart.append(items)
    price = int(input(f"price for {items} : "))
    prices.append(price)

total = 0
for price in prices:
    total += price

print(cart) 
print(f"Total price ${total}")