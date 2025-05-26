def famous_name(first,last,**addition):
    print(addition)
    full_name = f'{first} {last} {addition['title']}'
    print(full_name,"You can call me",addition["short_name"])

    for key,value in addition.items():
        print(f"{key} : {value}")

famous_name(first="Amjad",last="Alam",title="Chowdhury",short_name="MZ")


def a_lot(num1,num2):
    sum = num1 + num2
    mul = num1 * num2
    rem = num1 - num2
    return sum,mul,rem

all = a_lot(2,4)
print(all)
# (6, 8, -2)