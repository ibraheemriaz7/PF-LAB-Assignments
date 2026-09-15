#include <stdio.h>

int main(void)
{
    double dataUsed, pricePerGB;
    double basicCost, discountRate, discountAmount, finalCost;

    printf("Enter data used (GB): ");
    scanf("%lf", &dataUsed);

    printf("Enter price per GB: ");
    scanf("%lf", &pricePerGB);

    basicCost = dataUsed * pricePerGB;

    if (dataUsed < 50.0)
    {
        discountRate = 0.0;
    }
    else if (dataUsed < 100.0)
    {
        discountRate = 0.05;
    }
    else if (dataUsed < 200.0)
    {
        discountRate = 0.10;
    }
    else
    {
        discountRate = 0.15;
    }

    discountAmount = basicCost * discountRate;
    finalCost = basicCost - discountAmount;

    printf("Basic Cost: %.2f\n", basicCost);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Final Cost: %.2f\n", finalCost);

    return 0;
}
