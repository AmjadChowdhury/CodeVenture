#include<stdio.h>
#include<math.h>

int main() 
{
    const double PI = 3.1416;
    double radius;
    double circumference;
    double area;
    printf("Enter radius of a circle : ");
    scanf("%lf",&radius);

    circumference = 2 * PI * radius;
    area = PI * pow(radius,2);

    printf("\nCircumference is %lf",circumference);
    printf("\nArea is %lf",area);

    return 0;
}