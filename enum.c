#include <stdio.h>

typedef enum { PENDING, PROCESSING, SHIPPED, DELIVERED, CANCELED } Status;

int main() {
    Status st = PENDING;
    int proceed = 0;

    printf("CURRENT STATUS: PENDING (%d) \n", st);

    for (int i = 1; i < 5; i++) {
        if (i != 4) {
            printf("PROCEED? (1-yes, 0-no): ");
            scanf("%d", &proceed);
        } else {
            printf("STATUS FINISHED! \n\n");
        }

        if (proceed == 1) {
            st++;

            switch (st) {
                case PROCESSING:
                    printf("\nCURRENT STATUS: PROCESSING (%d) \n", st);
                    break;
                case SHIPPED:
                    printf("\nCURRENT STATUS: SHIPPED (%d) \n", st);
                    break;
                case DELIVERED:
                    printf("\nCURRENT STATUS: DELIVERED (%d) \n", st);
                    break;
            }
        }

        else {
            st = 4;
            printf("CURRENT STATUS: CANCELED (%d) \n\n", st);
            break;
        }
    }

    return 0;
}
