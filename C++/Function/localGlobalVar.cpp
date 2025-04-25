#include<iostream>
using namespace std;
// A variable that is declared outside all functions is called a global variable. It is accessible from any function in the same file after its declaration.
// A variable declared inside a function or block is called a local variable. It is only accessible within that function or block.
// If a local variable has the same name as a global one, the local variable hides the global variable within its scope.

int num = 3;               // Global variable

void printNum();

int main() {
    int num = 1;           // Local variable in main()
    printNum();            // Calls printNum(), which also has its own local variable
    cout << num << endl;   // Prints local num in main() → 1
    cout << ::num << endl; // Prints global num using scope resolution → 3 variable scoping and the :: (scope resolution operator)
    return 0;
}

void printNum() {
    int num = 2;           // Local variable in printNum()
    cout << num << endl;   // Prints 2
}
