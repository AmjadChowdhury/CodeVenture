class Engine:
    def __init__(self):
        pass
    def start(self):
        print("Engine Started")

class Driber:
    def __init__(self):
        pass
    def start(self):
        print("Driber started")

class Car:
    def __init__(self):
        self.engine = Engine()
        self.driber = Driber()
    def start(self):
        self.engine.start()
        self.engine.start()

bmw = Car()
bmw.start()
# Engine Started
# Engine Started