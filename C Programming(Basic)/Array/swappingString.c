#include<stdio.h>
#include<string.h>

int main()
{
    char x[15] = "Tesla";
    char y[15] = "BMW";
    char temp[15];

    // here size should be similar. unless something unexpected behaviour happen.

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("X => %s\n",x);
    printf("Y => %s\n",y);


    return 0;
}