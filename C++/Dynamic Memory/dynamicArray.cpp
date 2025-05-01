#include<iostream>
using namespace std;

int main()
{
    char *pGrades = NULL;

    int size;
    cout<< "Enter size of an array : ";
    cin >> size;

    pGrades = new char[size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter value for "<<i+1<<" : ";
        cin >> pGrades[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<< pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}