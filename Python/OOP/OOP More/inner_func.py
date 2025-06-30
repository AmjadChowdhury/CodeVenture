def grandpa():
    print("Hello, I am grand papa")
    def papa():
        print("Hello,I am your papa")
        return 100
        
    return papa

print(grandpa()())
# Hello, I am grand papa
# Hello,I am your papa
# 100

def do_something(work):
    print("Please , do something!!!")
    work()
    print("Done")

def coding():
    print("Now, I am learning python!!!")

do_something(coding)
# Please , do something!!!
# Now, I am learning python!!!
# Done