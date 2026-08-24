#include <stdio.h>

int main() {
    int ivalue, jvalue;

    printf("\nEnter two int values (e.g. 10 5): ");
    scanf("%d %d", &ivalue, &jvalue);

    printf("\n===== RESULTS =====\n");
    printf("i == j : %d\n", ivalue == jvalue);
    printf("i != j : %d\n", ivalue != jvalue);
    printf("i >  j : %d\n", ivalue > jvalue);
    printf("i <  j : %d\n", ivalue < jvalue);
    printf("i >= j : %d\n", ivalue >= jvalue);
    printf("i <= j : %d\n", ivalue <= jvalue);
    printf("\n");

    return 0;
}
