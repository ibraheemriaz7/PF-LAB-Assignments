#include <stdio.h>

int main(void)
{
    double a, b, c;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("All three numbers are equal and greatest.\n");
    }
    else if (a == b && a > c)
    {
        printf("The greatest numbers are %.2f and %.2f (equal).\n", a, b);
    }
    else if (a == c && a > b)
    {
        printf("The greatest numbers are %.2f and %.2f (equal).\n", a, c);
    }
    else if (b == c && b > a)
    {
        printf("The greatest numbers are %.2f and %.2f (equal).\n", b, c);
    }
    else if (a > b && a > c)
    {
        printf("The greatest number is %.2f.\n", a);
    }
    else if (b > a && b > c)
    {
        printf("The greatest number is %.2f.\n", b);
    }
    else
    {
        printf("The greatest number is %.2f.\n", c);
    }

    return 0;
}
