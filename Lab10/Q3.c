#include <stdio.h>
#include <string.h>

int main() {
    char array[100];
    printf("Enter email address:\n");
    char email[100];
    scanf("%s",email);
    char *result = strchr(email,'@');
    if(result == NULL){
        printf("Invalid email");
        return -1;
    }
    else{
        strcpy(array,result+1);
    }
    printf("\n%s",array);
}