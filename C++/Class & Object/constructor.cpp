#include<iostream>
using namespace std;

class Vehicle{
    public:
        string name;
        string model;
    Vehicle()
    {
        cout<< "I am with zero parameter"<<endl;
    }
    Vehicle(string name)
    {
        this->name = name;
    }
    Vehicle(string name,string model)
    {
        this->name = name;
        this->model = model;
    }
};

int main()
{
    Vehicle autoRick;

    Vehicle bike("Honda");
    cout<<bike.name << endl;
    
    Vehicle car("BMW","BMWXp2135");
    cout<<car.name<<"\n";
    cout<<car.model<<"\n";

    return 0;
}