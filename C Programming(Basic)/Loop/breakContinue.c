#include<stdio.h>
int main()
{
    // continue -> skip rest of the code and forces next iteration..
    // break -> break the loop
    printf("This is for continue\n");
    for(int i = 1;i <= 5;i++)
    {
        if(i == 3)
        {
            continue;
        }
        printf("%d\n",i);
    }

    printf("This is for break\n");
    for(int i = 1;i <= 5;i++)
    {
        if(i == 3)
        {
            break;
        }
        printf("%d\n",i);
    }

    return 0;
}