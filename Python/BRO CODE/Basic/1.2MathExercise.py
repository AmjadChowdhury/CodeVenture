# Circumference and area of a circle

# circumference = 2 * 3.14 * r
# area = 3.14 * r * r
import math
radius = int(input("Enter radius of a circle : "))
circumference = 2 * math.pi * radius
area = math.pi * pow(radius,2)

print(f"Circumference : {circumference:.2f} and area : {area:.2f} of a circle")

# c = sqrt(pow(a,2)+pow(b,2))

a = int(input("Enter side a : "))
b = int(input("Enter side b : "))
c = math.sqrt(pow(a,2) + pow(b,2))
print(f"Another side c is {c:.2f}")