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

Tamim = Cricketer("Tamim",38,5.11,80,"Batsman")
Tamim.eat()
# Hello Tamim,Tmi jeheto Batsman, tai tmr vegetabel kawa drkar

amjad = Person("Amjad",22,6,57)
amjad.eat()
# Hello Amjad, Goru mach mangso ja paw ta khao.