import random

def spin_row():
    bet_fruits = ["apple", "mango", "banana", "pineapple"]
    return [random.choice(bet_fruits) for _ in range(3)]

def print_spin(row):
    print(" | ".join(row))
    print()

def payout_bet(bet, row):
    if row[0] == row[1] == row[2]:
        if row[0] == "apple":
            return bet * 3
        elif row[0] == "mango":
            return bet * 4
        elif row[0] == "banana":
            return bet * 5
        elif row[0] == "pineapple":
            return bet * 10
    return 0

def main():
    balance = 100

    while True:
        print(f"\nCurrent Balance: ${balance}")
        bet = input("Enter bet amount: ").strip()
        
        if not bet.isdigit():
            print("This is not a valid amount.")
            continue
        
        bet = int(bet)
        if bet <= 0:
            print("Zero or negative amount is not allowed.")
            continue
        if bet > balance:
            print("Insufficient balance!")
            continue

        balance -= bet
        row = spin_row()
        print("\n Spinning... ")
        print_spin(row)

        payout = payout_bet(bet, row)
        if payout > 0:
            print(f"You won! Payout: ${payout}")
        else:
            print("No match. Better luck next time!")

        balance += payout
        print(f"New Balance: ${balance}")

        if balance == 0:
            print("You're out of money! Game over.")
            break

        if input("Would you like to play again? (y/n): ").strip().lower() != "y":
            print("Thanks for playing!")
            break


if __name__ == "__main__":
    main()