class Family:
    def __init__(self,address):
        self.address = address

class School:
    def __init__(self,school_name):
        self.school_name = school_name

    def __repr__(self):
        return f'{self.school_name} is my campus'


class Sports:
    def __init__(self,favt_player):
        self.favt_player = favt_player

    def __repr__(self):
        return f'{self.favt_player} is my idol'

class Student(Family,School,Sports):
    def __init__(self, address,school_name,favt_player):
        Family.__init__(self,address)
        School.__init__(self,school_name)
        Sports.__init__(self,favt_player)

    def __repr__(self):
        print(f'{self.address}')
        return super().__repr__()

amjad = Student("Shantibag","JU","CR7")
print(amjad)
