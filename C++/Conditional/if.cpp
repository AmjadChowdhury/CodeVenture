#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age ";
    cin >> age;

    if(age >= 18)
    {
        cout<<"You are eligible to enter site."<<endl;
    }
    else if(age < 0)
    {
        cout<<"You haven't been born yeet!"<<endl;
    }
    else
    {
        cout<< "You can't access the site."<<endl;
    }
    return 0;
}