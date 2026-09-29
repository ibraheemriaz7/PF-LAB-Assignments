#include <stdio.h>

int main(void)
{
    double totalRecords, missingRecords, duplicateRecords;
    double missingPercentage, duplicatePercentage;

    printf("Enter total number of records: ");
    scanf("%lf", &totalRecords);

    printf("Enter number of missing records: ");
    scanf("%lf", &missingRecords);

    printf("Enter number of duplicate records: ");
    scanf("%lf", &duplicateRecords);

    if (totalRecords <= 0)
    {
        printf("Invalid Dataset\n");
        return 0;
    }

    missingPercentage = (missingRecords / totalRecords) * 100.0;
    duplicatePercentage = (duplicateRecords / totalRecords) * 100.0;

    printf("Missing Data Percentage: %.2f%%\n", missingPercentage);

    if (missingPercentage > 30.0)
    {
        printf("Poor Quality Dataset\n");
    }
    else if (duplicatePercentage > 20.0)
    {
        printf("Dataset Requires Cleaning\n");
    }
    else
    {
        printf("Dataset Ready for Training\n");
    }

    return 0;
}
