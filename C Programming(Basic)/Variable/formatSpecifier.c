#include<stdio.h>
int main()
{
    // format specifier % -> defines and formats a type of data to be displayed..

    // %c -> char
    // %f -> float
    // %lf -> double
    // %s -> string
    // %d -> int

    // %.1 -> decimal precision
    // %1 -> minimum field width
    // %- -> left allign

    float item1 = 30.75;
    float item2 = 4.785;
    float item3 = 200.2715;

    printf("Item 1 : $%-8.2f\n",item1);
    printf("Item 2 : $%-8.2f\n",item2);
    printf("Item 3 : $%-8.2f\n",item3);
    /*
    Item 1 : $   30.75
    Item 2 : $    4.78
    Item 3 : $  200.27
    */


    return 0;
}