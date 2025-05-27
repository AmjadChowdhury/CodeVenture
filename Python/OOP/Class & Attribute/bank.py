class Bank:
    def __init__(self,balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 100000

    def get_balance(self):
        return self.balance
    
    def deposit(self,amount):
        if amount > 0:
            self.balance += amount
            print(f'After adding {amount} tk,now balance {self.get_balance()}')

    def withdraw(self,amount):
        if amount < self.min_withdraw:
            print(f"{self.min_withdraw} takar niche tula jabe na")
        elif amount > self.max_withdraw:
            print(f'{self.max_withdraw} takar beshi tula jabe na')
        else:
            self.balance -= amount
            print(f'{amount} taka tular por akn balnce hocce {self.balance}')

brac = Bank(20000)
print(brac.get_balance())
brac.deposit(100)
brac.withdraw(200)
print(brac.get_balance())