#include <stdio.h>
#include <string.h>

int main() {
    printf("Enter customer name:\n"); char cName[100];
    scanf("%s",cName);
    printf("Enter account number:\n"); int accountNum;
    scanf("%d",&accountNum);
    printf("Enter withdrawl amount:\n"); float amountToWith;
    scanf("%f",&amountToWith);
    FILE *file;
    file = fopen("data.txt","a");
    if(file == NULL){
        printf("Cannot access file !!!!!");
        return -1;
    }
    fprintf(file,"Customer name: %s\nAccount number: %d\nWithdraw amount: %.2f\n",cName,accountNum,amountToWith);
    printf("Data succesfully entered");
    fclose(file);
}