def double_it(num):
    result = num * 2
    print("Inside funtion.py",result)
    return result

double_it(4)

def sum(num1,num2):
    result = num1 + num2
    return(result)


total = sum(4,5)
print("Sum:",total)

# default params
# def all_sum(num1,num2,num3=0):
#     result = num1 + num2 + num3
#     return result

# print("All Sum is :",all_sum(2,3))
# print("All Sum is :",all_sum(2,3,5))

def all_sum(*numbers):
    sum = 0
    print(numbers)
    for num in numbers:
        sum += num
    return sum

print("All Sum is :",all_sum(2,3,15,5))