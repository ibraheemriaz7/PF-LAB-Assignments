#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy, confidence, modelScore;
    int datasetSize, role, status, permission;

    /* Permission values (bitwise flags) */
    int view = 1, train = 2, test = 4, deploy = 8;

    printf("Enter model accuracy (%%): ");
    scanf("%f", &accuracy);
    printf("Enter confidence score (%%): ");
    scanf("%f", &confidence);
    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);
    printf("Enter user role (1 = Admin, 2 = Developer, 3 = Researcher): ");
    scanf("%d", &role);
    printf("Enter model status (1 = Ready, 2 = Testing, 3 = Training): ");
    scanf("%d", &status);

    /* Model score: parentheses are needed because / has higher precedence than + */
    modelScore = (accuracy + confidence) / 2;

    printf("\n===== MODEL INFORMATION =====\n");

    /* Nested switch-case: role decides the permissions, status is displayed inside */
    /* (Assumed permissions: Admin = all, Developer = View+Train+Test, Researcher = View+Test) */
    switch (role)
    {
        case 1:
            printf("User Role: Admin\n");
            permission = view | train | test | deploy;
            switch (status)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Model Status: Invalid\n");
            }
            break;

        case 2:
            printf("User Role: Developer\n");
            permission = view | train | test;
            switch (status)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Model Status: Invalid\n");
            }
            break;

        case 3:
            printf("User Role: Researcher\n");
            permission = view | test;
            switch (status)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Model Status: Invalid\n");
            }
            break;

        default:
            printf("User Role: Invalid\n");
            permission = 0;
    }

    printf("Accuracy: %.2f%%\n", accuracy);
    printf("Confidence: %.2f%%\n", confidence);
    printf("Dataset Size: %d\n", datasetSize);
    printf("Model Score: %.2f\n", modelScore);
    printf("Model Score (floor): %.0f, (ceil): %.0f\n", floor(modelScore), ceil(modelScore));

    /* sizeof() */
    printf("Size of accuracy variable: %d bytes\n", (int)sizeof(accuracy));
    printf("Size of dataset size variable: %d bytes\n", (int)sizeof(datasetSize));

    /* Ternary operator + bitwise AND: deployment permission */
    printf("Deployment Permission: ");
    (permission & deploy) ? printf("Yes\n") : printf("No\n");

    /* Deployment readiness: nested if-else with logical/relational operators */
    printf("\n===== DEPLOYMENT DECISION =====\n");
    if (accuracy >= 80)
    {
        if (confidence >= 75)
        {
            if (datasetSize >= 1000)
            {
                if (status == 1)
                {
                    if (permission & deploy)
                    {
                        printf("Model is DEPLOYMENT READY\n");
                    }
                    else
                    {
                        printf("Not ready: user does not have deployment permission\n");
                    }
                }
                else
                {
                    printf("Not ready: model status is not Ready\n");
                }
            }
            else
            {
                printf("Not ready: dataset size is below 1000\n");
            }
        }
        else
        {
            printf("Not ready: confidence is below 75%%\n");
        }
    }
    else
    {
        printf("Not ready: accuracy is below 80%%\n");
    }

    return 0;
}
