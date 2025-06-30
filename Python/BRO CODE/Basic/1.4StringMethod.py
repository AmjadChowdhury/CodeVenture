name = input("Enter name : ")
print(len(name)) # returns length of a string

print(name.find('a')) # returns the index from name where a assign.if not find then returns -1
print(name.rfind('a')) # last occurance if not find then returns -1
print(name.capitalize()) # first letter capital
print(name.upper()) 
print(name.lower())
print(name.isdigit()) # returns True when name contains only digit otherwise False
print(name.isalpha()) # returns True when name contains only alphabetic otherwise False
print(name.count('a')) # returns integer.we can count how many characters are within a string
print(name.replace('a',' ')) # we have replaced all of the a with spaces

print(help(str))
