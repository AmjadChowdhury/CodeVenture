#include<iostream>
using namespace std;

class Shape{
    public:
       double area;
       double volume;
};

class Cube : public Shape{
    private:
        double side;
    public:
        Cube(double side)
        {
            this->side = side;
            this->area = 6 * side * side;
            this->volume = side * side * side;
        }
};

class Sphere : public Shape{
    private:
        double radius;
    public:
        Sphere(double radius)
        {
            this->radius = radius;
            this->area = 4 * 3.1416 * radius * radius;
            this->volume = (4/3.0) * 3.1416 * radius * radius * radius;
        }
};

int main()
{
    Cube cube1(3.12);
    cout<<cube1.area<<endl;
    cout<<cube1.volume<<endl;

    Sphere sp1(4.65);
    cout<< sp1.area << endl;
    cout<< sp1.volume << endl;


    return 0;
}