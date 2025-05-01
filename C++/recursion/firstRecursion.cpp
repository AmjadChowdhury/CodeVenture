#include<iostream>
using namespace std;

void walk(int step);

int main()
{
    walk(5); // 5 time print..

    return 0;
}

void walk(int step)
{
    if(step <= 0)
    {
        return;
    }
    cout<< "We shoul walk!"<<endl;
    walk(step - 1);
}