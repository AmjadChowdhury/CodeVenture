class User:
    def __init__(self,name,age,salary):
        self._name = name
        self._age = age
        self.__salary = salary

    @property
    def age(self):
        return self._age
    
    @property
    def salary(self):
        return self.__salary
    
    @salary.setter
    def salary(self,amount):
        if amount < 0:
            print("fokira!!")
            return
        self.__salary += amount
    
Tasnim = User("Tasnim",22,100000)
# print(Tasnim.age()) # property decorator use korar age..
print(Tasnim.age) # akn eta getter jekhane age attribute hisabe use hobe..read only
Tasnim.salary = 10 # setter
print(Tasnim.salary)