#include<stdio.h>
#include<string.h>
int main()
{
    int age;
    char name[25];
    printf("What's your name?");
    // scanf("%s",name);
    fgets(name,sizeof(name),stdin);  // to avoid white space
    name[strlen(name)-1] = '\0';  // to avoid new line
    printf("How old are you?");
    scanf("%d",&age);



    printf("Hello! %s, how are you?",name);
    printf("I am %d years old!\n",age);

    return 0;
}