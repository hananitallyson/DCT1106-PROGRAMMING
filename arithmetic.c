#include <stdio.h>

int main() {
    int ivalue, jvalue, sum, sub, multi, div, remain;

    printf("\nEnter the first value (e.g 5): ");
    scanf("%d", &ivalue);

    printf("Enter the second value (e.g 2): ");
    scanf("%d", &jvalue);

    sum = ivalue + jvalue;
    sub = ivalue - jvalue;
    multi = ivalue * jvalue;
    div = ivalue / jvalue;
    remain = ivalue % jvalue;

    printf("\n===== RESULTS =====\n");

    printf("Sum: %d + %d = %d\n", ivalue, jvalue, sum);
    printf("Subtraction: %d - %d = %d\n", ivalue, jvalue, sub);
    printf("Multiplication: %d * %d = %d\n", ivalue, jvalue, multi);
    printf("Division: %d / %d = %d\n", ivalue, jvalue, div);
    printf("Module: %d %% %d = %d\n", ivalue, jvalue, remain);
    printf("\n");

    return 0;
}
