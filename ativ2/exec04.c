/*
 * 2.4 Exercise 4 — Pyramid Drawing for Civil Construction (Nested Loops)
 *
 * An engineering company wants to print a simple drawing in the terminal
 * to represent the cross-section of a block pyramid. The program must draw
 * a pyramid of asterisks with a height provided by the user.
 *
 * 2.4.1 Problem Description
 *
 * The engineer enters the height of the pyramid (a positive integer between
 * 1 and 20). The program must draw the pyramid aligned to the left, with
 * the base at the bottom.
 *
 * 2.4.2 Rules
 *
 * 1. Prompt the user for the height and validate whether it is between 1
 *    and 20. If not, display "Invalid height!" and terminate.
 *
 * 2. Use an outer for loop to go through the rows (from 1 to height).
 *
 * 3. Inside it, use an inner for loop to print the asterisks. On row i,
 *    print i asterisks.
 *
 * 4. After each row, print a line break printf("\n");
 *
 * 5. After drawing the pyramid, ask the user whether they want to draw it
 *    again (using do...while). If they enter 1, repeat; if 0, terminate.
 *    Use break if the user enters 0 inside the do...while (optional, since
 *    the condition can terminate the loop).
 *
 * 6. Use continue if the user enters an invalid option in the repetition
 *    prompt (e.g., anything other than 0 or 1), asking again.
 */

#include <stdio.h>

int main() {
    int height = 0;
    int option = 0;

    do {
        printf("\nEnter the height (1-20): ");
        scanf("%d", &height);

        if (!(height > 0 && height < 21)) {
            printf("Invalid height! Try again.\n\n");
            continue;
        }

        for (int i = height; i >= 1; i--) {
            for (int j = i; j <= height; j++) {
                printf("*");
            }
            printf("\n");
        }

        printf("\nRedraw? (1-Yes, 0-No): ");
        scanf("%d", &option); 

        while (option != 1 && option != 0) {
            printf("Invalid option! Try again.\n");
            printf("\nRedraw? (1-Yes, 0-No): ");
            scanf("%d", &option);
        }

        if (option == 0) {
            break;
        }

    } while (option);

    return 0;
}
