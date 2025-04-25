#include<iostream>
#include<ctime>

using namespace std;

int main()
{
    srand(time(0));
    int number = (rand() % 100) + 1;
    int guess;

    int tries = 0;
    do{
        cout<< "Enter guess the number from 0 to 100 -> ";
        cin >> guess;
        if(guess > number)
        {
            cout<< "Too high!\n";
            tries++;
        }
        else if(guess < number)
        {
            cout<< "Too Low!\n";
            tries++;
        }
        else
        {
            cout<< "Correct!\n";
        }

    }while(number != guess);
    cout<< "Finally you guess the number by trying "<< tries<< " times.\n";


    return 0;
}