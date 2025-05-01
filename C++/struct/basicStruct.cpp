#include<iostream>
using namespace std;

struct Car{
    string carName;
    int year;
    string color;
};
void printCarInfo(Car &carInfo);
void printCarInfo(Car &carInfo,string color);

int main()
{
    Car car1;
    car1.carName = "BMW";
    car1.year = 2000;
    car1.color = "blue";
    printCarInfo(car1);
    cout<<"Inside main : "<<car1.color<<endl;

    Car car2;
    car2.carName = "Tesla";
    car2.year = 2005;
    car2.color = "yellow";
    printCarInfo(car2,"Green");
    cout<<"Inside main : "<<car2.color<<endl;

    return 0;
}

void printCarInfo(Car &carInfo)
{
    cout<<carInfo.carName<<"\n";
    cout<<carInfo.year<< "\n";
    cout<<carInfo.color<<"\n";
}
void printCarInfo(Car &carInfo,string color)
{
    carInfo.color = color;
    cout<<carInfo.carName<<"\n";
    cout<<carInfo.year<< "\n";
    cout<<carInfo.color<<"\n";
}