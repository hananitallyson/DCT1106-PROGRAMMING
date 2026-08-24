#include <stdio.h>

float rounding(float number, int ndigits) {
    int factor = 1;

    for (int i = 0; i < ndigits; i++) {
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
    char input[100];
    float number;
    int digits;

    printf("\nEnter a float number (e.g., 14.256): ");
    scanf("%99s", input);
    sscanf(input, "%f", &number);

    printf("Enter the number of decimal digits (e.g., 2): ");
    scanf("%d", &digits);

    float result = rounding(number, digits);

    printf("%s -> %.*f\n", input, digits, result);

    return 0;
}
