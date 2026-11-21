#include <stdio.h>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumDigits(n / 10);
}

int calculateChecksum(int transactionID) {
    if (transactionID < 10) {
        return transactionID;
    }
    return calculateChecksum(sumDigits(transactionID));
}

int main() {
    int id;
    printf("Enter transaction ID: ");
    scanf("%d", &id);
    printf("Checksum: %d\n", calculateChecksum(id));
    return 0;
}
