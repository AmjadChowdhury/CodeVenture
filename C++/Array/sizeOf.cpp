#include<iostream>
using namespace std;

int main()
{
    string name = "Amjad chy";
    cout<< sizeof(name)<<endl; // 32
    // sizeof(name) gives you the size of the object name, not the length of the string.

    // In C++, string is a class, not just a character array.
    // sizeof(name) returns the size of the std::string object on the stack (typically 24 or 32 bytes depending on the implementation and architecture — yours is 32). 

    char num[] = {2,4,6};
    cout<< sizeof(num)<<endl; // 3
    cout<< sizeof(num)/sizeof(num[0])<<endl; // 3

    return 0;
}