#include <stdio.h>

long long get_catalan(int n) {
    if (n == 0) {
        return 1;
    }

    long long catalan = 1;

    for (int i = 1; i <= n; i++) {
        catalan = catalan * 2 * (2 * i - 1) / (i + 1);
    }

    return catalan;
}

int main() {
    int n;

    printf("Enter an integer n: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    long long result = get_catalan(n);
    printf("The %d-th Catalan number is: %lld\n", n, result);

    return 0;
}