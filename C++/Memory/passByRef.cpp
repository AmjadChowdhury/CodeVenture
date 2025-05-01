#include<iostream>
using namespace std;

// When you pass by reference in C++: 👉 The function receives the real variable, NOT a copy.
// -> So inside the function:
// You are working with the original variable itself.
// Changes made inside the function affect the original variable.

void changeValue(int &x) {
    x = 100;
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int a = 10;
    changeValue(a);
    cout << "Outside function: a = " << a << endl;
    return 0;
}
