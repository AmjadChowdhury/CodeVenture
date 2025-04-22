#include<stdio.h>

// enum day{Sun,Mon,Tue,Wed,Thu,Fri,Sat};
enum day{Sun = 1,Mon,Tue,Wed,Thu,Fri,Sat};

int main()
{
    // a user type of named integer identifies
    // helps to make a program more readable..
    enum day today = Mon;

    printf("%d\n",today); // enums isn't string but threated as int.

    if(today == Sat || today == Fri)
    {
        printf("It's weekend!Now let's go party!\n");
    }
    else
    {
        printf("Ahhhh! I have to work today!!\n");
    }

    return 0;
}