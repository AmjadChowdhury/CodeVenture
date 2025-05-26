balance = 5000

def buy_things(item,price):
    dream_phone = "XPhone" # local variable
    # you can access global variable without using global keyword
    # if you want to modify,you should use global keyword
    global balance
    balance = balance - price
    print(f"Main balance after buying {item}",balance)


buy_things("Sunglass",400)
print("Now, Main balance is : ",balance)