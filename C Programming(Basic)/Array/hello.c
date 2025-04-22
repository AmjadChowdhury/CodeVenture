#include<stdio.h>
int main()
{
    // array is a data structures which stores more variable in similar data type...
    double numbers[] = {2.5,6.7,8.2,3.9,10.6};

    for(int i = 0;i < sizeof(numbers)/sizeof(numbers[0]);i++)
    {
        printf("%.2lf\n",numbers[i]);
    }


    return 0;
}