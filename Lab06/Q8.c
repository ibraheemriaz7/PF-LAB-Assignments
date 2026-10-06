#include <stdio.h>


int main(){
    int arr[8] = {0,0,0,0,0,0,0,0};
    int max = 0;
    int min = 99999999;
    int search,found ;
    int index,append_value;
    int delete_index;
    for(int i = 0 ; i<8 ; i++){
        printf("Enter Integer Value For Array:\n");
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i < 8 ; i++){
        printf("%d\n",arr[i]);
    }

    for(int i = 0; i < 8 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max value is %d Min vaue is %d\n", max,min);
    printf("Enter Number To Search: \n");
    scanf("%d",&search);
    found = 0;
    for(int i = 0 ; i < 8 ; i++){
        if (search == arr[i]){
            printf("The value is on index %d\n",i);
            found = 1;
        }
        }
        if (found == 0){
            printf("Value not found");
        }
        printf("Enter index to append array:\n");
        scanf("%d", &index);
        printf("Enter number");
        scanf("%d", &append_value);
        arr[index] = append_value;
        printf("Enter index to delete");
        scanf("%d", &delete_index);
        for (int i = delete_index; i < 8 - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[7] = 0;
        printf("Array after deletion:\n");
        for (int i = 0; i < 8; i++) {
            printf("%d\n", arr[i]);
        }
    }