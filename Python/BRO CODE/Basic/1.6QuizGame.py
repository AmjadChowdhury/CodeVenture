questions = ["Q1. Which list method is used to remove the first matching value?",
             "Q2. Which method is used to combine two lists into one?",
             "Q3. Which of the following methods is used to add an element at the end of a list?"]

answers = [
    ['A. pop()','B. del','C. remove()','D. clear()'],
    ['A. append()','B. combine()','C. merge()','D. extend()'],
    ['A. insert()','B. append()','C. add()','D. extend()']]
Guesses = ['C','D','B']
correctGuesses = 0
for i in range(len(questions)):
    print(questions[i])
    for answer in answers[i]:
        print(answer)
    
    guess = input("Answer : ")
    if guess.upper() == Guesses[i]:
        correctGuesses += 1
        print("Correct")
    else:
        print(f"Correct answer : {Guesses[i]}")
        
print(f"Obtained marks {correctGuesses}/{len(questions)}")