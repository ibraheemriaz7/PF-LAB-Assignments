#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Returns the category of a character using ASCII ranges
// 1 = uppercase, 2 = lowercase, 3 = digit, 4 = special character
int getCategory(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return 1;
    } else if (ch >= 'a' && ch <= 'z') {
        return 2;
    } else if (ch >= '0' && ch <= '9') {
        return 3;
    } else {
        return 4;
    }
}

int main() {
    int n, i, j;
    char **passwords;
    char *pattern;
    float *similarity;
    char temp[100];

    printf("Enter the number of participants: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of participants must be greater than 0.\n");
        return 1;
    }

    // Memory for the array of passwords and their scores
    passwords = (char **)malloc(n * sizeof(char *));
    similarity = (float *)malloc(n * sizeof(float));
    if (passwords == NULL || similarity == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Read the pattern string
    printf("Enter the password pattern (no spaces): ");
    scanf("%99s", temp);
    pattern = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    if (pattern == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    strcpy(pattern, temp);
    int patternLen = strlen(pattern);

    // Read each participant's password and calculate similarity
    for (i = 0; i < n; i++) {
        printf("Enter password attempt of participant %d: ", i + 1);
        scanf("%99s", temp);

        passwords[i] = (char *)malloc((strlen(temp) + 1) * sizeof(char));
        if (passwords[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        strcpy(passwords[i], temp);

        int passLen = strlen(passwords[i]);
        int shorter = (patternLen < passLen) ? patternLen : passLen;
        int longer = (patternLen > passLen) ? patternLen : passLen;
        int matches = 0;

        // Compare character category at each position
        for (j = 0; j < shorter; j++) {
            if (getCategory(pattern[j]) == getCategory(passwords[i][j])) {
                matches++;
            }
        }

        // Similarity = matching positions out of the longer length
        similarity[i] = ((float)matches / longer) * 100;
    }

    // Display each password with its score and find the best one
    int best = 0;
    printf("\nResults:\n");
    for (i = 0; i < n; i++) {
        printf("Participant %d: %s -> %.2f%%\n", i + 1, passwords[i], similarity[i]);
        if (similarity[i] > similarity[best]) {
            best = i;
        }
    }

    printf("\nHighest similarity: participant %d with password %s (%.2f%%)\n",
           best + 1, passwords[best], similarity[best]);

    // Release all memory
    for (i = 0; i < n; i++) {
        free(passwords[i]);
        passwords[i] = NULL;
    }
    free(passwords);
    free(similarity);
    free(pattern);
    passwords = NULL;
    similarity = NULL;
    pattern = NULL;

    return 0;
}
