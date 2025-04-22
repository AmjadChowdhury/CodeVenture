#include <stdio.h>

void birthday(char name[], int age) {
    // here name & age is parameter..
    printf("Hello! Happy birthday to %s!\n", name);
    printf("Now, you are %d years old.\n", age);
}

int main() {
    char name[] = "Rahat";
    int age = 24;
    birthday(name, age);
    // here name & age is arguments...
    return 0;
}
