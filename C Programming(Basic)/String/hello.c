#include<stdio.h>
#include<string.h>

int main()
{
    char string1[] = "Amjad";
    char string2[] = "Chowdhury";

    // strlwr(string1);  // to convert lower case..
    // strupr(string1);  // to convert upper case..
    // strcat(string1,string2);  // Appends string2 end of string1
    // strncat(string1,string2,2);  // Appends n char of string2 end of string1
    // strcpy(string1,string2);  // copy string2 to store at string1
    // strncpy(string1,string2,2);  // copy n char string2 to store at string1
    // strset(string1, '?');  // replace all char of string1 by question mark..
    // strnset(string1,'?', 2);  // replace first nth char of string1 by question mark..
    // strrev(string1);  // reverse string...



    printf("%s\n",string1);


    // int result = strlen(string1);
    // int result = strcmp(string1,string2);  // if equal return 0 otherwise -1...
    int result = strncmp(string1,string2,1); // compare only first character, if equal return 0 oterwise negative..


    printf("%d\n",result);

    return 0;
}