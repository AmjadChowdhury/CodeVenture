#include<iostream>
using namespace std;

class Car{
    public:
        string name;
        string model;

        void carinfo()
        {
            cout<< "This is xoss car.\n";
        }
};

int main()
{
    Car car1;
    car1.name = "BMW";
    car1.model = "BMWXp1023";

    cout<< car1.name<< "\n";
    cout<< car1.model<< "\n";
    car1.carinfo();

    return 0;
}