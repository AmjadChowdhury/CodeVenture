#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 50;
    int guess;
    int guesses = 0;
    int ans;

    srand(time(0));
    ans = (rand() % MAX) + MIN;

    do{
        printf("Guess the ans -> ");
        scanf("%d",&guess);
        if(guess > ans)
        {
            printf("Too High!!\n");
        }
        else if(guess < ans)
        {
            printf("Too Low!!\n");
        }
        else
        {
            printf("Correct!!!\n");
        }
        guesses++;
    }while (ans != guess);
    printf("\n\n******************\n");
    printf("Correct value %d\n",ans);
    printf("By guessing %d times\n",guesses);
    printf("******************\n");
   
    

    return 0;
}