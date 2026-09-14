/*
 * ============================================================================
 * Exercise 3.1 - Fast Food Self-Service Kiosk
 * 
 * Description:
 *   Simulates a self-service kiosk where the user selects a food item by code,
 *   specifies the quantity, and chooses whether to add a dessert. The program
 *   calculates subtotal, applies dynamic discounts, and outputs an itemized bill.
 * 
 * Menu:
 *   1 - Hamburger ........ R$ 18.00
 *   2 - X-Salad .......... R$ 22.00
 *   3 - X-Bacon .......... R$ 25.00
 *   4 - French Fries ..... R$ 12.00
 *   5 - Soda ............. R$  7.00
 * 
 * Rules:
 *   1. Use a switch/case statement to identify the selected product code.
 *   2. If the code is invalid, print "Invalid product" and stop calculation.
 *   3. If dessert is selected (1 = Yes, 0 = No), add R$ 8.00 to the order.
 *   4. Apply discounts based on total order value:
 *      - Total > R$ 100.00      : 10% discount
 *      - R$ 50.00 <= Total <= R$ 100.00 : 5% discount
 *      - Total < R$ 50.00       : No discount
 *   5. Output details: Product name, quantity, items total, dessert fee,
 *      discount amount, and final total bill.
 * ============================================================================
 */

#include <stdio.h>

int main() {
    int item_code, item_qty, want_dessert;
    int dessert, product_price;
    double total_price;
    char *product_name;

    printf("------------- MENU ------------\n");
    printf("1 - Hamburger ........ R$ 18.00\n");
    printf("2 - X-Salad .......... R$ 22.00\n");
    printf("3 - X-Bacon .......... R$ 25.00\n");
    printf("4 - French Fries ..... R$ 12.00\n");
    printf("5 - Soda ............. R$  7.00\n");
    printf("-------------------------------\n");

    printf("\nEnter (item_code qty dessert): ");
    scanf("%d %d %d", &item_code, &item_qty, &want_dessert);

    dessert = want_dessert ? 8 : 0;

    switch (item_code) {
        case 1:
            product_name = "Hamburger";
            product_price = 18;
            break;

        case 2:
            product_name = "X-Salad";
            product_price = 22;
            break;

        case 3:
            product_name = "X-Bacon";
            product_price = 25;
            break;

        case 4:
            product_name = "French Fries";
            product_price = 12;
            break;

        case 5:
            product_name = "Soda";
            product_price = 7;
            break;

        default:
            printf("Invalid product\n");
            return 0;
    }

    total_price = (product_price * item_qty) + dessert;

    if (total_price >= 50 && total_price <= 100) {
        total_price = total_price * 0.95;
    } 
    else if (total_price > 100) {
        total_price = total_price * 0.90;
    }

    printf("(%d %s) Total: R$ %.2f\n\n", item_qty, product_name, total_price);

    return 0;
} 
