#include <stdio.h>

int main(void)
{
    int role, accountStatus, securityLevel;

    printf("Enter user role (1 = Admin, 2 = Researcher, 3 = Student): ");
    scanf("%d", &role);

    printf("Enter account status (1 = Active, 0 = Inactive): ");
    scanf("%d", &accountStatus);

    printf("Enter security level: ");
    scanf("%d", &securityLevel);

    if (accountStatus == 0)
    {
        printf("Access Denied\n");
    }
    else if (role == 1)
    {
        if (securityLevel >= 3)
            printf("Access Granted - Admin Level\n");
        else
            printf("Access Denied\n");
    }
    else if (role == 2)
    {
        if (securityLevel >= 2)
            printf("Access Granted - Researcher Level\n");
        else
            printf("Access Denied\n");
    }
    else if (role == 3)
    {
        if (securityLevel >= 1)
            printf("Access Granted - Student Level\n");
        else
            printf("Access Denied\n");
    }
    else
    {
        printf("Access Denied\n");
    }

    return 0;
}
