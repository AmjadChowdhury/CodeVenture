#include<stdio.h>

int main()
{
    int a = 2;
    char b = 'b';
    double c = 24.4;
    char d[10];

    printf("%d bytes.\n",sizeof(a));
    printf("%d bytes.\n",sizeof(b));
    printf("%d bytes.\n",sizeof(c));
    printf("%d bytes.\n",sizeof(d));

    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%p\n",&c);
    printf("%p\n",&d);


    return 0;
}