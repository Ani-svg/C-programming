#include <stdio.h>

int main() 
{
    char user[20], pass[20];
    char correct_user[] = "user";
    char correct_pass[] = "1234";

    int i, flag1 = 1, flag2 = 1;

    static int order_id = 1000;

    char *item[] = {"Milk", "Bread", "Rice"};
    int price[] = {40, 25, 60};
    int itemCount = 3;

    printf("Enter username: ");
    scanf("%s", user);

    printf("Enter password: ");
    scanf("%s", pass);

    for (i = 0; user[i] != '\0' || correct_user[i] != '\0'; i++)
        if (user[i] != correct_user[i]) { flag1 = 0; break; }

    for (i = 0; pass[i] != '\0' || correct_pass[i] != '\0'; i++)
        if (pass[i] != correct_pass[i]) { flag2 = 0; break; }

    if (flag1 == 0 || flag2 == 0) {
        printf("Login failed!\n");
        return 0;
    }

    printf("\nLogin successful!\n");
    order_id++;
    printf("Order ID: %d\n\n", order_id);

    printf("=== Catalogue ===\n");
    for (int i = 0; i < itemCount; i++)
        printf("%d. %s - Rs %d\n", i + 1, item[i], price[i]);

    int n;
    printf("\nHow many items do you want to buy? ");
    scanf("%d", &n);

    int choice, qty, total = 0;

    printf("\n====== BILL ======\n");
    printf("Item\tQty\tAmount\n");

    for (int i = 0; i < n; i++) {
        printf("\nEnter item number: ");
        scanf("%d", &choice);

        printf("Enter quantity: ");
        scanf("%d", &qty);

        int amt = qty * price[choice - 1];
        total += amt;

        printf("%s\t%d\t%d\n", item[choice - 1], qty, amt);
    }

    float tax = total * 7 / 100.0;
    float final = total + tax;

    printf("\nSubtotal = %d", total);
    printf("\nTax (7%%) = %.2f", tax);
    printf("\nTotal Amount = %.2f\n", final);

    return 0;
}
