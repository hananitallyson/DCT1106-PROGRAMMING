/*
 * ============================================================================
 * Exercise 3.3 - Bitwise Operations Calculator
 *
 * Description:
 *   Implements a calculator for bitwise operations. The program reads two
 *   integers and an operation code, then uses a switch/case statement to
 *   execute the selected bitwise operation and display the result.
 *
 * Operations:
 *   1 - Bitwise AND ........ (&)
 *   2 - Bitwise OR ......... (|)
 *   3 - Bitwise XOR ........ (^)
 *   4 - Left Shift ......... (<<)
 *   5 - Right Shift ........ (>>)
 *
 * Rules:
 *   1. Read two integers a and b and an operation code op (1 to 5).
 *   2. Use a switch/case statement to select the corresponding operation.
 *   3. For shift operations, the second number b represents the number of
 *      bits to shift.
 *   4. For left shift, calculate a << b.
 *   5. For right shift, calculate a >> b.
 *   6. Print the result in decimal format using %d and hexadecimal format
 *      using %x.
 *   7. If the operation code is invalid, print "Operação inválida".
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    int ivalue, jvalue, option, and, or, xor, shiftl, shiftr;

    printf("\nEnter two integers and an option (e.g. 12 5 1): ");
    scanf("%d %d %d", &ivalue, &jvalue, &option);

    switch (option) {
        case 1:
            and = ivalue & jvalue;
            printf("(and) %d 0x%x\n", and, and);
            break;
        case 2:
            or = ivalue | jvalue;
            printf("(or) %d 0x%x\n", or, or);
            break;
        case 3:
            xor = ivalue ^ jvalue;
            printf("(xor) %d 0x%x\n", xor, xor);
            break;
        case 4:
            shiftl = ivalue << jvalue;
            printf("(shift left) %d 0x%x\n", shiftl, shiftl);
            break;
        case 5:
            shiftr = ivalue >> jvalue;
            printf("(shift right) %d 0x%x\n", shiftr, shiftr);
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
