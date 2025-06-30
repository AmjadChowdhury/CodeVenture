# positional arguments are arguments that are passed to a function in the correct positional order. That means their position in the function call determines which parameter they are assigned to.

def greet(name, age):
    print(f"Hello {name}, you are {age} years old.")

greet("Zohan", 1)

def add(a,b):
    return a+b

result = add(4,5)
print(result)