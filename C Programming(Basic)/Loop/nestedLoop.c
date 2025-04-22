#include<stdio.h>
int main()
{
    int rows;
    int columns;
    char symbol;

    printf("Enter number of rows : ");
    scanf("%d",&rows);

    printf("Enter number of columns : ");
    scanf("%d",&columns);

    // After reading the two integers, scanf leaves a newline (\n) character in the input buffer — the one you pressed after entering the number.

    // another solution..
    // getchar(); // Consume the leftover newline character

    printf("Enter symbol : ");
    scanf(" %c",&symbol); // <-- notice the space before %c

    for(int i = 1;i <= rows; i++)
    {
        for(int j = 1;j <= columns; j++)
        {
            printf("%c ",symbol);
        }
        printf("\n");
    }

    return 0;
}