class Student:
    def __init__(self,name,current_class,id):
        self.name = name
        self.current_class = current_class
        self.id = id

    def __repr__(self):
        return f'Student : {self.name} and id : {self.id}'
    
# amjad = Student('Amjad',11,2)
# print(amjad) # Student : Amjad and id : 2

class Teacher:
    def __init__(self,name,course,id):
        self.name = name
        self.course = course
        self.id = id
    def __repr__(self):
        return f'Teacher : {self.name} and id : {self.id}'
    
class School:
    def __init__(self,name):
        self.name = name
        self.students = []
        self.teachers = []
    def add_teachers(self,name,course):
        id = len(self.teachers) + 101
        teacher = Teacher(name,course,id)
        self.teachers.append(teacher)

    def enroll(self,name,fee):
        if fee < 6500:
            print("Not Enough!!!")
        else:
            id = len(self.students) + 1001
            student = Student(name,"Python",id)
            self.students.append(student)
    
    def __repr__(self):
        print(f'Welcome to {self.name}')
        print("------ Student Info --------")
        for student in self.students:
            print(student)

        print("------ Teacher Info --------")
        for teacher in self.teachers:
            print(teacher)
        
        return 'All Done!!!'


iit = School('IIT')
iit.enroll("Amjad",7000)
iit.enroll("Sabuj",5000)
iit.enroll("Rahat",8000)
iit.enroll("Linkon",7000)

iit.add_teachers("rashed","Microprocessors")
iit.add_teachers("Mahmudur","Operating System")

print(iit)