from abc import ABC,abstractmethod
# abc = abstract base class

class Animal(ABC):
    @abstractmethod # enforce all derived class to have a eat method.
    def eat(self):
        print("I need food.")

    def move(self):
        pass

class Monkey(Animal):
    def __init__(self):
        self.name = "Monkey"

    def eat(self):
        print(f"Pavle r nana khabe akn banana")

pavel = Monkey()
print(pavel.name)
pavel.eat()