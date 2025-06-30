print("Hello!This is my first python program.")
# variable
# string,integer,float,boolean
first_name = "Hello Bro"
print(type(first_name)) # <class 'str'>

# typecasting
# str(),int(),float(),bool()
is_amjad = True
is_amjad = int(is_amjad)
print(is_amjad,type(is_amjad)) # 1 <class 'int'>

number = 122
number = bool(number)
print(number,type(number)) # True <class 'bool'>

# For input
# Return the entered data as a string
name = input("Please,enter your name : ")
print(name) 

phone_number = input("Enter phone number : ")
print(phone_number,type(phone_number)) # 101001 <class 'str'>

another_phone = int(input("Enter another phone number : "))
print(another_phone,type(another_phone)) # 1747 <class 'int'>