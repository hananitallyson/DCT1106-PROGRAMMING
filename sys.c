#include <stdio.h>

int main() {
    int data[10][4];
    int num, id;

    do {
        printf("Enter NUMBER (number <= 10): ");
        scanf("%d", &num);

        if (num > 10) {
            printf("Invalid: number need to be equal or less 10 \n\n");
        }

    } while (num > 10); 

    for (int i = 0; i < num; i++) {
        printf("Enter ID: ");
        scanf("%d", &data[i][0]);

        printf("Enter AGE: ");
        scanf("%d", &data[i][1]);

        printf("Enter DEPENDENTS: ");
        scanf("%d", &data[i][2]);

        printf("Enter INCOME: ");
        scanf("%d", &data[i][3]);

        printf("\n");
    }

    printf("Search ID: ");
    scanf("%d", &id);

    for (int i = 0; i < num; i++) {
        if (data[i][0] == id) {
            printf("ID: %-4dAGE: %-4dDEPENDENTS: %-4dINCOME: %-4d \n", data[i][0], data[i][1], data[i][2], data[i][3]);
        }
    }

    return 0;
}
