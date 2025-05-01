#include<iostream>
using namespace std;

// int a = 4;
// The value 4 is stored somewhere in RAM.

// &a (the address of a) tells you which location in memory it’s stored.

// Maybe it’s stored at 0x7ffeefbff5ac.
// That's a memory address written in hexadecimal (base-16).

int main()
{
    int a = 4;
    string b = "Amjad";
    bool isStudent = true;

    cout << a << " -> " << &a <<endl;
    cout << b << " -> " << &b <<endl;
    cout << isStudent << " -> " << &isStudent <<endl;
    // 4 -> 0xcd6e9ff880    
    // Amjad -> 0xcd6e9ff860
    // 1 -> 0xcd6e9ff85f

    return 0;
}