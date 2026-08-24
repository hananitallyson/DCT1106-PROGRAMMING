#include <stdio.h>

int main() {
    int ivalue, rshift, lshift;

    printf("\nEnter int value (e.g.): ");
    scanf("%d", &ivalue);

    rshift = ivalue >> 1;
    lshift = ivalue << 1;

    
    printf("\n(rshift) %d >> 1 : %d", ivalue, rshift);
    printf("\n(lshift) %d << 1 : %d\n", ivalue, lshift);
    printf("\n");

    return 0;
}
