from math import pi

class Shape:
    def __init__(self,name):
        self.name = name

class Rectangle(Shape):
    def __init__(self,name,width,height):
        self.width = width
        self.height = height
        super().__init__(name)
    def area(self):
        result = self.width * self.height
        return result
class Circle(Shape):
    def __init__(self,name,radius):
        self.radius = radius
        super().__init__(name)
    def area(self):
        result = pi * self.radius * self.radius
        return result
    
amjad_circle = Circle("Amjad_Circle",2)
print(amjad_circle.area())

amjad_rectangle = Rectangle("Amjad_Rectangle",10,5)
print(amjad_rectangle.area())