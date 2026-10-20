#include <stdio.h>

int main() {
    char secret_messages[3][100];
    int spaces[3], words[3];
    int c;

    printf("Enter 3 messages (only A-Z and spaces are kept):\n");

    for (int i = 0; i < 3; i++) {
        secret_messages[i][0] = '\0';
        printf("Message %d: ", i + 1);

        // Validation scanset: stops at the first invalid character
        scanf("%99[A-Z ]", secret_messages[i]);

        // Throw away the rest of the line (invalid part + newline)
        while ((c = getchar()) != '\n' && c != EOF);
    }

    // Nested loops: outer = message row, inner = characters of the string
    for (int i = 0; i < 3; i++) {
        spaces[i] = 0;
        words[i] = 0;
        for (int j = 0; secret_messages[i][j] != '\0'; j++) {
            if (secret_messages[i][j] == ' ') {
                spaces[i]++;
            } else if (j == 0 || secret_messages[i][j - 1] == ' ') {
                words[i]++;   // a word starts here
            }
        }
    }

    printf("\n--- Filtered Messages ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Message %d: \"%s\"  | Spaces: %d | Words: %d\n",
               i + 1, secret_messages[i], spaces[i], words[i]);
    }
    return 0;
}
