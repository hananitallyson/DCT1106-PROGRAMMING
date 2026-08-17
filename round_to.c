#include <stdio.h>

float round_to(float number, int digits) {
    int factor = 1;

    for (int i = 0; i < digits; i++) {
        factor *= 10;
    }

    float scaled = number * factor;
    int integer = (int)scaled;
    float decimal = scaled - integer;

    if (decimal >= 0.5) {
        integer++;
    }

    return integer / (float)factor;
}

int main() {
    float number;
    int digits;

    printf("\nEnter a float number (e.g., 14.256): ");
    scanf("%f", &number);

    printf("Enter the number of decimal digits (e.g., 2): ");
    scanf("%d", &digits);

    float result = round_to(number, digits);

    printf("%g -> %g\n", number, result);

    return 0;
}
