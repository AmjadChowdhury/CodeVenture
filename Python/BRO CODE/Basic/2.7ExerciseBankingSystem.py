def show_balance(balance):
    print("**********************")
    print(f"Balance : $ {balance}")
    print("**********************")
def deposit():
    amount = float(input("Enter deposit money : "))
    if amount > 0:
        return amount
    else:
        return 0
def withdraw(balance):
    amount = float(input("Enter withdraw money : "))
    if amount < balance:
        return amount
    else:
        print("Not enough money.!!!sorry")
        return 0
def main():
    balance = 0
    is_running = True

    while is_running:
        print("****** Bank Management *******")
        print("1. Check Balance")
        print("2. deposit")
        print("3. Withdraw")
        print("4. Exit ")
        choice = int(input("Enter Choice : "))
        if choice == 1:
            show_balance(balance)
        elif choice == 2:
            balance += deposit()
            show_balance(balance)
        elif choice == 3:
            balance -= withdraw(balance)
            show_balance(balance)
        elif choice == 4:
            is_running = False
        else:
            print("Invalid Choice")

    print("Thank you for banking")

# This ensures the main() function runs only when the file is executed directly, not when imported.
if __name__ == "__main__":
    main()
        