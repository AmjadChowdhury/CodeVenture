def timer(func):
    def inner(*args):
        print("Time starting...")
        func(*args)
        print("Time ended...")
    return inner
    

@timer
def fact(n):
    print("factorial func...")
    print(n)

# timer(fact)
fact(3)