#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, i;
    char **feedback;        // array of pointers, one pointer for each feedback
    char temp[500];         // temporary space to read one feedback
    int totalChars = 0;

    printf("Enter the number of feedback entries: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of entries must be greater than 0.\n");
        return 1;
    }

    // Start with space for only 1 feedback pointer, it will grow with realloc
    feedback = (char **)malloc(1 * sizeof(char *));
    if (feedback == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        // Grow the pointer array by one for every new feedback
        if (i > 0) {
            char **bigger = (char **)realloc(feedback, (i + 1) * sizeof(char *));
            if (bigger == NULL) {
                printf("Memory reallocation failed!\n");
                return 1;
            }
            feedback = bigger;
        }

        printf("Enter feedback %d: ", i + 1);
        scanf(" %499[^\n]", temp);

        // Each feedback string is stored separately using malloc
        feedback[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        if (feedback[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(feedback[i], temp);
    }

    // Count total characters using pointer traversal
    for (i = 0; i < n; i++) {
        char *p = feedback[i];
        while (*p != '\0') {
            totalChars++;
            p++;
        }
    }

    // Find the longest feedback using pointer traversal
    int longest = 0, maxLen = 0;
    for (i = 0; i < n; i++) {
        int len = 0;
        char *p = feedback[i];
        while (*p != '\0') {
            len++;
            p++;
        }
        if (len > maxLen) {
            maxLen = len;
            longest = i;
        }
    }

    printf("\nAll feedback entries:\n");
    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, feedback[i]);
    }

    printf("\nTotal number of characters: %d\n", totalChars);
    printf("Longest feedback (%d characters): %s\n", maxLen, feedback[longest]);

    // Free every feedback string, then the array of pointers
    for (i = 0; i < n; i++) {
        free(feedback[i]);
        feedback[i] = NULL;
    }
    free(feedback);
    feedback = NULL;

    return 0;
}
