

#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age -> ");
    scanf("%d",&age);


    if(age >= 18){
        printf("You are now sign up!");
    }
    else if(age < 0){
        printf("You haven't been born yeet!");
    }
    else{
        printf("You can't sign up!");
    }


    return 0;
}