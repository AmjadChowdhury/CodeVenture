# python calculator...

num1 = int(input("Enter a number : "))
num2 = int(input("Enter another number : "))
sign = input("Enter sign which operation you want : ")
if sign == '+':
    result = num1 + num2
    print(f"Result : {result}")
elif sign == '-':
    result = num1 - num2
    print(f"Result : {result}")
elif sign == '*':
    result = num1 * num2
    print(f"Result : {result}")
elif sign == '/':
    result = num1 / num2
    print(f"Result : {result:.2f}")
elif sign == "%":
    result = num1 % num2
    print(f"Result : {result}")
else:
    print("Not a valid")