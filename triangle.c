/*
 * ============================================================================
 * Exercise 2.1 - Triangle Classification
 * 
 * Description:
 *   Reads three positive integers representing the side lengths of a triangle,
 *   verifies if they satisfy the triangle inequality theorem, and classifies
 *   the triangle accordingly:
 *     - Equilateral: All three sides are equal.
 *     - Isosceles:   Exactly two sides are equal.
 *     - Scalene:     All three sides are distinct.
 * 
 * Rules:
 *   1. Triangle Inequality: Sum of any two sides must be greater than the third.
 *   2. Output "Invalid" if sides do not form a triangle.
 *   3. Use only if, else if, and else statements for checks and classification.
 *   4. Use logical operators (&&, ||) to combine conditions.
 * 
 * Inputs / Outputs:
 *   Input:  3 4 5  -> Output: Scalene
 *   Input:  5 5 5  -> Output: Equilateral
 *   Input:  1 2 3  -> Output: Invalid
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int side_a, side_b, side_c;

    printf("\nEnter sides (e.g. 3 4 5): ");
    scanf("%d %d %d", &side_a, &side_b, &side_c);

    if (side_a < 0 || side_b < 0 || side_c < 0) {
        printf("Positive sides only, try again\n");
    } else if (!(side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a)) {
        printf("Invalid, sides do not form a triangle\n");
    } else if (side_a == side_b && side_a == side_c) {
        printf("(%d %d %d) Equilateral\n", side_a, side_b, side_c);
    } else if (side_a == side_b || side_a == side_c || side_b == side_c) {
        printf("(%d %d %d) Isosceles\n", side_a, side_b, side_c);
    } else if (side_a != side_b && side_a != side_c && side_b != side_c) {
        printf("(%d %d %d) Scalene\n", side_a, side_b, side_c);
    } else {
        printf("Invalid input\n");
    }

    printf("\n");

    return 0;
}
