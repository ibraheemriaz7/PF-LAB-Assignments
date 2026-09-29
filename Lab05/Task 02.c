#include <stdio.h>

int main()
{
    int age, creditScore, existingLoan;
    float income;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter monthly income: ");
    scanf("%f", &income);
    printf("Enter credit score: ");
    scanf("%d", &creditScore);
    printf("Existing loan? (1 = Yes, 0 = No): ");
    scanf("%d", &existingLoan);

    if (age >= 21)
    {
        if (income >= 100000 && creditScore >= 750 && existingLoan == 0)
        {
            printf("High Approval Chance\n");
        }
        else
        {
            if (income >= 75000 && creditScore >= 650 && existingLoan == 1)
            {
                printf("Manual Review Required\n");
            }
            else
            {
                if (income >= 50000 && creditScore >= 600)
                {
                    printf("Possibly Eligible\n");
                }
                else
                {
                    printf("Rejected\n");
                }
            }
        }
    }
    else
    {
        printf("Rejected\n");
    }

    return 0;
}
