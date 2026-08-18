#include <stdio.h>

int main(void) {
    char name[50];
    int age;

    printf("\nEnter your name (e.g. Gabi): ");
    scanf("%[^\n]s", &name);

    printf("Enter your age (e.g. 20): ");
    scanf("%d", &age);

    printf("Welcome, %s! You are %d years old.\n", name, age);

    return 0;
}
