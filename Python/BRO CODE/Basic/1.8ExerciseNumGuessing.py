import random

low = 1
high = 100
is_running = True
answer = random.randint(low,high)
guesses = 0

while is_running:
    guess = input(f"Enter guess between {low} to {high} : ")
    guesses += 1
    if guess.isdigit():
        guess = int(guess)
        if guess < low or guess > high:
            print("Number is out of range")
            print(f"Select number between {low} to {high}")
        elif guess < answer:
            print("Too low !!")
        elif guess > answer:
            print("Too high !!")
        else:
            print("Correct guesses")
            is_running = False
    else:
        print("Invalid !!")
        print(f"Select number between {low} to {high}")\

print(f"{answer} guesses by {guesses} times")