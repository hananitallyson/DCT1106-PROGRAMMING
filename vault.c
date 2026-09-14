#include <stdio.h>

int main() {
    const int PASSWORD = 1234;
    const int DANGER_CODE = 9999;
    const int MAX_ATTEMPTS = 3;

    int entry;

    for (int attempt = 1; attempt <= MAX_ATTEMPTS; attempt++) {
        printf("\n(attempt %d) >> ", attempt);
        scanf("%d", &entry);

        if (entry == PASSWORD) {
            printf("\nVault open.\n");
            break;
        } 
        
        if (entry == DANGER_CODE) {
            printf("\nDANGER! Vault locked.\n");
            break;
        }

        if (attempt == MAX_ATTEMPTS) {
            printf("\nACCESS DENIED! Vault locked.\n");
            break;
        }

        else {
            printf("\nTry again.\n");
        }
    }

    return 0;
}
