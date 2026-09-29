#include <stdio.h>

int main()
{
    int problem, algo;

    printf("Select Problem Type\n");
    printf("1. Classification\n2. Regression\n3. Clustering\n4. Computer Vision\n");
    printf("Enter choice: ");
    scanf("%d", &problem);

    switch (problem)
    {
        case 1:
            printf("Classification Algorithms\n");
            printf("1. Logistic Regression\n2. Decision Tree\n3. KNN\n");
            printf("Enter choice: ");
            scanf("%d", &algo);
            switch (algo)
            {
                case 1:
                    printf("Selected: Logistic Regression\n");
                    break;
                case 2:
                    printf("Selected: Decision Tree\n");
                    break;
                case 3:
                    printf("Selected: KNN\n");
                    break;
                default:
                    printf("Invalid algorithm\n");
            }
            break;

        case 2:
            printf("Regression Algorithms\n");
            printf("1. Linear Regression\n2. Polynomial Regression\n3. SVR\n");
            printf("Enter choice: ");
            scanf("%d", &algo);
            switch (algo)
            {
                case 1:
                    printf("Selected: Linear Regression\n");
                    break;
                case 2:
                    printf("Selected: Polynomial Regression\n");
                    break;
                case 3:
                    printf("Selected: SVR\n");
                    break;
                default:
                    printf("Invalid algorithm\n");
            }
            break;

        case 3:
            printf("Clustering Algorithms\n");
            printf("1. K-Means\n2. Hierarchical Clustering\n3. DBSCAN\n");
            printf("Enter choice: ");
            scanf("%d", &algo);
            switch (algo)
            {
                case 1:
                    printf("Selected: K-Means\n");
                    break;
                case 2:
                    printf("Selected: Hierarchical Clustering\n");
                    break;
                case 3:
                    printf("Selected: DBSCAN\n");
                    break;
                default:
                    printf("Invalid algorithm\n");
            }
            break;

        case 4:
            printf("Computer Vision Algorithms\n");
            printf("1. CNN\n2. YOLO\n3. R-CNN\n");
            printf("Enter choice: ");
            scanf("%d", &algo);
            switch (algo)
            {
                case 1:
                    printf("Selected: CNN\n");
                    break;
                case 2:
                    printf("Selected: YOLO\n");
                    break;
                case 3:
                    printf("Selected: R-CNN\n");
                    break;
                default:
                    printf("Invalid algorithm\n");
            }
            break;

        default:
            printf("Invalid problem type\n");
    }

    return 0;
}
