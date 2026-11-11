#include <stdio.h>
#include <string.h>

int main() {
    char review[500];

    printf("Enter customer feedback: ");
    if (fgets(review, sizeof(review), stdin) != NULL) {
        review[strcspn(review, "\n")] = 0;
    }

    int length = strlen(review);
    printf("\n--- Sentiment Analysis Report ---\n");
    printf("Total characters: %d\n", length);

    char *goodPtr = strstr(review, "good");
    char *badPtr = strstr(review, "bad");

    printf("Keyword Detection:\n");
    if (goodPtr != NULL) {
        printf("- Found emotional keyword: \"good\"\n");
    }
    if (badPtr != NULL) {
        printf("- Found emotional keyword: \"bad\"\n");
    }
    if (goodPtr == NULL && badPtr == NULL) {
        printf("- No target emotional keywords detected.\n");
    }

    if (badPtr != NULL) {
        char temp[500];
        
        strcpy(temp, badPtr + 3);
        strcpy(badPtr, "not good");
        strcat(review, temp);

        printf("\nSanitized Review (Updated):\n%s\n", review);
    } else {
        printf("\nSanitization: Not required (no 'bad' phrasing found).\n");
    }

    return 0;
}