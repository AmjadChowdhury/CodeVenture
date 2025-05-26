# print("Give me money: ")
# input()

# money = input("Give me money : ")
# print("Money, I got",money, "taka")

first_money = input("Peyera begum, Please give me money : ")
second_money = input("Kodom ali, Please give me money : ")

print("Money i got from peyara",first_money,"And from kodom",second_money)
total_money = first_money + second_money
print("Total money",total_money)

# Type conversion
print(type(first_money))
first_money_int = int(first_money)
second_money_int = int(second_money)
total_money_int = first_money_int+second_money_int
print(type(first_money_int))
print("Total money,now after type casting form",total_money_int)
