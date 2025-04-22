#include<iostream>
using namespace std;
// A namespace is used to organize code and avoid name conflicts—especially when multiple parts of a program (or different libraries) use the same variable or function names.
// why use?
// Prevent name clashes (e.g., two libraries defining x or print()).
// Make code more modular and readable.
// Often used in big projects and libraries like the Standard Library (std).
namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main()
{
    using namespace first;
    cout<<x<<endl; // 1
    cout<<second::x<<endl; // 2. 

    return 0;
}