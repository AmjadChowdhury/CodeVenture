class Phone:
    manufactured = "China"

    def __init__(self,name,brand,price):
        self.name = name
        self.brand = brand
        self.price = price

    def msg(self,phone,sms):
        text = f'Message come from {phone} and the message is {sms}'
        print(text)

my_phone = Phone("Amr phone","Realme",24000)
print(my_phone.name,my_phone.brand,my_phone.price)

her_phone = Phone("Amr jaaner phone","Apple",140000)
print(her_phone.name,her_phone.brand,her_phone.price)
her_phone.msg("Apple","I miss u")