#include <stdio.h>

int main() {
    char logs[3][30];
    int total = 0;

    printf("Enter 3 CSV log entries (username,status,timestamp):\n");

    for (int entry = 0; entry < 3; entry++) {
        printf("Entry %d: ", entry + 1);

        // Single scanf: negated scanset %[^,] splits the entry at the commas
        scanf(" %29[^,],%29[^,],%29[^\n]", logs[0], logs[1], logs[2]);

        // Nested loops: go character-by-character through all stored strings
        for (int i = 0; i < 3; i++) {
            for (int j = 0; logs[i][j] != '\0'; j++) {
                if (logs[i][j] >= 'A' && logs[i][j] <= 'Z') {
                    total++;
                }
            }
        }
    }

    printf("Total uppercase letters: %d\n", total);
    return 0;
}
