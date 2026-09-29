#include <stdio.h>

int main()
{
    float prog, math, ai, attendance, average;

    printf("Enter Programming marks: ");
    scanf("%f", &prog);
    printf("Enter Mathematics marks: ");
    scanf("%f", &math);
    printf("Enter AI marks: ");
    scanf("%f", &ai);
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    /* Each condition is checked only if the previous one was satisfied */
    if (prog >= 50)
    {
        if (math >= 50)
        {
            if (ai >= 50)
            {
                if (attendance >= 75)
                {
                    /* Student is eligible */
                    average = (prog + math + ai) / 3;
                    printf("Student is Eligible\n");
                    printf("Average = %.2f\n", average);

                    if (average >= 80)
                    {
                        printf("Performance: Excellent\n");
                    }
                    else
                    {
                        if (average >= 70)
                        {
                            printf("Performance: Very Good\n");
                        }
                        else
                        {
                            if (average >= 60)
                            {
                                printf("Performance: Good\n");
                            }
                            else
                            {
                                if (average >= 50)
                                {
                                    printf("Performance: Satisfactory\n");
                                }
                                else
                                {
                                    printf("Performance: Poor\n");
                                }
                            }
                        }
                    }
                }
                else
                {
                    printf("Student is Not Eligible\n");
                }
            }
            else
            {
                printf("Student is Not Eligible\n");
            }
        }
        else
        {
            printf("Student is Not Eligible\n");
        }
    }
    else
    {
        printf("Student is Not Eligible\n");
    }

    return 0;
}
