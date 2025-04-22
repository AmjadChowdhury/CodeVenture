#include<iostream>
#include<math.h>
using namespace std;
// math.h link
// https://cplusplus.com/reference/cmath/

int main()
{
    double x = 10.5;
    double y = 23.56;
    double z;

    cout<<"X "<<x<<endl;
    cout<<"Y "<<y<<endl;

    z = max(x,y);
    cout<<"Max -> "<<z<<endl;

    z = min(x,y);
    cout<<"Min -> "<<z<<endl;

    z = pow(2,3);
    cout<<"pow -> "<<z<<endl;

    z = sqrt(x);
    cout<<"sqrt -> "<<z<<endl;

    z = ceil(x);
    cout<<"ceil -> "<<z<<endl;

    z = round(x);
    cout<<"round -> "<<z<<endl;

    z = floor(x);
    cout<<"floor -> "<<z<<endl;



    return 0;
}