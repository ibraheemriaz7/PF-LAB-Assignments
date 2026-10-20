#include <stdio.h>

int main() {
    float sensor_data[3][4] = {0};
    int col;

    printf("Enter temperature readings:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 4; c++) {
            printf("Day %d, Sensor %d: ", r + 1, c);
            scanf("%f", &sensor_data[r][c]);
        }
    }

    printf("Enter the defective sensor column index (0 to 3): ");
    scanf("%d", &col);

    if (col < 0 || col > 3) {
        printf("Invalid column index!\n");
        return 0;
    }

    // Delete the column by left-shifting the columns after it
    for (int r = 0; r < 3; r++) {
        for (int c = col; c < 3; c++) {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    printf("\nUpdated 3x3 matrix:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%.2f\t", sensor_data[r][c]);
        }
        printf("\n");
    }
    return 0;
}
