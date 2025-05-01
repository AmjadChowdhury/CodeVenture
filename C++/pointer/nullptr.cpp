#include<iostream>
using namespace std;

int main()
{
    int *pointer = nullptr;
    int x = 123;
    // pointer = &x;
    pointer = &x;

    if(pointer == nullptr)
    {
        cout<< "Pointer was not assigned.\n";
        // dont try to print nullptr..its harmful..
    }
    else
    {
        cout<< "Pointer was assigned.\n";
        cout<< *pointer << endl;
    }

    return 0;
}