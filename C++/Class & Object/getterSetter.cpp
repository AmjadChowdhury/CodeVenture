#include <iostream>
using namespace std;

class Vehicle
{
private:
    string name;
    string model;

public:
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }

    void setModel(string model)
    {
        this->model = model;
    }
    string getModel()
    {
        return model;
    }
};

int main()
{
    Vehicle car;
    // cout<<car.name<<endl; // wrong access
    car.setName("BMW");
    cout << "Car : " << car.getName() << endl;

    car.setModel("BMW2154");
    cout << "Car Model : " << car.getModel() << endl;

    return 0;
}