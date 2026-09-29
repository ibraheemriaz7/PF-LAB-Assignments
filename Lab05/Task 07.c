#include <stdio.h>

int main()
{
    float confidence, threshold;

    printf("Enter model confidence (0-100): ");
    scanf("%f", &confidence);
    printf("Enter required confidence threshold: ");
    scanf("%f", &threshold);

    /* Confidence level */
    if (confidence >= 90)
    {
        printf("Confidence Level: Very High\n");
    }
    else
    {
        if (confidence >= 75)
        {
            printf("Confidence Level: High\n");
        }
        else
        {
            if (confidence >= 50)
            {
                printf("Confidence Level: Moderate\n");
            }
            else
            {
                printf("Confidence Level: Low\n");
            }
        }
    }

    /* Accepted: Confidence >= Required Threshold AND Confidence >= 50 */
    if (confidence >= threshold && confidence >= 50)
    {
        printf("Prediction Accepted\n");
    }
    else
    {
        printf("Prediction Rejected\n");
    }

    return 0;
}
