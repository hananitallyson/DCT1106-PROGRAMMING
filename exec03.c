/*
 * ============================================================================
 * Exercise 2.3 - Electricity Tariff Calculation
 * 
 * Description:
 *   Reads an integer representing monthly electricity consumption in kWh and
 *   calculates the total bill amount based on tier rates:
 *     - Up to 100 kWh:      R$ 0.50 per kWh
 *     - 101 to 200 kWh:     R$ 0.75 per kWh
 *     - Above 200 kWh:      R$ 1.20 per kWh
 * 
 * Rules:
 *   1. If consumption is negative, print "Invalid" and terminate.
 *   2. If consumption exceeds 500 kWh, apply a 15% surcharge on the total value.
 *   3. Use only if...else statements for all logical decisions.
 *   4. Use logical AND operators (&&) to check consumption range intervals.
 * 
 * Inputs / Outputs:
 *   Input:  150  -> Output: Total: R$ 112.50
 *   Input:  300  -> Output: Total: R$ 360.00
 *   Input:  -10  -> Output: Invalid
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int kWh;

    printf("\nEnter an integer in kWh (e.g. 150): ");
    scanf("%d", &kWh);

    if (kWh < 0) {
        printf("Invalid\n");
    } else if (kWh <= 100) {
        printf("(%d kWh) Total: R$ %.2f\n", kWh * 0.5);
    } else if (kWh <= 200) {
        printf("(%d kWh) Total: R$ %.2f\n", kWh * 0.75);
    } else if (kWh > 200 && kWh <= 500) {
        printf("(%d kWh) Total: R$ %.2f\n", kWh * 1.2);
    } else if (kWh > 500) {
        printf("(%d kWh) Total: R$ %.2f\n", (kWh * 1.2) + ((kWh * 1.2) * 0.15));
    } else {
        printf("Invalid\n");
    }

    printf("\n");

    return 0;
}
