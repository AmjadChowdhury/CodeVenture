class Bank:
    def __init__(self,holder_name,initial_deposit):
        self.holder_name = holder_name # public
        self.__balance = initial_deposit # private
        self._branch = 'Banani 11' # protected
    def get_balance(self):
        return self.__balance
    def deposit(self,amount):
        self.__balance += amount


DBBL = Bank('Amjad',10000)
print(DBBL.holder_name)
# print(DBBL.__balance)
print(DBBL.get_balance())
print(DBBL._branch)
DBBL.holder_name = "Zohan"
print(DBBL.holder_name)

# chore podditte private value ber kora...
print(dir(DBBL))
print(DBBL._Bank__balance)