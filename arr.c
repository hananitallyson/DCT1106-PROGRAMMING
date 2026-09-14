#include <stdio.h>

int main() {
    int i;
    int arr_sum = 0;
    float arr_avg = 0;
    int arr_high = 0;
    int arr_low = 0;
    int arr_length;
    int arr[5];

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("[%d] Enter a int number: ", i);
        scanf("%d", &arr[i]);
        
        if ((i == 0) || (arr[i] < arr_low)) {
            arr_low = arr[i];
        }

        if ((i == 0) || (arr[i] > arr_high)) {
            arr_high = arr[i];
        }

        arr_sum = arr_sum + arr[i];
    }

    arr_length = sizeof(arr) / sizeof(arr[0]);
    arr_avg = (float)arr_sum / arr_length;

    printf("\n[arr_sum ]: %d", arr_sum);
    printf("\n[arr_avg ]: %.1f", arr_avg);
    printf("\n[arr_high]: %d", arr_high);
    printf("\n[arr_low ]: %d", arr_low);
    printf("\n\n");

    return 0;
}
