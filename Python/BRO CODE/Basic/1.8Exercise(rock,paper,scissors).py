import random

options = ("rock","paper","scissors")
computer = random.choice(options)
player = None

while player not in options:
    player = input("Enter choice (rock,paper,scissors) : ")
    
print(f"Computer : {computer}")
print(f"Player : {player}")

if computer == player:
    print("Game tie!!")
elif player == "rock" and computer == "scissors":
    print("You Won!!")
elif player == "scissors" and computer == "paper":
    print("You won!!")
elif player == "paper" and computer == "rock":
    print("Yow won!!")
else:
    print("You lose!!")