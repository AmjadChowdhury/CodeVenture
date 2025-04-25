#include<iostream>
#include<ctime>
using namespace std;

int main()
{
    srand(time(0));
    int number = (rand() % 5) + 1;

    switch (number)
    {
    case 1:
        cout<< "You win a bumper ticket.!\n";
        break;
    case 2:
        cout<< "You win a T-shirt.!\n";
        break;
    case 3:
        cout<< "You win a free lunch.!\n";
        break;
    case 4:
        cout<< "You win a free concert.!\n";
        break;
    case 5:
        cout<< "You win a gift card.!\n";
        break;
    
    
    }

    return 0;
}