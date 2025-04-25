#include<iostream>
using namespace std;

int main()
{
    string students[] = {"Amjad","Rahat","Sabuj"};
    for(string student : students)
    {
        cout<<student<<endl;
    }

    return 0;
}