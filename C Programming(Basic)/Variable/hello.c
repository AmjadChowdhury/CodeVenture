#include<stdio.h>
int main()
{
    printf("Let's start the journey with variable.\n");
    /*
    variable = Allocated space in memory to store a value.
    */
   int x; // declaration
   x = 2020; // initialization
   int y = 2025; // declaration + initialization

   int age = 22; // integer
   float cgpa = 3.59; // float
   char grade = 'c'; // single character
   char name[] = "Amjad"; // array's of string.

   printf("Hello %s\n",name);
   printf("You are %d years old\n",age);
   printf("Your average grade is %c\n",grade);
   printf("Overall cgpa is %.2f\n",cgpa);


    return 0;
}