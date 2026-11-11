#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("marks.txt", "r");
    
    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }

    int rollNo;
    char name[50];
    float marks;

    printf("%-10s %-20s %-10s\n", "RollNo", "Name", "Marks");
    printf("----------------------------------------\n");

    while (fscanf(fptr, "%d %s %f", &rollNo, name, &marks) != EOF) {
        printf("%-10d %-20s %-10.2f\n", rollNo, name, marks);
    }

    fclose(fptr);
    return 0;
}