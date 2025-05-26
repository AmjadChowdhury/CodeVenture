# Strings are immutable, which means once created, they cannot be changed.
# In Python, a string is a sequence of characters enclosed in quotes. Strings can be enclosed in single quotes ('...'), double quotes ("..."), or triple quotes ('''...''' or """..."""), which are used for multi-line strings.

name = "Abdullah Al Zohan"
name2 = """
Ershadul Alam Chy
Amjadul Alam Chy
"""
print(name[2:8])
# name = "Mohtadi"
# print(name)

# but you can't change the specific character...
# don't do this name[1] = 'R'

if 'Al' in name:
    print("Exists")

print(name.upper())
print(name2)

# String Method...
"""
s = "  hello world  "

s.strip()        # "hello world" (removes whitespace)
s.upper()        # "  HELLO WORLD  "
s.lower()        # "  hello world  "
s.title()        # "  Hello World  "
s.replace("l", "x")  # "  hexxo worxd  "
s.split()        # ['hello', 'world']
"hello" in s     # True
"""