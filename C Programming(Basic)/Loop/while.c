#include<stdio.h>
#include<string.h>


int main()
{
    char name[25];

    printf("Enter your name : ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name) - 1] = '\0'; 
    // to remove the newline character (\n) that fgets() adds when it reads input from the user.
    // For example, if you type John and press Enter, fgets() actually stores:
    // {'J', 'o', 'h', 'n', '\n', '\0'}
    
    while(strlen(name) == 0)
    {
        printf("You didn't enter your name, please fill up\n");
        printf("Enter your name : ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Yes , got it, my name is %s\n",name);

    return 0;
}