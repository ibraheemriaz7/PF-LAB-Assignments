#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float unitPrice;
};

int main() {
    struct Item warehouse[5];
    int i, searchId, found = 0;
    float totalValue = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter details for Item %d\n", i + 1);
        printf("ID: ");
        scanf("%d", &warehouse[i].id);
        printf("Name: ");
        scanf("%s", warehouse[i].name);
        printf("Quantity: ");
        scanf("%d", &warehouse[i].quantity);
        printf("Unit Price: ");
        scanf("%f", &warehouse[i].unitPrice);

        totalValue = totalValue + (warehouse[i].quantity * warehouse[i].unitPrice);
    }

    printf("\nTotal Warehouse Inventory Value: %.2f\n", totalValue);

    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchId);

    for (i = 0; i < 5; i++) {
        if (warehouse[i].id == searchId) {
            printf("Item Found:\n");
            printf("ID: %d\n", warehouse[i].id);
            printf("Name: %s\n", warehouse[i].name);
            printf("Quantity: %d\n", warehouse[i].quantity);
            printf("Unit Price: %.2f\n", warehouse[i].unitPrice);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Item not found.\n");
    }

    return 0;
}
