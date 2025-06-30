def display_invoice(name,amount):
    print(f"Hello {name}")
    print(f"Total amount : ${amount}")
    
    
display_invoice("rahat",50)

def fullName(firstName,lastName):
    firstName = firstName.capitalize()
    lastName = lastName.capitalize()
    return firstName + " " + lastName
   
print(fullName("amjad","chy"))