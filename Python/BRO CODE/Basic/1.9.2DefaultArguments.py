# Default arguments are used in function definitions to provide default values for one or more parameters. If the caller does not provide a value for that parameter, the default value is used.
# Default arguments must come after non-default ones.

def greet(name,age = 18):
    print(f"Hello {name},you are {age} years old")
    
greet("Rahat") # Hello Rahat,you are 18 years old
greet("Sabuj",20) # Hello Sabuj,you are 20 years old