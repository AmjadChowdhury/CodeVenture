#include<iostream>
using namespace std;
void printInfo(const string name,const int age);
// const means:
// You can't modify name or age inside the printInfo function.
// If you try to write name = "something"; or age = 0;, it will give a compiler error.
// But since you're only printing, and not modifying them, it works perfectly.
int main()
{
    string name = "Raj Konna";
    int age = 21;
    printInfo(name,age);

    return 0;
}
// void printInfo(string name,int age)
// {
//     name = " ";
//     age = 0;
//     cout<< name << "\n";
//     cout<< age << "\n";
// }
void printInfo(const string name,const int age)
{
    // name = " ";
    // age = 0;
    cout<< name << "\n";
    cout<< age << "\n";
}