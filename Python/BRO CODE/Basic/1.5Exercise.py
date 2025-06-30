# Interest calculator...
# A = p(a + (r/n))^n

principle = int(input("Principle : "))
while principle < 0 :
    principle = int(input("Principle : "))

rate = int(input("Rate : "))
while rate < 0:
    rate = int(input("Rate : "))
    
time = int(input("Time : "))
while time < 0:
    time = int(input("Time : "))
    
result = principle * pow((1 + (rate/100)),2)
print(f"Interest is : {result}")
    