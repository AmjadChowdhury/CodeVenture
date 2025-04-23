#include<iostream>
using namespace std;

int main()
{
    string name;

    while(name.empty())
    {
        cout<<"Enter name -> ";
        getline(cin,name);
    }
    cout<<"Wecome "<<name<<endl;

    return 0;
}