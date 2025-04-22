#include<stdio.h>
#include<ctype.h>

int main()
{
    char questions[][100] = {"1. Who invented the C programming language?",
                             "2. What is the file extension of a C program?",
                             "3. Which symbol is used to end a statement in C?"};

    char options[][100] = {"A) James Gosling","B) Dennis Ritchie","C) Bjarne Stroustrup","D) Guido van Rossum",
                           "A) .cpp","B) .java","C) .py","D) .c",
                           "A) .","B) :","C) ;","D) ,"};

    char answer[] = {'B','D','C'};
    
    int sizeOfQuestion = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int correctGuesses = 0;

    for(int i=0;i<sizeOfQuestion;i++)
    {
        printf("\n\n\n");
        printf("%s\n",questions[i]);

        for(int j = (i*4);j < (i*4) + 4;j++)
        {
            printf("%s\n",options[j]);
        }


        printf("Ans -> ");
        scanf(" %c",&guess);
        guess = toupper(guess);
        if(guess == answer[i])
        {
            printf("Wow!!Your ans is correct.\n");
            correctGuesses++;
        }
        else
        {
            printf("Noooo!!You are wrong.\n");
        }
    }

    printf("\n****************\n");
    printf("SCORE = %d/%d",correctGuesses,sizeOfQuestion);
    printf("\n*****************\n");


    return 0;
}