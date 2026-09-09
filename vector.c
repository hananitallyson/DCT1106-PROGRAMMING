#include <stdio.h>

int main() {
    int arr[8];
    int aux;

    printf("\n");

    for (int i = 0; i < 8; i++) {
        printf("[%d] Enter: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 4; i++) {
        aux = arr[i];
        arr[i] = arr[7-i];
        arr[7-i] = aux; 
    }
    
    printf("\n");

    for (int i = 0; i < 8; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    printf("\n\n");

    return 0;
}
