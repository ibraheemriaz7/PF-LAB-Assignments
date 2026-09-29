#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num, base, exponent;

    printf("=== Math Calculator ===\n");
    printf("1. Square Root\n");
    printf("2. Power\n");
    printf("3. Absolute Value\n");
    printf("4. Floor\n");
    printf("5. Ceiling\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a number: ");
            scanf("%lf", &num);
            if (num >= 0)
            {
                printf("Square root of %.2f = %.2f\n", num, sqrt(num));
            }
            else
            {
                printf("Invalid input: square root of a negative number\n");
            }
            break;

        case 2:
            printf("Enter base: ");
            scanf("%lf", &base);
            printf("Enter exponent: ");
            scanf("%lf", &exponent);
            printf("%.2f ^ %.2f = %.2f\n", base, exponent, pow(base, exponent));
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%lf", &num);
            printf("Absolute value of %.2f = %.2f\n", num, fabs(num));
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%lf", &num);
            printf("Floor of %.2f = %.2f\n", num, floor(num));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num);
            printf("Ceiling of %.2f = %.2f\n", num, ceil(num));
            break;

        default:
            printf("Invalid menu choice\n");
    }

    return 0;
}
