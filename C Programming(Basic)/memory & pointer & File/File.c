#include<stdio.h>

int main()
{
    // FILE *pF = fopen("C:\\Users\\Lenovo\\OneDrive\\Desktop\\test.txt","a"); // w for ovverride..a for append
    FILE *pF = fopen("test.txt","a");
    fprintf(pF,"Hello! I am coming for second time.\n");

    if(remove("test.txt") == 0)
    {
        printf("test file was deleted\n");
    }
    else
    {
        printf("The file was not deleted!\n");
    }


    fclose(pF);
    return 0;
}