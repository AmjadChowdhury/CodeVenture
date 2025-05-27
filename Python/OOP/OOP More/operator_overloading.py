class Person:
    def __init__(self,name,age,height,weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print(f"Hello {self.name}, Goru mach mangso ja paw ta khao.")

class Cricketer(Person):
    def __init__(self, name, age, height, weight,position):
        self.position = position
        super().__init__(name, age, height, weight)
    # method override...
    def eat(self):
        print(f"Hello {self.name},Tmi jeheto {self.position}, tai tmr vegetabel kawa drkar")
    def __add__(self,other):
        return self.weight + other.weight
    def __mul__(self,other):
        return self.age*self.age
    def __len__(self):
        return self.height
    
Tamim = Cricketer("Tamim",38,6,80,"Batsman")
Sakib = Cricketer("Sakib",39,5,78,"all-rounder")
print(Tamim+Sakib) # 158
print(Tamim*Sakib) # 1444
print(len(Tamim)) # 6