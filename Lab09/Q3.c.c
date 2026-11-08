#include <stdio.h>

int main()
{
    int image[3][3];
    int (*ptr)[3] = image;
    int i, j;

    printf("Enter the values of the 9 pixels:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Pixel (%d,%d): ", i, j);
            scanf("%d", *(ptr + i) + j);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(ptr + i) + j) = *(*(ptr + i) + j) * 2;
        }
    }

    printf("\nUpdated image:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
