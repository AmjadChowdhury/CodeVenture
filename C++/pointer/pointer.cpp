#include<iostream>
using namespace std;

int main()
{
    string name = "Hey Bro!";
    int age = 22;

    string *pName = &name;
    int *pAge = &age;

    cout<<pName<<endl; // 0xfb911ffa80
    cout<< &name<< endl; // 0xfb911ffa80
    cout<< *pName << endl; // Hey Bro!

    string fruits[] = {"Mango","Banana","Apple"};
    
    string *pFruits = fruits;
    cout<< pFruits << endl; // 0xfe8b1ff780
    cout<< fruits << endl; // 0xfe8b1ff780
    cout<< *fruits<<endl; // Mango
    cout<< (fruits+1)<<endl; // 0xfe8b1ff7a0
    cout<< *(fruits+1)<<endl; // Banana

    return 0;
}