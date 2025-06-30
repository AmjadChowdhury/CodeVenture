# Python follows the LEGB order to resolve variable names:

# Local → Check inside the current function.

# Enclosing → Check in the outer functions (if nested).

# Global → Check in the top-level script or module.

# Built-in → Finally, check Python’s built-in names.

x = "global"

def outer():
    x = "enclosing"
    def inner():
        x = "local"
        print(x)
    inner()

outer() # local

x = "global"

def outer():
    x = "enclosing"
    def inner():
        print(x)
    inner()

outer() # enclosing


x = "global"

def outer():
    def inner():
        print(x)
    inner()

outer() # global