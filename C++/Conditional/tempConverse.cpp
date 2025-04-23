#include<iostream>
using namespace std;


int main()
{
    double temp;
    char unit;

    cout<<"********* Temperature conversion **********\n";
    cout<< "F = Fahrenheit\n";
    cout<< "C = Celsius\n";
    cout<<"What unit would you like to convert to ";
    cin >> unit;

    if(toupper(unit) == 'F')
    {
        cout<< "Enter temp in celsius : ";
        cin>> temp;

        temp = (1.8 * temp) + 32.0;
        cout<<"Temperature is : "<<temp<<endl;
    }
    else
    {
        cout<< "Enter temp in Fahrenheit : ";
        cin>> temp;

        temp = (temp - 32) / 1.8;
        cout<<"Temperature is : "<<temp<<endl;
    }

    return 0;
}