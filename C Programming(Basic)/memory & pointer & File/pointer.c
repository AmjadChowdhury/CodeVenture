#include<stdio.h>

void printAge(int *pAge)
{
    printf("In funtion age is -> %d\n",*pAge);
}

int main()
{
    int age = 22;
    int *pAge = NULL;  // good practice
    pAge = &age;

    printf("Age -> %d\n",age);
    printf("Stored value -> %d\n",*pAge); //dereference.

    printf("Memory of age -> %p\n",&age);
    printf("Memory stored in PAge -> %p\n",pAge);


    printAge(pAge);


    return 0;
}