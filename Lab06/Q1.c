#include <stdio.h>

int main() {
    int pin, temp, sum = 0, digit;

    do {
        printf("Enter a 4-digit PIN : ");
        scanf("%d", &pin);

        if (pin < 1000 || pin > 9999) {
            printf("Invalid! The PIN must be of 4 digits.\n\n");
        }
    } while (pin < 1000 || pin > 9999);

    temp = pin;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    if (sum > 10) {
        printf("Pin is strong\n");
    } else {
        printf("Pin is weak\n");
    }

    return 0;
}
