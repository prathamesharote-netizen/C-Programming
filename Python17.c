print("Prathamesh Arote, 251C022")

class Product:
    def __init__(self, name, price):
        self.name = name
        self.price = price

class Cart:
    def __init__(self):
        self.items = []

    def add_item(self, product):
        self.items.append(product)

    def total(self):
        return sum(item.price for item in self.items)

p1 = Product("Shirt", 500)
p2 = Product("Shoes", 1500)

cart = Cart()
cart.add_item(p1)
cart.add_item(p2)

print("Total Price =", cart.total())
