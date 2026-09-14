/*
 * Exercise 1 — Snack Bar Sales Control
 * (while, break, continue)
 *
 * You have been hired to develop a simple sales control system
 * for a snack bar. The program must record each sale made during
 * business hours and provide a summary at the end of the day.
 *
 * 2.1.1 Problem Description
 *
 * For each sale, the attendant enters the product code (integer)
 * and the sale amount (positive float). The system must accumulate
 * the total amount sold and count how many sales were made.
 * Data entry ends when the attendant enters the code -1 (stop condition).
 *
 * 2.1.2 Rules
 *
 * 1. Use a while loop to read the data.
 *
 * 2. Inside the loop:
 *    - Read the product code. If it is -1, use break to stop reading.
 *    - Read the sale amount.
 *    - Check whether the amount is positive. If not, display:
 *      "Invalid amount! Sale ignored."
 *      and use continue to skip the rest of the iteration without counting it.
 *    - If the amount is positive, add it to the total and increment
 *      the sales counter.
 *
 * 3. After reading the data, display:
 *    - Total number of valid sales;
 *    - Total amount collected (with two decimal places).
 *
 * 4. If no valid sale was registered, display:
 *    "No sales recorded."
 *
 * 5. Use if...else for all checks.
 */

#include <stdio.h>

int main() {
    int code;
    int valid_sales;
    float total_amount = 0;
    float price;

    while (true) {
        printf("\nEnter CODE and PRICE (e.g. 101 25.00): ");
        scanf("%d %f", &code, &price);

        if (code == -1) {
            break;
        }

        if (price <= 0) {
            printf("\nINVALID PRICE! Sale ignored.\n");
            continue;
        }

        valid_sales++;
        total_amount = total_amount + price;
    }

    printf("\nTotal sales: %d", valid_sales);
    printf("\nTotal amount: %.2f\n\n", total_amount);

    return 0;
}
