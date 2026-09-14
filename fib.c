#include <stdio.h>

int main() {
    int currnum = 0;
    int nextnum = 1;
    int fibonum;
    int posnum;

    printf("\nEnter the desired Fibonacci position (e.g. 6): ");
    scanf("%d", &posnum);

    for (int i = 1; i <= posnum; i++) {
        printf("%d ", currnum);
        fibonum = currnum + nextnum;
        currnum = nextnum;
        nextnum = fibonum;
    }
    
    printf("\n\n");

    return 0;
}
