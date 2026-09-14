#include <stdio.h>

int main(void) {
    int num, factorial;

    printf("\nEnter a number (e.g. 5): ");
    scanf("%d", &num);

    factorial = 1;

    for (int i = num; i >= 1; i--) {
        factorial = factorial * i;
    }

    printf("%d! = %d\n\n", num, factorial);

    return 0;
}
