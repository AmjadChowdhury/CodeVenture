#include<stdio.h>
#include<stdbool.h>
// for boolean..
int main()
{
    int temp = 10;
    bool sunny = false;

    if((temp > 0 && temp <= 50 && !sunny) || temp == 30){
        printf("The weather is good!");
    }
    else{
        printf("The weather is cloudy!");
    }

    return 0;
}