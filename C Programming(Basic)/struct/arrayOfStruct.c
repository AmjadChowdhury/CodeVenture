#include<stdio.h>

struct student
{
    char name[20];
    float cgpa;
};


int main()
{
    struct student student1 = {"Pavel",3.76};
    struct student student2 = {"Sabuj",3.66};
    struct student student3 = {"Rahat",3.86};
    struct student student4 = {"Linkon",3.72};

    struct student students[] = {student1,student2,student3,student4};

    for(int i=0;i<sizeof(students)/sizeof(students[0]);i++)
    {
        printf("%s\t",students[i].name);
        printf("%.2f\n",students[i].cgpa);
    }

    return 0;
}