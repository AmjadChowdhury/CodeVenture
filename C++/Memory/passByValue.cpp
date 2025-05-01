#include<iostream>
using namespace std;

// When you call a function and pass a variable into it by value,
// -> C++ makes a copy of the variable and passes the copy into the function.

// -> So inside the function:

// You are working with a copy, NOT the original.

// Changes you make inside the function do NOT affect the original variable outside.

void changeValue(int x) {
    x = 100;
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int a = 10;
    changeValue(a);
    cout << "Outside function: a = " << a << endl;
    return 0;
}
