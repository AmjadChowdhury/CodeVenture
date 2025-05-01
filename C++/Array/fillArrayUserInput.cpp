#include<iostream>
using namespace std;

int main()
{
    string foods[5];
    string temp;

    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i=0;i<size;i++)
    {
        cout<<"Enter a food you like or 'q' for quit #" <<i+1<<" : ";
        cin >> temp;
        if(temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    for(int i=0; !foods[i].empty();i++)
    {
        cout << foods[i] << "\n";
    }

    return 0;
}