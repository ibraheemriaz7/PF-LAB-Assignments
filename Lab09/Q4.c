#include <stdio.h>

int add(int a, int b);
int multiply(int a, int b);
int findMax(int a, int b);
int compute(int a, int b, int (*operation)(int, int));

int main()
{
    int x, y;
    int sum, product, maximum;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    sum = compute(x, y, add);
    product = compute(x, y, multiply);
    maximum = compute(x, y, findMax);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Maximum = %d\n", maximum);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int compute(int a, int b, int (*operation)(int, int))
{
    return operation(a, b);
}
