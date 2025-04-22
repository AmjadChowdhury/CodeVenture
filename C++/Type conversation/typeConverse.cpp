#include<iostream>
using namespace std;

int main()
{
    // Type conversion means converting a value from one data type to another.
    // It can happen automatically (implicit) or manually (explicit).
    // Implicit Type Conversion (Automatic)
    // int x = 10;
    // double y = x; // int to double
    // Explicit Type Conversion (Type Casting)
    // double pi = 3.14;
    // int a = (int)pi; // old-style cast
    // int a = int(pi); // functional-style cast


    int x = 3.144;
    cout<<"X -> "<<x<<endl;

    int getScore = 8;
    int question = 10;

    double result = (getScore/(double) question) * 100;
    cout<<"Result -> "<<result<<"% marks";

    return 0;
}