#include <stdio.h>
#include <string.h>

int main() {
    char url[100];
    char protocol[8];
    char domain[25];
    
    printf("Enter URL: ");
    scanf("%[^\n]%*c", &url);
    strncpy(protocol, url, 8);

    if (strcmp(protocol, "https://") == 0) {
        strcpy(domain, url + 8);
        char *buff = strchr(domain, '/');

        if (buff != NULL) {
            *buff = '\0';
        }

        printf("domain: %s \n", domain);
    } else {
        printf("is not HTTPS! \n");
    }

    return 0;
}
