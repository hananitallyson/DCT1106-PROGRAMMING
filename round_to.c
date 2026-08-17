#include <stdio.h>

float round_to(float number, int digits) {
    int factor = 1;
    float scaled;
    int integer;
    float decimal;

    for (int i = 0; i < digits; i++) {
        factor *= 10;
    }

    scaled = number * factor;
    integer = (int)scaled;
    decimal = scaled - integer;

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

    float result = round_to(number, digits);

    printf("%s -> %.*f\n", input, digits, result);

    return 0;
}
