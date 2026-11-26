#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *stock;
    int total = 0, lowest = 0;
    float average;

    printf("Enter the number of book categories: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of categories must be greater than 0.\n");
        return 1;
    }

    // Allocate memory dynamically for the stock counts
    stock = (int *)malloc(n * sizeof(int));
    if (stock == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input stock quantity for each category
    for (i = 0; i < n; i++) {
        printf("Enter stock quantity of category %d: ", i);
        scanf("%d", &stock[i]);
    }

    // Total, average and lowest stock
    for (i = 0; i < n; i++) {
        total += stock[i];
        if (stock[i] < stock[lowest]) {
            lowest = i;
        }
    }
    average = (float)total / n;

    printf("\nTotal stock: %d\n", total);
    printf("Average stock per category: %.2f\n", average);
    printf("Category with the lowest stock: %d (stock = %d)\n", lowest, stock[lowest]);

    // Update the stock of any category
    int index, newStock;
    printf("\nEnter the category index to update (0 to %d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Invalid category index!\n");
    } else {
        printf("Enter the new stock quantity: ");
        scanf("%d", &newStock);
        stock[index] = newStock;

        // Recalculate after the update
        total = 0;
        lowest = 0;
        for (i = 0; i < n; i++) {
            total += stock[i];
            if (stock[i] < stock[lowest]) {
                lowest = i;
            }
        }
        average = (float)total / n;

        printf("\nUpdated stock levels:\n");
        for (i = 0; i < n; i++) {
            printf("Category %d: %d\n", i, stock[i]);
        }
        printf("Total stock: %d\n", total);
        printf("Average stock per category: %.2f\n", average);
        printf("Category with the lowest stock: %d (stock = %d)\n", lowest, stock[lowest]);
    }

    // Free the allocated memory
    free(stock);
    stock = NULL;

    return 0;
}
