#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;
    int exit = 0;
    do
    {
        player = getUserChoice();
    cout<< "Your choice : ";
    showChoice(player);

    computer = getComputerChoice();
    cout<< "COMPUTER choice : ";
    showChoice(computer);

    chooseWinner(player,computer);
    cout<< "If you want to close the game just type any number otherwise for continueing type zero : ";
    cin >> exit;
    } while (exit == 0);
    

    return 0;
}

char getUserChoice()
{
    char choice;
    do
    {
        cout << "\n\nFollow the instruction and type your choice. \n";
        cout << "********************************************\n";
        cout << "r for Rock\n";
        cout << "p for Paper\n";
        cout << "s for Scissors\n";

        cout << "Enter choice : ";
        cin >> choice;
    } while (choice != 'r' && choice != 'p' && choice != 's');

    return choice;
}
char getComputerChoice()
{
    srand(time(0));

    int randomNum = (rand() % 3) + 1;
    switch (randomNum)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout<< "ROCK\n";
        break;
    case 'p':
        cout<< "PAPER\n";
        break;
    case 's':
        cout<< "SCISSORS\n";
        break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if(computer == 'r')
        {
            cout<< "Result Tie!";
        }
        else if(computer == 'p')
        {
            cout<< "You Loose.\n";
        }
        else
        {
            cout<< "You Won.\n";
        }
        break;
    case 'p':
        if(computer == 'r')
        {
            cout<< "You Won!";
        }
        else if(computer == 'p')
        {
            cout<< "Result Tie.\n";
        }
        else
        {
            cout<< "You Loose.\n";
        }
        break;
    case 's':
        if(computer == 'r')
        {
            cout<< "You Loose.!";
        }
        else if(computer == 'p')
        {
            cout<< "You Won.\n";
        }
        else
        {
            cout<< "Result Tie.\n";
        }
        break;
    }
}