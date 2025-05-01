#include<iostream>
using namespace std;

int main()
{
    int *pNum = NULL;

    pNum = new int;
    // cin >> *pNum;
    *pNum = 23;

    cout<< *pNum << endl; // user input show...23
    cout<< pNum << endl; // 0x15306d02b00

    delete pNum;

    return 0;
}