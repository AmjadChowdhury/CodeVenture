#include<iostream>
using namespace std;

int main()
{
    string name;
    int age;
    int num;
    cin>>num;

    cout<<"Enter name ";
    // cin>>name; // which can't take whitespace.
    // for better experience.with new line
    // Works fine if nothing was left in the input buffer, like after using getline() before.
    // Fails if used right after cin >>, because cin leaves a newline character (\n) in the buffer.
    // Example of Problem:
    // int age;
    // cin >> age;             // user enters: 25 + Enter
    // getline(cin, name);     // reads the leftover '\n', so name becomes ""
    getline(cin>>ws,name);
    cout<<"Enter age ";
    cin>>age;

    cout<<"Hello! I am "<<name<<endl;
    cout<<"I am "<<age<<" years old!"<<endl;


    return 0;
}