#include <stdio.h>

int main() {
    float temperature;

    printf("\nEnter a temperature value (e.g. 28.5): ");
    scanf("%f", &temperature);

    if (temperature >= 35) {
        printf("You're going to die of heat!\n");
    } else if (temperature >= 25) {
        printf("It's hot, but Caicó is hotter.\n");
    } else if (temperature >= 15) {
        printf("The temperature is perfect for lying down.\n");
    } else if (temperature >= 5) {
        printf("The perfect temperature for having a nice hot chocolate.\n");
    } else {
        printf("Hypothermia in 3... 2... 1...\n");
    }

    printf("\n");

    return 0;
}
