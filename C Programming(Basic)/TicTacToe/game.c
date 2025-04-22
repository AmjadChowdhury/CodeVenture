#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

char Board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char winner);

int main()
{
    bool response = true;
    do
    {
        char winner = ' ';
        srand(time(0)); // Initialize random seed

        resetBoard();
        printBoard();

        while (checkFreeSpaces() != 0 && winner == ' ')
        {
            playerMove();
            printBoard();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
                break;

            computerMove();
            printBoard();
            winner = checkWinner();
            if (winner != ' ' || checkFreeSpaces() == 0)
                break;
        }

        printWinner(winner);
        if (checkWinner() == PLAYER || checkWinner() == COMPUTER)
        {
            printf("Play Again.!pease type 1 else type 0 -> ");
            scanf("%d", &response);
            if (response == false)
            {
                printf("Thank You!!see you next time..\n");
            }
        }
    } while (response);

    return 0;
}

void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Board[i][j] = ' ';
        }
    }
}

void printBoard()
{
    printf("\n");
    printf(" %c | %c | %c \n", Board[0][0], Board[0][1], Board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", Board[1][0], Board[1][1], Board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", Board[2][0], Board[2][1], Board[2][2]);
    printf("\n");
}

int checkFreeSpaces()
{
    int freeSpaces = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (Board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

void playerMove()
{
    int x, y;

    do
    {
        printf("Player move.\n");
        printf("Enter row (1-3): ");
        scanf("%d", &x);
        printf("Enter column (1-3): ");
        scanf("%d", &y);
        x--;
        y--;

        if (x < 0 || x > 2 || y < 0 || y > 2)
        {
            printf("Invalid input. Try again.\n");
        }
        else if (Board[x][y] != ' ')
        {
            printf("Already filled. Try another spot.\n");
        }
        else
        {
            Board[x][y] = PLAYER;
            break;
        }
    } while (1);
}

void computerMove()
{
    int x, y;
    printf("Computer move.\n");

    if (checkFreeSpaces() == 0)
        return;

    do
    {
        x = rand() % 3;
        y = rand() % 3;
    } while (Board[x][y] != ' ');

    Board[x][y] = COMPUTER;
}

char checkWinner()
{
    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (Board[0][i] == Board[1][i] && Board[0][i] == Board[2][i] && Board[0][i] != ' ')
            return Board[0][i];
    }
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (Board[i][0] == Board[i][1] && Board[i][0] == Board[i][2] && Board[i][0] != ' ')
            return Board[i][0];
    }
    // Diagonals
    if (Board[0][0] == Board[1][1] && Board[0][0] == Board[2][2] && Board[0][0] != ' ')
        return Board[0][0];
    if (Board[0][2] == Board[1][1] && Board[0][2] == Board[2][0] && Board[0][2] != ' ')
        return Board[0][2];

    return ' ';
}

void printWinner(char winner)
{
    if (winner == PLAYER)
    {
        printf("You Won!\n");
    }
    else if (winner == COMPUTER)
    {
        printf("You Lost!\n");
    }
    else
    {
        printf("It's a Draw.\n");
    }
}
