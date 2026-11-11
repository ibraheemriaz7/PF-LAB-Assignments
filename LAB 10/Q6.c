#include <stdio.h>
#include <string.h>

int main() {
    char user[50];
    char pass[50];
    
    printf("Enter Username:\n");
    scanf("%s", user);
    
    printf("Enter Password:\n");
    scanf("%s", pass);
    
    FILE *fptr = fopen("credentials.txt", "r");
    if (fptr == NULL) {
        printf("Error: File Not Found!\n");
        return 1;
    }
    
    char fileUser[50];
    char filePass[50];
    fscanf(fptr, "%s %s", fileUser, filePass);
    fclose(fptr);
    
    if (strcmp(user, fileUser) == 0 && strcmp(pass, filePass) == 0) {
        printf("Access Granted!");
    } else {
        printf("Access Denied!");
    }
    
    return 0;
}