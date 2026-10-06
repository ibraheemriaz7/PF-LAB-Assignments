#include <stdio.h>
int main (){
    int a1,a2,absent,present,i;
    absent = 0;
    present = 0;
    for(i=1; i<=15; i++){
        printf("ENTER 0 FOR ABSENT AND 1 FOR PRESENT\n");
        scanf("%d",&a1);
        if(a1==0){
            absent = absent + 1;
        }
        else{
            if(a1==1){
                present = present + 1;
            }
        }
        printf("ENTER 0 FOR ABSENT AND 1 FOR PRESENT\n");
        scanf("%d",&a2);
        if(a2==0){
            absent = absent + 1;
        }
        else{
            if(a2==1){
                present = present + 1;
        }
    }
    }
    printf("The number of students that are absent is %d\n",absent);
    printf("The number of students that are present is %d\n",present);
}