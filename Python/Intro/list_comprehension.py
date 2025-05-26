numbers = [3,7,9,12,15,20,35,5]

odds = []
for num in numbers:
    if num % 2 == 1 and num % 5 == 0:
        odds.append(num)

print(odds) 

odds_num = [num for num in numbers if num % 2 == 1 if num % 5 == 0]
print(odds_num) # shortcut list comprehension


players = ["Ronaldo","Mbappe","Neymar"]
ages = [41,27,32]

player_age_combo = []
for player in players:
    for age in ages:
        player_age_combo.append([player,age])

print(player_age_combo) # collection of list

player_age_combo2 = [[player,age] for player in players for age in ages]
print(player_age_combo2) # shortcut list comprehension