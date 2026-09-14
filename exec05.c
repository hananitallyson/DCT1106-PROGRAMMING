/*
 * ============================================================================
 * Exercise 3.2 - Exercise 5 - ATM
 * 
 * Description:
 *   Simulates a simplified ATM system where the user can check the account
 *   balance, make deposits, withdraw money, check the available withdrawal
 *   limit, or terminate the operation.
 * 
 * Menu:
 *   1 - Check balance
 *   2 - Deposit
 *   3 - Withdraw
 *   4 - Check limit
 *   5 - Exit
 * 
 * Rules:
 *   1. The account must start with a balance of R$ 1,000.00.
 *   2. Use a switch/case statement to determine which operation will be
 *      performed.
 *   3. Check balance:
 *      - Display the current account balance.
 *   4. Deposit:
 *      - Request the deposit amount.
 *      - The deposit is accepted only if the amount is positive.
 *      - Update the account balance.
 *   5. Withdraw:
 *      - Request the withdrawal amount.
 *      - The amount must be positive.
 *      - The withdrawal cannot exceed the available balance.
 *      - If the requested amount exceeds the balance, print:
 *        "Saldo insuficiente!"
 *   6. Check limit:
 *      - Calculate the withdrawal limit using:
 *        limit = balance * 0.30
 *      - Display the available withdrawal limit.
 *   7. Exit:
 *      - Display a message informing that the operation has been terminated.
 *   8. If the user enters a number different from 1, 2, 3, 4, or 5, print:
 *      "Opção inválida!"
 * ============================================================================
 */

#include <stdio.h>

int main(void) {
    double balance = 1000.00;
    double deposit;
    double withdrawal;
    double withdrawalLimit;
    int option;

    do {
        printf("------------ MENU -----------\n");
        printf("1 - Check Balance\n");
        printf("2 - Deposit\n");
        printf("3 - Withdraw\n");
        printf("4 - Check Limit\n");
        printf("5 - Exit\n");
        printf("-----------------------------\n");

        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("(Balance) %.2lf\n\n", balance);
                break;

            case 2:
                printf("Enter deposit value (e.g. 100): ");
                scanf("%lf", &deposit);

                if (deposit > 0) {
                    balance = balance + deposit;
                } else {
                    printf("(Error) Invalid deposit value.\n");
                }
                break;

            case 3:
                printf("Enter withdrawal value (e.g. 100): ");
                scanf("%lf", &withdrawal);

                if ((withdrawal > 0) && (withdrawal <= balance)) {
                    balance = balance - withdrawal;
                } else {
                    printf("(Error) Invalid withdrawal value.\n");
                }
                break;

            case 4:
                withdrawalLimit = balance * 0.3;
                printf("(Limit) %.2lf\n", withdrawalLimit);
                break;

            case 5:
                printf("\nExit...\n\n");
                break;

            default:
                printf("Invalid option. Try again!\n\n");
                break;
        }

    } while (option != 5);

    return 0;
} 
