#include<stdio.h>
#include<string.h>

typedef struct
{
    char username[20];
    char password[20];
    int id;
}user;

typedef char userInfo[100];
typedef int scoreInt;


int main()
{

    userInfo name = "Sabuj";
    scoreInt score = 10;
    printf("My name is %s and score %d\n",name,score);

    user user1 = {"Amjad","12345",2056};
    // user user2 = {"Rahat","12345",2165};
    user user2;
    strcpy(user2.username,"Rahat");
    strcpy(user2.password,"hdfhfj");
    user2.id = 323;

    printf("%s %s %d\n",user1.username,user1.password,user1.id);
    printf("%s %s %d\n",user2.username,user2.password,user2.id);



    return 0;
}