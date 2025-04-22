#include<stdio.h>
int main()
{
    // Arithmetic Operators..
    // addition (+)
    // subtraction (-)
    // multiplication (*)
    // division (/)
    // modulus (%)
    // increment (++)
    // decrement(--)

    int x = 5;
    int y = 2;

    // int z = x+y;
    // int z = x-y;
    // int z = x*y;
    // float z = x/(float)y;
    int z = x%y;
    printf("%d\n",z);

    x++;
    printf("%d\n",x);
    y--;
    printf("%d\n",y);

    return 0;
}