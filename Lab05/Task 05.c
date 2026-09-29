#include <stdio.h>

int main()
{
    float confidence;
    int userType;

    printf("Enter recognition confidence (0-100): ");
    scanf("%f", &confidence);
    printf("Enter user type (1 = Authorized, 0 = Unauthorized): ");
    scanf("%d", &userType);

    /* Ternary operator: show the user type as text */
    printf("User Type: ");
    (userType == 1) ? printf("Authorized\n") : printf("Unauthorized\n");

    /* Access Denied: Confidence < 50 OR User Type = Unauthorized */
    if (confidence < 50 || userType == 0)
    {
        printf("Access Denied\n");
    }
    else
    {
        /* Access Granted: Confidence >= 80 AND User Type = Authorized */
        if (confidence >= 80 && userType == 1)
        {
            printf("Face Recognized\n");
            printf("Access Granted\n");
        }
        else
        {
            /* Confidence is between 50 and 79 */
            printf("Manual Verification Required\n");
        }
    }

    return 0;
}
