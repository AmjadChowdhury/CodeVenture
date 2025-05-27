class Phone:
    name = "Samsung s24 ultra"
    price = 124000
    brand = "Samsung"

    def call(self):
        print("One person calling")

    def msg(self,phone,sms):
        text = f'Message come from {phone} and the message is : {sms}'
        return text

my_phone = Phone()
print(my_phone.brand)
my_phone.call()
result = my_phone.msg(880,"I miss you")
print(result)