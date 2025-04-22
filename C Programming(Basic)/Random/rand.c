#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0)); // seed random..
    // Seeds the random number generator with the current time (in seconds).
    // This ensures you get different results every time you run the program.
    // srand() sets the starting point for the rand() sequence.
    // Without this line, you'd get the same numbers every time.

    int number1 = (rand() % 10) + 1; // here rand() gives us 0 to 32767
    int number2 = (rand() % 10) + 1; 
    int number3 = (rand() % 10) + 1; 


    printf("%d %d %d\n",number1,number2,number3);

    return 0;
}