#include<iostream>
using namespace std;

double square(double a);
double cube(double a);

int main()
{
    double num;
    cout<<"Entera number -> ";
    cin >> num;

    cout<< "Squre of this number -> "<<square(num)<< " and cube is -> "<<cube(num)<<endl;


    return 0;
}
double square(double b)
{
    return b * b;
}
double cube(double b)
{
    return b * b * b;
}