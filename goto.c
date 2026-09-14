#include <stdio.h>

int main() {
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age < 0) {
        goto err;
    }

    printf("Age: %d\n\n", age);

    return 0;

err:
    printf("*ERROR[ERR0001]: invalid age.\n\n");
    
    return 1;
}
