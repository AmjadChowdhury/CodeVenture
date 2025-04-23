#include<iostream>
using namespace std;

int main()
{
    int rows;
    int columns;
    char symbol;
    cout<<"Enter rows -> ";
    cin >> rows;
    cout<< "Enter columns -> ";
    cin >> columns;
    cout<<"Which character do you wanna print -> ";
    cin >> symbol;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<symbol<< " ";
        }
        cout<<"\n";
    }

    return 0;
}