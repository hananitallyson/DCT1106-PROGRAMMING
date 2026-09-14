#include <stdio.h>

int main(void) {
    int num = 10;
    int sum;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }

    printf("%d", sum);

    return 0;
}
