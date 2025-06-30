for x in range(3):
    for y in range(1,10):
        print(y,end=" ")
    print()
    
rows = int(input("enter rows : "))
cols = int(input("enter cols : "))

for x in range(rows):
    for y in range(cols):
        print(f"{x}{y}",end=" ")
    print()