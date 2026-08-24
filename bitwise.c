#include <stdio.h>

int and(int ivalue, int jvalue) {
    return ivalue & jvalue;
}

int or(int ivalue, int jvalue) {
    return ivalue | jvalue;
}

int xor(int ivalue, int jvalue) {
    return ivalue ^ jvalue;
}

int not(int ivalue) {
    return ~ivalue;
}

int main() {
    int i, j;

    i = 5;
    j = 3;

    printf("\n(and)  %d & %d :  %d", i, j, and(i, j));
    printf("\n(or)   %d | %d :  %d", i, j, or(i, j));
    printf("\n(xor)  %d ^ %d :  %d", i, j, xor(i, j));
    printf("\n(not) ~%d     : %d", i, not(i));
    printf("\n");

    return 0;
}
