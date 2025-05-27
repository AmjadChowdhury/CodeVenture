class  Shoping:
    location = 'Chattogram' # static attribute
    def __init__(self,name):
        self.name = name

    # This works, but it’s confusing, because self typically refers to an instance, while cls refers to the class. In class methods, the first argument represents the class, not the instance.
    # Use @classmethod when you need access to the class, not the instance. Use cls as the first argument.
    @classmethod
    def purchase(cls,price,floor,item):
        print(f"I bought a {item}  from {floor} in {price} taka")

    # Use @staticmethod when the method doesn’t need to access class or instance.
    @staticmethod
    def multiply(a,b):
        print(a*b)

new_market = Shoping("New Market")
new_market.purchase(500,"3rd", "Shirt") # access by instance
Shoping.purchase(600,"2nd","Aktaruzzaman") # acces by direct class

Shoping.multiply(4,5) # using staticmethod