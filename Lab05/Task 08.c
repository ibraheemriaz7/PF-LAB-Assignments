#include <stdio.h>

int main()
{
    int permission;

    printf("Permissions: View = 1, Train = 2, Test = 4, Deploy = 8\n");
    printf("Enter permission value: ");
    scanf("%d", &permission);

    /* Check permission: permission & value */
    if (permission & 1)
    {
        printf("View: Allowed\n");
    }
    else
    {
        printf("View: Not Allowed\n");
    }

    if (permission & 2)
    {
        printf("Train: Allowed\n");
    }
    else
    {
        printf("Train: Not Allowed\n");
    }

    if (permission & 4)
    {
        printf("Test: Allowed\n");
    }
    else
    {
        printf("Test: Not Allowed\n");
    }

    if (permission & 8)
    {
        printf("Deploy: Allowed\n");
    }
    else
    {
        printf("Deploy: Not Allowed\n");
    }

    /* Training + Deployment */
    if ((permission & 2) && (permission & 8))
    {
        printf("User has both Training and Deployment permissions\n");
    }
    else
    {
        printf("User does NOT have both Training and Deployment permissions\n");
    }

    return 0;
}
