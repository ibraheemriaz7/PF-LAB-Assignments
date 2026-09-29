#include <stdio.h>

int main()
{
    int category, sub;

    printf("Select Category\n");
    printf("1. Animal\n2. Vehicle\n3. Food\n4. Human\n");
    printf("Enter choice: ");
    scanf("%d", &category);

    switch (category)
    {
        case 1:
            printf("Animal Subcategories\n");
            printf("1. Cat\n2. Dog\n3. Bird\n");
            printf("Enter choice: ");
            scanf("%d", &sub);
            switch (sub)
            {
                case 1:
                    printf("Image classified as: Animal - Cat\n");
                    break;
                case 2:
                    printf("Image classified as: Animal - Dog\n");
                    break;
                case 3:
                    printf("Image classified as: Animal - Bird\n");
                    break;
                default:
                    printf("Invalid subcategory\n");
            }
            break;

        case 2:
            printf("Vehicle Subcategories\n");
            printf("1. Car\n2. Bus\n3. Bike\n");
            printf("Enter choice: ");
            scanf("%d", &sub);
            switch (sub)
            {
                case 1:
                    printf("Image classified as: Vehicle - Car\n");
                    break;
                case 2:
                    printf("Image classified as: Vehicle - Bus\n");
                    break;
                case 3:
                    printf("Image classified as: Vehicle - Bike\n");
                    break;
                default:
                    printf("Invalid subcategory\n");
            }
            break;

        case 3:
            printf("Food Subcategories\n");
            printf("1. Pizza\n2. Burger\n3. Biryani\n");
            printf("Enter choice: ");
            scanf("%d", &sub);
            switch (sub)
            {
                case 1:
                    printf("Image classified as: Food - Pizza\n");
                    break;
                case 2:
                    printf("Image classified as: Food - Burger\n");
                    break;
                case 3:
                    printf("Image classified as: Food - Biryani\n");
                    break;
                default:
                    printf("Invalid subcategory\n");
            }
            break;

        case 4:
            printf("Human Subcategories\n");
            printf("1. Male\n2. Female\n3. Child\n");
            printf("Enter choice: ");
            scanf("%d", &sub);
            switch (sub)
            {
                case 1:
                    printf("Image classified as: Human - Male\n");
                    break;
                case 2:
                    printf("Image classified as: Human - Female\n");
                    break;
                case 3:
                    printf("Image classified as: Human - Child\n");
                    break;
                default:
                    printf("Invalid subcategory\n");
            }
            break;

        default:
            printf("Invalid category\n");
    }

    return 0;
}
