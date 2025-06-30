# Kilo to pounds


sign = input("Type 'A' to convert kilo to pound otherwise type 'B' to convert pound to kilo : ")
if sign.upper() == 'A':
    kilo = int(input("Enter weight in kilograms: "))
    if kilo >= 0:
        pounds = kilo * 2.20462
        print(f"{kilo} kg is equal to {pounds:.2f} pounds")
else:
    pounds = int(input("Enter weight in pounds: "))
    if pounds >= 0:
        kilo = pounds / 2.20462
        print(f"{pounds} kg is equal to {kilo:.2f} pounds")