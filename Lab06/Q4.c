#include <stdio.h>

int main() {
    int code, temp, reversedNum = 0, remainder;

    printf("Enter library code: \n");
    scanf("%d", &code);

    temp = code;

    while (temp > 0) {
        remainder = temp % 10;                    
        reversedNum = (reversedNum * 10) + remainder;
        temp /= 10;                               
    }

    if (code == reversedNum){
        printf("This is a Palindrome, valid library code\n");
    }
    else{
        printf("This is not a Palindrome, invalid library code\n");
    }

    return 0;
}