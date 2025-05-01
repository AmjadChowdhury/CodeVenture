#include <iostream>
#include <cctype>
#include <time.h>
using namespace std;

void printBoard(char board[]);
void playerMove(char board[], char playerSign);
void computerMove(char board[], char computerSign);
int freeSpaces(char board[]);
char winner(char board[]);

int main()
{
    int play = 1;
    do
    {
        char board[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
        const char playerSign = 'X';
        const char computerSign = 'O';

        printBoard(board);
        while (winner(board) == ' ' && freeSpaces(board))
        {
            playerMove(board, playerSign);
            computerMove(board, computerSign);
            printBoard(board);
        }
        if (winner(board) == playerSign)
        {
            cout << "You won!\n";
        }
        else if (winner(board) == computerSign)
        {
            cout << "You lost!\n";
        }
        else
        {
            cout << "DRAW!\n";
        }
        cout<<"Rematch ? type 1 else type 0 : ";
        cin >> play;
    }while(play);

    return 0;
}

void printBoard(char board[])
{
    cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << "---+---+---" << endl;
    cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
}
void playerMove(char board[], char playerSign)
{
    int pos;
    do
    {
        cout << "Enter position form (1-9) : ";
        cin >> pos;

        if (board[pos - 1] == ' ')
        {
            board[pos - 1] = playerSign;
            break;
        }
        else
        {
            cout << "Already fill up!Try another one.\n";
        }
    } while (freeSpaces(board));
}
void computerMove(char board[], char computerSign)
{
    do
    {
        srand(time(0));
        int pos = rand() % 9;
        if (board[pos] == ' ')
        {
            board[pos] = computerSign;
            break;
        }
    } while (freeSpaces(board));
}
char winner(char board[])
{
    if (board[0] == board[1] && board[1] == board[2])
    {
        return board[0];
    }
    if (board[3] == board[4] && board[4] == board[5])
    {
        return board[3];
    }
    if (board[6] == board[7] && board[7] == board[8])
    {
        return board[6];
    }
    if (board[0] == board[3] && board[3] == board[6])
    {
        return board[0];
    }
    if (board[1] == board[4] && board[4] == board[7])
    {
        return board[1];
    }
    if (board[2] == board[5] && board[5] == board[8])
    {
        return board[2];
    }
    if (board[0] == board[4] && board[4] == board[8])
    {
        return board[0];
    }
    if (board[2] == board[4] && board[4] == board[6])
    {
        return board[2];
    }
    return ' ';
}
int freeSpaces(char board[])
{
    int spaces = 9;

    for (int i = 0; i < 9; i++)
    {
        if (board[i] != ' ')
        {
            spaces--;
        }
    }
    return spaces;
}