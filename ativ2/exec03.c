/*
 * Exercise 3 — Patient Body Temperature Monitoring
 * (for, continue, break)
 *
 * In a hospital, a nursing technician measures the temperature
 * of several patients throughout the day. You must write a program
 * that processes these measurements and generates a report.
 *
 * 2.3.1 Description
 *
 * The technician enters the number N of measurements (positive integer)
 * and then enters N temperatures (in degrees Celsius, which may contain
 * decimal values).
 *
 * The program must calculate:
 * - The average temperature;
 * - The highest temperature;
 * - The lowest temperature;
 * - The number of patients with fever (temperature >= 37.5°C).
 *
 * 2.3.2 Rules
 *
 * 1. Use a for loop to read the N temperatures.
 *
 * 2. Inside the loop:
 *    - If a temperature is lower than 30.0 or higher than 45.0,
 *      consider it invalid, display:
 *      "Invalid temperature! Ignoring."
 *      and use continue so it is not counted.
 *
 *    - Update the highest and lowest temperatures
 *      (initialize them with the first valid temperature).
 *
 *    - If no valid temperature is read, display:
 *      "No valid measurement."
 *      and use break to exit the for loop.
 *
 *    - Count whether the temperature is >= 37.5 (fever).
 *
 * 3. After the loop, calculate and display the average temperature
 *    (with one decimal place), the highest temperature, the lowest
 *    temperature, and the number of patients with fever.
 *
 * 4. Use if...else for the comparisons.
 */

#include <stdio.h>

int main() {
    int num_measurements = 0;
    float temperature = 0;
    float temperature_sum = 0;
    float average_temperature = 0;
    float max_temperature = 0;
    float min_temperature = 0;
    int fever_count = 0;

    printf("\nEnter number of measurements: ");
    scanf("%d", &num_measurements);

    for (int nm = 1; nm <= num_measurements;) {
        printf("[%d] Enter temperature: ", nm);
        scanf("%f", &temperature);

        if (temperature < 30 || temperature > 45) {
            printf("Invalid temperature! Try again.\n\n");
            continue;
        }

        if (temperature > max_temperature) {
            max_temperature = temperature;
        }

        if (min_temperature == 0 || temperature < min_temperature) {
            min_temperature = temperature;
        }

        if (temperature >= 37.5) {
            fever_count++;
        }

        temperature_sum = temperature_sum + temperature;
        nm++;
    }

    average_temperature = temperature_sum / num_measurements;

    printf("\nAverage: %.2f", average_temperature);
    printf("\nMax: %.2f", max_temperature);
    printf("\nMin: %.2f", min_temperature);
    printf("\nFever: %d\n\n", fever_count);

    return 0;
}
