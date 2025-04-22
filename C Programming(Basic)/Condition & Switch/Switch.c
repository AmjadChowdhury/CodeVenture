#include<stdio.h>
int main()
{
    char grades;
    printf("Enter your grades -> ");
    scanf("%c",&grades);

    // alternative of using else if...
    switch(grades){
        case 'A':
            printf("Perfect!");
            break;
        case 'B':
            printf("You did great great!");
            break;
        case 'C':
            printf("You did Okay!");
            break;
        case 'D':
            printf("At least you are not F!");
            break;
        case 'F':
            printf("You Failled!");
            break;
        default:
            printf("Please, Enter valid grades!");

    }


    return 0;
}