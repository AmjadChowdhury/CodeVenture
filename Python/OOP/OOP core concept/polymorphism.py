class Animal:
    def __init__(self,name):
        self.name = name

    def make_sound(self):
        print("Animal make sound")

class Meem(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print(f"{self.name} make sound meow meow")

class Cristiano(Animal):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print(f'{self.name} make sound Suiiii Suiiii.')

class Goat(Animal):
    def __init__(self, name):
        super().__init__(name)

tasnim = Meem('Tasnim')
tasnim.make_sound()

cr7 = Cristiano("Cristiano Ronaldo")
cr7.make_sound()

messi = Goat("Messi")
messi.make_sound()

