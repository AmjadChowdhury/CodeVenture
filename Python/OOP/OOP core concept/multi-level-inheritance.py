class Vehicle:
    def __init__(self,brand,price):
        self.brand = brand
        self.price = price
    
    def __repr__(self):
        print(f'{self.brand} r vehicle')
        return "Done"

    def move(self):
        print("vehicle is running")

class Bus(Vehicle):
    def __init__(self, brand, price,color):
        self.color = color
        super().__init__(brand, price)
    def __repr__(self):
        print(f'{self.color} rong r')
        return super().__repr__()

class Mini_bus(Bus):
    def __init__(self, brand, price, color,weight):
        self.weight = weight
        super().__init__(brand, price, color)

    def __repr__(self):
        print(f'{self.weight} ase mini bus r')
        return super().__repr__()
    
hanif = Mini_bus('hanif',760,'Red',1000)
print(hanif)