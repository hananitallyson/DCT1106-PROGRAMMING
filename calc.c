#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int multi(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int main() {
    int i, j, option;

    printf("\nEnter a option:");
    printf("\n(1): Sum");
    printf("\n(2): Sub");
    printf("\n(3): Multi");
    printf("\n(4): Div");
    printf("\n(5): Mod");
    printf("\nOption: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("\nEnter two int value (e.g. 5 2): ");
            scanf("%d %d", &i, &j);
            printf("\n(sum): %d", sum(i, j));
            break;
        case 2:
            printf("\nEnter two int value (e.g. 5 2): ");
            scanf("%d %d", &i, &j);
            printf("\n(sub): %d", sub(i, j));
            break;
        case 3:
            printf("\nEnter two int value (e.g. 5 2): ");
            scanf("%d %d", &i, &j);
            printf("\n(multi): %d", multi(i, j));
            break;
        case 4:
            printf("\nEnter two int value (e.g. 5 2): ");
            scanf("%d %d", &i, &j);
            printf("\n(div): %d", div(i, j));
            break;
        case 5:
            printf("\nEnter two int value (e.g. 5 2): ");
            scanf("%d %d", &i, &j);
            printf("\n(mod): %d", mod(i, j));
            break;
        default:
            printf("\nInvalid option!");
            break;
    }

    printf("\n");

    return 0;
}
