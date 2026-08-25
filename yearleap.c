/*
 * ============================================================================
 * Exercise 2.2 - Leap Year Determination with Bitwise Operations
 * 
 * Description:
 *   Reads a positive integer representing a year and determines whether it is
 *   a leap year based on the following conditions:
 *     - Divisible by 4 AND NOT divisible by 100, OR
 *     - Divisible by 400.
 * 
 * Rules:
 *   1. Read the year using scanf.
 *   2. Use the bitwise AND operator (&) to check divisibility by 4.
 *      (A number is divisible by 4 if its last two bits are 0: (year & 3) == 0).
 *   3. Use the modulo operator (%) for divisibility checks by 100 and 400.
 *   4. Combine conditions using logical operators (&&, ||) within if...else.
 *   5. Print "Leap year" if true, otherwise print "Ano nao bissexto".
 * 
 * Inputs / Outputs:
 *   Input:  2024  -> Output: Leap year
 *   Input:  1900  -> Output: Not a leap year
 *   Input:  2000  -> Output: Leap year
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int year;

    printf("\nEnter a year (e.g. 2006): ");
    scanf("%d", &year);
    
    if (((year & 3) == 0 && (year % 100) != 0) || year % 400 == 0) {
        printf("(%d) Leap year\n", year);
    } else {
        printf("(%d) Not a leap year\n", year);
    }

    printf("\n");

    return 0;
}
