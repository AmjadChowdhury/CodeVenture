#include<stdio.h>
#include<string.h>
struct player{
    char name[15];
    int score;
};

int main()
{

    // struct = a struct is a collection of related members(variables) they can be of diffent data type listed under one name in a block of memory. very similar to classes

    struct player player1;
    struct player player2;


    // name = "Amjad";	❌	You can't assign arrays directly in C
    // strcpy(name, "Amjad");	✅	Proper way to copy string content into an array
    strcpy(player1.name,"Amjad");
    player1.score = 7;

    strcpy(player2.name,"Rahat");
    player2.score = 10;

    printf("Player1 : %s and score %d\n",player1.name,player1.score);
    printf("Player2 : %s and score %d\n",player2.name,player2.score);
    

    return 0;
}