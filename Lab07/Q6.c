#include <stdio.h>

int main() {
    int shifts[4][3];
    int idx;

    printf("Enter the initial 3x3 production data:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Workstation %d, Shift %d: ", i, j + 1);
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("Enter the row index for insertion (0 to 3): ");
    scanf("%d", &idx);

    if (idx < 0 || idx > 3) {
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter the 3 new production values:\n");
    int newRow[3];
    for (int j = 0; j < 3; j++) {
        scanf("%d", &newRow[j]);
    }

    // Shift rows down, starting from the last row
    for (int i = 3; i > idx; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i - 1][j];
        }
    }

    // Insert the new row
    for (int j = 0; j < 3; j++) {
        shifts[idx][j] = newRow[j];
    }

    printf("\nUpdated 4x3 matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", shifts[i][j]);
        }
        printf("\n");
    }
    return 0;
}
