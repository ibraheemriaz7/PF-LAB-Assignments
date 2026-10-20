#include <stdio.h>

int main() {
    char student_names[3][50];
    int marks[3][3];
    int sum = 0;
    
    for(int i = 0; i < 3; i++) {
        printf("Enter Name:\n");
        scanf(" %49[^\n]", student_names[i]);
    }
    
    for(int i = 0; i < 3; i++) {
        printf("\nEnter marks for %s:\n", student_names[i]);
        
        for(int j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("Average marks for students:\n")
    for(int i = 0; i < 3; i++) {
        int sum = 0;
        for(int j = 0; j < 3; j++) {
            sum += marks[i][j];
        }
        float average = sum / 3.0;
        printf("Average for %s: %.2f\n", student_names[i], average);
    }
    return 0;
}
