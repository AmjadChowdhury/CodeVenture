# if else..

num = 2
if num % 2 == 0:
    print("Even Number")
else:
    print("Odd Number")
    
# Logical Operator -> or,and,not

num = int(input("Enter number : "))
if num % 2 == 0 and num % 5 == 0:
    print(f"{num} is divisible by 5 and 2")
elif num % 2 == 0 or num % 5 == 0:
    print(f"{num} is divisible by 5 or 2")
else:
    print(f"{num} is not divisible by 5 or 2")
    
# conditional expression..
# [x if condition else y]

a = int(input("a -> "))
b = int(input("b -> "))
max_num = a if a>b else b
print(max_num)

result = "Even" if num % 2 == 0 else "Odd"
print(result)