# Accessing elements of a sequence unsing []
# [start:end:step]
#             0 1 2 
credit_num = "1234-5678-9012-3456"
#                          -3-2-1
print(credit_num[1]) # 2
print(credit_num[-2]) # 5
print(credit_num) # 1234-5678-9012-3456
print(credit_num[1:5]) # 234-
print(credit_num[1:5:2]) # 24
print(credit_num[::2]) # 13-6891-46
print(credit_num[::-1]) # 6543-2109-8765-4321 reverse string