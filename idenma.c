#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 4) {
        int j = 1;
        while (j <= 4) {
            if (i + j == 5) {
                printf("%d", 1);
            } else {
                printf("%d", 0);
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
