#include<iostream>
using namespace std;

int main()
{
    // string cars[] = {"BMW", "LAMBORGHINI","TESLA"}; // Correct, initializes the array
    // string cars[]; // Error: Size must be specified or initialized
    string cars[4]; // Declares an array of 4 strings

    cars[0] = "BMW";
    cars[1] = "TESLA";

    cout << cars[0] << endl; // Prints "BMW"

    return 0;
}
