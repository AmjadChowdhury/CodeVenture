for x in range(1,10):
    print(x,end=" ")
print()  
 
for x in range(1,20,3):
    print(x,end=" ")
print()  
  
# continue
for x in range(1,10):
    if x == 5:
        continue
    print(x,end=" ")
print()

#Break
for x in range(1,10):
    if x == 5:
        break
    print(x,end=" ")
print()