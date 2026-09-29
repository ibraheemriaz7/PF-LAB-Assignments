#include <stdio.h>

int main(void)
{
    double score;

    printf("Enter confidence score (0-100): ");
    scanf("%lf", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid Score\n");
    }
    else if (score < 50)
    {
        printf("Low Confidence\n");
    }
    else if (score < 80)
    {
        printf("Moderate Confidence\n");
    }
    else
    {
        printf("High Confidence\n");
    }

    return 0;
}
