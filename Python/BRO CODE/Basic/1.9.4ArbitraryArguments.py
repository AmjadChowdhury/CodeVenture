# Arbitrary arguments allow a function to accept any number of arguments, even if you don’t know in advance how many will be passed.

# There are two types:
# 1. *args → Arbitrary Positional Arguments.Collects extra positional arguments into a tuple.
# 2. **kwargs → Arbitrary Keyword Arguments. Collects extra keyword arguments into a dictionary.

def greet(*args):
    for arg in args:
        print(arg,end=" ")
    print()

greet("Amjad","Esha","Eashfin","Zohan") # Amjad Esha Eashfin Zohan 

def sum(*nums):
    total = 0
    for num in nums:
        total += num
    print(f"Total is {total}")
    
sum(2,4,5,9) # Total is 20

def profile(**kwargs):
    for key,value in kwargs.items():
        print(f"{key:10} : {value}")
    print()

profile(name="Ershad",age=40,country="U.K.")
# name       : Ershad
# age        : 40
# country    : U.K.

# combine
def show_info(greeting, *args, **kwargs):
    print(greeting)
    print("People:", args)
    print("Details:", kwargs)

show_info("Welcome", "Alice", "Bob", age=30, country="Bangladesh")