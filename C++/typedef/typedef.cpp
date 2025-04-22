#include<iostream>
using namespace std;

typedef string text_t;
typedef int number_t;

using usingText_t = string;

int main()
{
    text_t name = "Hello! Bro";
    number_t age = 21;

    cout<<name<<"\n";
    cout<<"I am "<<age<< " years old.\n";

    usingText_t player = "CR7";
    cout<<"My Favourite palyer "<<player;

    return 0;
}