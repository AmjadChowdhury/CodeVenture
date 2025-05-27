class Gadget:
    def __init__(self,brand,price,color,origin):
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin

    def run(self):
        print(f'Gadget is running on {self.brand}')

class Laptop:
    def __init__(self,memory):
        self.memory = memory

    def display(self,program):
        print(f'Now I am watching {program} on laptop')

class Camera:
    def __init__(self,pixel):
        self.pixel = pixel

    def change_lens(self):
        print(f'Change your lens')

class Phone(Gadget):
    def __init__(self,brand,price,color,origin,dual_sim):
        self.dual_sim = dual_sim
        super().__init__(brand,price,color,origin)

    def phone_call(self,phone,text):
        print(f'Message from {phone} and the text is {text}')

    def __repr__(self):
        return f'Phone : {self.brand}'
    
my_phone = Phone("Apple",140000,"Blue","USA",True)
print(my_phone)
        