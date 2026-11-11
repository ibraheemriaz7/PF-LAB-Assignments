#include <stdio.h>
#include <string.h>

int main() {
    char names[10][50];
    for(int i = 0 ; i<10 ; i++){
        printf("Enter Name\n");
        scanf("%s",names[i]);
    }
    char temp[100];
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9-i ; j++){
            if(strcmp(names[j],names[j+1])>0){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("\nSorted Names:\n")
    for(int i = 0 ; i<10 ; i++){
        printf("%d) %s\n",i+1,names[i]);
    }
}