#include<stdio.h>
#include<string.h>

int main()
{
    char cars[][15] = {"Lamborghini","Tesla","BMW","Toyeta"};

    // cars[0] = "AUDI"; // wrong
    strcpy(cars[0],"AUDI"); // correct way..


    for(int i=0;i<sizeof(cars)/sizeof(cars[0]);i++)
    {
        printf("%s ",cars[i]);
    }

    return 0;
}