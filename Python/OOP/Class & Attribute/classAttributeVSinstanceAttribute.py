class Shop:
    # cart = [] # class attribute...
    def __init__(self,buyer):
        self.buyer = buyer
        self.cart = [] # instance attribute

    def add_to_cart(self,item):
        self.cart.append(item)
        # attribute k access krte chaile self. use krte hoy...

mehjabeen = Shop('Mehjabeen')
mehjabeen.add_to_cart("Sunglass")
mehjabeen.add_to_cart("Bag")
print(mehjabeen.cart)
# ['Sunglass', 'Bag']

nisho = Shop('nisho')
nisho.add_to_cart("watch")
nisho.add_to_cart("shirt")
print(nisho.cart)
# jkn class attribute use kora hoy tkn ager kono manush add krle tar sathe add hobe...
# ['Sunglass', 'Bag', 'watch', 'shirt']
# instance attribute use krle protteker alada alada cart hobe...
# ['watch', 'shirt']
