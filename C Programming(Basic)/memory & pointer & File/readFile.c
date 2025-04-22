#include<stdio.h>

int main()
{
    FILE *pF = fopen("test.txt","r");
    char buffer[255];

    // fgets(buffer,sizeof(buffer),pF);
    // printf("%s\n",buffer);

    if(pF == NULL)
    {
        // Checks if the file failed to open. If so, it prints an error message.
        printf("Unable to open FILE.\n");
    }
    else
    {
        while(fgets(buffer,sizeof(buffer),pF) !=NULL)
        {
            // fgets reads one line from the file into buffer.
            printf("%s",buffer);
        }
    }

    fclose(pF);

    return 0;
}