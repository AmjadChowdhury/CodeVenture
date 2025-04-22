#include<stdio.h>
int main()
{
    int num1,num2;
    char operator;
    float result;

    printf("Enter operator(+,-,*,/) -> ");
    scanf("%c",&operator);

    printf("Enter first number -> ");
    scanf("%d",&num1);
    printf("Enter second number -> ");
    scanf("%d",&num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("Ans is %.2f!",result);
            break;
        case '-':
            result = num1 - num2;
            printf("Ans is %.2f!",result);
            break;
        case '*':
            result = num1 * num2;
            printf("Ans is %.2f!",result);
            break;
        case '/':
            result = num1 / num2;
            printf("Ans is %.2f!",result);
            break;
        default:
            printf("Enter valid operator(+,-,*,/)");
    }


    return 0;
}