#include <stdio.h>

int main(void)
{
    int obstacle, person;
    double battery;

    printf("Enter obstacle status (1 = Detected, 0 = Not Detected): ");
    scanf("%d", &obstacle);

    printf("Enter person status (1 = Detected, 0 = Not Detected): ");
    scanf("%d", &person);

    printf("Enter battery percentage: ");
    scanf("%lf", &battery);

    if (obstacle == 1)
    {
        if (person == 1)
        {
            printf("Emergency Stop\n");
        }
        else
        {
            printf("Change Direction\n");
        }
    }
    else
    {
        if (battery < 20.0)
        {
            printf("Return to Charging Station\n");
        }
        else
        {
            printf("Continue Moving\n");
        }
    }

    return 0;
}
