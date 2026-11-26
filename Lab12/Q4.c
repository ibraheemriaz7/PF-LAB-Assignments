#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ratings;
    int total = 0, highest = 0;
    float average;

    printf("Enter the number of movie categories: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of categories must be greater than 0.\n");
        return 1;
    }

    // Allocate the integer array dynamically
    ratings = (int *)malloc(n * sizeof(int));
    if (ratings == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input the rating count for each category
    for (i = 0; i < n; i++) {
        printf("Enter the rating count of category %d: ", i + 1);
        scanf("%d", &ratings[i]);
    }

    // Total, average and highest
    for (i = 0; i < n; i++) {
        total += ratings[i];
        if (ratings[i] > ratings[highest]) {
            highest = i;
        }
    }
    average = (float)total / n;

    printf("\nTotal ratings across all categories: %d\n", total);
    printf("Average ratings per category: %.2f\n", average);
    printf("Category with the highest rating count: %d (count = %d)\n", highest + 1, ratings[highest]);

    // Update the rating count of a selected category
    int choice, newCount;
    printf("\nEnter the category number to update (1 to %d): ", n);
    scanf("%d", &choice);

    if (choice < 1 || choice > n) {
        printf("Invalid category number!\n");
    } else {
        printf("Enter the new rating count: ");
        scanf("%d", &newCount);
        ratings[choice - 1] = newCount;

        // Recalculate after the update
        total = 0;
        highest = 0;
        for (i = 0; i < n; i++) {
            total += ratings[i];
            if (ratings[i] > ratings[highest]) {
                highest = i;
            }
        }
        average = (float)total / n;

        printf("\nUpdated rating counts:\n");
        for (i = 0; i < n; i++) {
            printf("Category %d: %d\n", i + 1, ratings[i]);
        }
        printf("Total ratings across all categories: %d\n", total);
        printf("Average ratings per category: %.2f\n", average);
        printf("Category with the highest rating count: %d (count = %d)\n", highest + 1, ratings[highest]);
    }

    // Release the memory
    free(ratings);
    ratings = NULL;

    return 0;
}
