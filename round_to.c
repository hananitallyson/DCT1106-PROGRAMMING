#include <stdio.h>

float round_to(float number, int digits) {
    if (number == 0) {
        return 0;
    }

    int factor = 1;
    for (int i = 0; i < digits; i++) {
        factor *= 10;
    }

    float scaled = number * factor;
    int integer = (int)scaled;
    float decimal = scaled - integer;

    int rounded;
    if (decimal >= 0.5) {
        rounded = integer + 1;
    } else {
        rounded = integer;
    }

    return rounded / (float)factor;
}

int main() {
    float result = round_to(14.256, 2);
    printf("result: %g\n", result);
    return 0;
}
