#include<iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    // srand(time(NULL)); — Good for seeding the random number generator to ensure different outputs on each run.

    // rand() generates 0 to 32767
    int num1 = (rand() % 20) + 1;
    int num2 = (rand() % 20) + 1;
    int num3 = (rand() % 20) + 1;

    cout<<num1<<"\n";
    cout<<num2<<"\n";
    cout<<num3<<"\n";

    return 0;
}