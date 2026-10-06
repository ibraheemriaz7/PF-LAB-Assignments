#include <stdio.h>
int main(){
    int ticketNum, temp, reversedNum = 0, remainder;

    printf("Enter ticket number: ");
    scanf("%d", &ticketNum);

    temp = ticketNum;

    while (temp > 0) {
        remainder = temp % 10;                    
        reversedNum = (reversedNum * 10) + remainder;
        temp /= 10;                               
    }

    printf("Reversed Ticket Number: %d\n", reversedNum);

    return 0;
}