#include <stdio.h>

int main(void)
{
    double accuracy, latency;
    int approvalStatus;

    printf("Enter model accuracy (%%): ");
    scanf("%lf", &accuracy);

    printf("Enter prediction latency (ms): ");
    scanf("%lf", &latency);

    printf("Enter model approval status (1 = Approved, 0 = Not Approved): ");
    scanf("%d", &approvalStatus);

    if (accuracy >= 90.0 && latency <= 100.0 && approvalStatus == 1)
    {
        printf("Model can be deployed.\n");
    }
    else
    {
        printf("Model cannot be deployed.\n");

        if (accuracy < 90.0)
        {
            printf("Reason: Accuracy too low\n");
        }

        if (latency > 100.0)
        {
            printf("Reason: Latency too high\n");
        }

        if (approvalStatus != 1)
        {
            printf("Reason: Model not approved\n");
        }
    }

    return 0;
}
