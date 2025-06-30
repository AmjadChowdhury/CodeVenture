# Keyword arguments are passed to a function using the name of the parameter, explicitly specifying which argument goes where — regardless of order.

def greet(name,age = 18):
    print(f"Hello {name}!You are {age} years old.")
    
greet(name="Esha",age=7) # Hello Esha!You are 7 years old.