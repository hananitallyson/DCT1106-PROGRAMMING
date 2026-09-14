#include <stdio.h>

int main() {
    float wd_amount;
    float total_wd = 0;
    int valid_txns = 0;

    while (true) {
        printf("\nEnter the amount to withdraw: ");
        scanf("%f", &wd_amount);

        if (wd_amount == 999) {
            break;
        }

        if (wd_amount <= 0) {
            printf("\nINVALID! Zero or negative amount.\nTry again.\n");
            continue;
        }

        if ((int)wd_amount % 10 != 0) {
            printf("\nINVALID! This ATM only has $10, $20, and $50 bills.\n");
            continue;
        }

        total_wd = total_wd + wd_amount;
        valid_txns++;
        printf("\nSUCESS! Withdrawal of $%.2f completed successfully.\n", wd_amount);
    }

    printf("\n=== LOGS ===\n");
    printf("valid_txns: %d\n", valid_txns);
    printf("total_wd: $%.2f\n", total_wd);

    return 0;
}
