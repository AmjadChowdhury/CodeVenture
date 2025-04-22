#include<stdio.h>
void hello(char[],int); // funtion prototype
int main()
{
    char name[] = "Amjad chy";
    int age = 22;
    hello(name,age);

    return 0;
}

void hello(char name[],int age)
{
    printf("Hello! %s, how are you!\n",name);
    printf("Now, you are %d years old!",age);
}