#include<iostream>
using namespace std;

string concat(string first,string last)
{
    return first + " " + last;
}

int main()
{
    string firstName = "Amjad";
    string lastName = "Chy";
    cout<< concat(firstName,lastName)<<endl;

    return 0;
}