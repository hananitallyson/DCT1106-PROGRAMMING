#include <stdio.h>

int main() {
    char buffer[100];
    int buff_counter = 0;

    printf("Enter MESSAGE: ");
    scanf("%[^\n]%*c", buffer);

    while (true) {
        if (buffer[buff_counter] == '\0') {
            break;
        }

        buff_counter++;
    }

    if (buff_counter <= 20) {
        printf("valid: %s", buffer);
        return 0;
    } 
    else {
        printf("invalid message!");
        return 1;
    }
}
