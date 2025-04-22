#include<stdio.h>

int main()
{
    int a = 12; // 00001100
    int b = 10; // 00001010
    int c = 0;  // 00000000

    c = a & b;  // 00001000 or 8
    printf("AND -> %d\n",c);

    c = a | b;  // 00001110 or 14
    printf("OR -> %d\n",c);

    c = a ^ b;  // 00000110 or 6
    printf("XOR -> %d\n",c);

    c = a << 1;  // 00011000 or 24. here 0 added in right side..by left shifting ans is multiply by (2*how many operations)
    printf("LEFT SHIFT -> %d\n",c); 

    c = a >> 1;  // 00000110 or 6. here 0 remove in right side..by right shifting ans is divided by (2*how many operations)
    printf("RIGHT SHIFT -> %d\n",c); 



    return 0;
}