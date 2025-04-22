#include<stdio.h>
#include<stdbool.h>
int main()
{
    char a = 'A'; // single character %c
    char b[] = "Amjad chy"; // array of charcter %s
    float c = 3.86; // 4bytes(32 bits of precision) 6 - 7 digits %f
    double d = 4.56; // 8bytes(64 bits of precision) 15 - 16 digits %lf
    bool e = false; // 1bytes(true or false) %d
    printf("%d",e);
    char f = 100; // 1bytes(-128 to +127) %d %c
    unsigned char g = 200; // 1bytes(0 to +255) %d %c
    short int h = 327; // 2bytes(-32768 to +32767) %d // short h = 2
    unsigned short int i = 54555; // 2bytes(0 to +65535) %d // unsigned short i = 44

    int j = 3535535; // 4bytes %d
    unsigned int k = 5454554; // 4bytes %u

    long long int l = 5576577; // 8bytes %lld
    unsigned long long int m = 65262552; // 8bytes %llu


    return 0;
}