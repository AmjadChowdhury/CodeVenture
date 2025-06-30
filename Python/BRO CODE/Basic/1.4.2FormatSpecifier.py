# {value:flags} format a value based on what flags are inserted 

price = 20
print(f"Price is {price:.2f}") # Price is 20.00
print(f"Price is {price:10}") # Price is         20,here 10 space pad
print(f"Price is {price:010}") # Price is 0000000020,here 10 space pad and left fillup with zero
print(f"Price is {price:<10}") # Price is 20        ,here 10 space pad and left justify
print(f"Price is {price:>10}") # Price is         20,here 10 space pad and right justify
print(f"Price is {price:^10}") # Price is     20    ,here 10 space pad and centre justify
print(f"Price is {price:+}") # using plis minus sign
print(f"Price is {price: }") # positive number get space and negetive get -
print(f"Price is {20000000: 10,.2f}") # Price is  20,000,000.00

