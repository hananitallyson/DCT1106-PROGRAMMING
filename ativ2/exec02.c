/*
 * Exercise 2 — Supermarket Product Registration System
 * (do...while, switch, for)
 *
 * A supermarket needs a program to register products and generate
 * a simple report. The system must allow the user to add products,
 * list all products, calculate the total inventory value, and exit.
 *
 * 2.2.1 Menu
 *
 * ===== SUPERMARKET =====
 * 1 - Add product
 * 2 - List products
 * 3 - Calculate total inventory value
 * 4 - Exit
 *
 * 2.2.2 Rules
 *
 * 1. Use do...while to display the menu and process the option
 *    until the user chooses 4 - Exit.
 *
 * 2. Use switch...case to handle the selected option.
 *
 * 3. Add product:
 *    Ask for the product name (string without spaces, maximum
 *    20 characters), the stock quantity (positive integer),
 *    and the unit price (positive float).
 *    Display a message confirming the registration.
 *
 * 4. List products:
 *    Each time this option is selected, display a header and then,
 *    for each registered product, show the name, quantity, and price.
 *
 *    Since students have not learned arrays yet, consider that
 *    the program can store only the data of the last registered
 *    product or, alternatively, ask the user to enter the data
 *    again each time the list is displayed.
 *
 *    The focus is on the repetition structure, not on data storage.
 *    The suggestion is for the program to maintain only a summary
 *    (e.g., total number of registered products).
 *
 *    If no product has been registered, display:
 *    "No product registered."
 *
 * 5. Calculate total inventory value:
 *    Ask again for the price and quantity of each product
 *    (or use the last registered values) and display the total value.
 *
 *    If no product has been registered, display an appropriate message.
 *
 * 6. Exit:
 *    Display:
 *    "Closing the system..."
 *
 *    Then terminate the do...while loop.
 *
 * 7. If the selected option is invalid, display:
 *    "Invalid option!"
 *
 * 8. Use a for loop at some point to simulate the listing,
 *    for example, by printing a dashed line.
 */

#include <stdio.h>

int main() {
    int option, stock;
    float unit_price;
    char prod_name[20];

    do {
        printf("\n===== SUPERMARKET =====\n");
        printf("1 - Add product\n");
        printf("2 - List products\n");
        printf("3 - Calculate total inventory value\n");
        printf("4 - Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("\n===== ADD PRODUCT =====\n");
                printf("Enter product NAME (e.g. Soap): ");
                scanf("%s", &prod_name);
                printf("\nEnter product STOCK QTY (e.g. 120): ");
                scanf("%d", &stock);
                printf("\nEnter product UNIT PRICE (e.g. 2.50): ");
                scanf("%f", &unit_price);
                break;
            case 2:
                printf("\n===== LIST PRODUCTS =====\n");
                
                if (stock != 0) {
                    printf("PRODUCT: %s, STOCK QTY: %d, UNIT PRICE: %.2f\n", prod_name, stock, unit_price);
                } else {
                    printf("No product registered.\n");
                }

                break;
            case 3:
                printf("\n===== TOTAL INVENTORY VALUE =====\n");
                
                if (stock != 0) {
                    printf("TOTAL: %.2f\n", stock * unit_price);
                } else {
                    printf("No product registered.\n");
                }

                break;
            case 4:
                printf("\nExit...\n\n");
                break;
            default:
                printf("\nInvalid option!\nTry again.\n");
                break;
        }

    } while (option != 4);
    return 0;
}
