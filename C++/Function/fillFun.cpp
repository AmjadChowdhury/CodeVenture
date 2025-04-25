#include<iostream>
using namespace std;

// fill(begin,end,value) -> fill is a range of elements with specified value

int main()
{
    const int SIZE = 9;
    string foods[SIZE];

    fill(foods,foods+(SIZE/3),"PIZZA");
    fill(foods+(SIZE/3),foods + ((SIZE*2)/3),"HAMBURGER");
    fill(foods + ((SIZE*2)/3),foods + SIZE,"HOTDOG");

    for(string food : foods)
    {
        cout<< food<< "\n";
    }

    return 0;
}