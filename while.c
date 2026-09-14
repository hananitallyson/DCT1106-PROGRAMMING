#include <stdio.h>

int main(void) {
    int ivalue, jvalue;

    printf("\nEnter two integer numbers (e.g. 5 2): ");
    scanf("%d %d", &ivalue, &jvalue);

    while (ivalue < jvalue) {
        ivalue++;
        printf("%d\n", ivalue);
    }

    printf("End.\n");

    return 0;
}
