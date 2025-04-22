#include<stdio.h>
#include<ctype.h>
// for conver char to ASCII

int main()
{
    char unit;
    double temp;

    printf("Is the temp is (F) or (c) ? ");
    scanf("%c",&unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("please enter a temp in celsius -> ");
        scanf("%lf",&temp);

        temp = (temp * 9/5) + 32;
        printf("In farenheit temp is %.1lf!",temp);
    }
    else if(unit == 'F'){
        printf("please enter a temp in farenheit -> ");
        scanf("%lf",&temp);

        temp = ((temp - 32) * 5) / 9;
        printf("In celsius temp is %.1lf!",temp);
    }
    else{
        printf("%c is not a valid unit of measurement!",unit);
    }


    return 0;
}