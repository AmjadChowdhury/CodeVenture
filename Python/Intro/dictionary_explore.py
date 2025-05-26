# dictionary
# ChatGPT said:
# In Python, a dictionary is an unordered, mutable collection of key-value pairs. It’s one of the most powerful built-in data types.


person = {"name": "Amjad","job": "Senior SWE","cgpa": 3.60,"hobby":"Football"}
print(person)
print(person["hobby"])

person['job'] = "Backend Engineer"
print(person)

del person["cgpa"]
print(person)

person["email"] = "aachy@example.com"
print(person)

print(person.keys())
print(person.values())

for key,value in person.items():
    print(key,value)