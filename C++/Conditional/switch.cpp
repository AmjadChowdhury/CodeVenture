#include<iostream>
using namespace std;

int main()
{
    char grade;
    cout<< "What letter grade?: ";
    cin>>grade;

    switch (grade)
    {
    case 'A':
        cout<<"Yo did great!\n";
        break;
    case 'B':
        cout<<"You did good!\n";
        break;
    case 'C':
        cout<<"You did okay!\n";
        break;
    case 'D':
        cout<<"Yo didn't good!\n";
        break;
    case 'F':
        cout<<"You Fail!\n";
        break;  
    default:
        cout<<"Please enter only letter geade(A-F)\n";
        break;
    }

    return 0;
}