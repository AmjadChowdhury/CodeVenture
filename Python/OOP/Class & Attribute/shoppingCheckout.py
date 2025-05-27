class Shopping:
    def __init__(self,name):
        self.name = name
        self.cart = []

    def add_to_cart(self,item,price,quantity):
        product = {"item": item,"price": price,"quantity": quantity}
        self.cart.append(product)

    def checkout(self,amount):
        total = 0
        for cartItem in self.cart:
            print(cartItem)
            total += cartItem["price"] * cartItem["quantity"]
        if amount > total:
            print(f"tumi {amount-total} taka back pabe.")
        elif amount < 0:
            print(f"tmr to mia takai nai..moskari koro!!!")
        else:
            print(f"tmr {total-amount} taka proyojon full pay korar jnno.")

rohan = Shopping("Rohan")
rohan.add_to_cart('Alu',20,4)
rohan.add_to_cart('Piaz',60,3)

rohan.checkout(-100)
rohan.checkout(200)
rohan.checkout(500)
