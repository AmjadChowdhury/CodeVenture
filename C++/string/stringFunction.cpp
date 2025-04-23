#include<iostream>
using namespace std;

// web link
// https://cplusplus.com/reference/string/string/

int main()
{
    string name;
    cout<< "Enter your name : ";
    getline(cin,name);

    // name.clear(); // ""
    // name.append("@gmail.com"); // Amjad@gmail.com
    // cout<<"Welcome "<<name.at(0); // A

    // name.insert(1,"@");
    // cout<<name;  // A@mjad

    // cout << name.find(" "); // 5

    // name.erase(0,3);
    // cout<<name; // ad chy

    // if(name.empty())
    // {
    //     cout<< "You didn't enter your name.\n";
    // }
    // if(name.length() > 12)
    // {
    //     cout<<"Your name can't be over 12.\n";
    // }
    // else
    // {
    //     cout<< "Welcome "<<name<<endl;
    // }

    return 0;
}