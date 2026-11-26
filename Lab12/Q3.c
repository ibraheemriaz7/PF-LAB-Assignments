#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Returns 1 if the string has a digit, otherwise 0
int containsDigit(char *str) {
    while (*str != '\0') {
        if (*str >= '0' && *str <= '9') {
            return 1;
        }
        str++;
    }
    return 0;
}

int main() {
    int n, i;
    char **usernames;       // array of string pointers
    char temp[100];
    int found = 0;

    printf("Enter the number of usernames: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of usernames must be greater than 0.\n");
        return 1;
    }

    // Allocate the array of string pointers
    usernames = (char **)malloc(n * sizeof(char *));
    if (usernames == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate memory for each username
    for (i = 0; i < n; i++) {
        printf("Enter username %d: ", i + 1);
        scanf("%99s", temp);

        usernames[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        if (usernames[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(usernames[i], temp);
    }

    // Remove usernames that contain a digit (free them and set to NULL)
    for (i = 0; i < n; i++) {
        if (containsDigit(usernames[i])) {
            free(usernames[i]);
            usernames[i] = NULL;
        }
    }

    // Display only the usernames that are alphabetic
    printf("\nValid usernames (no digits):\n");
    for (i = 0; i < n; i++) {
        if (usernames[i] != NULL) {
            printf("%s\n", usernames[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("No valid usernames.\n");
    }

    // Free the remaining usernames, then the array
    for (i = 0; i < n; i++) {
        if (usernames[i] != NULL) {
            free(usernames[i]);
            usernames[i] = NULL;
        }
    }
    free(usernames);
    usernames = NULL;

    return 0;
}
