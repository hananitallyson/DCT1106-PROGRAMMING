#include <stdio.h>

int main() {
    int boolean;

    printf("\nEnter a int boolean value (0 or 1): ");
    scanf("%d", &boolean);

    const char *result = (boolean == 1) ? "Yes" : "Not";
    printf("\n(boolean == %d) : %s\n", boolean, result);
    printf("\n");

    return 0;
}
