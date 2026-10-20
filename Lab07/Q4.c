#include <stdio.h>

int main() {
    char word_grid[3][100];
    char maxWord[100] = "";
    int maxLen = 0, maxRow = -1, maxCol = -1;

    printf("Enter 3 lines, each with 3 space-separated words:\n");
    for (int i = 0; i < 3; i++) {
        printf("Line %d: ", i + 1);
        scanf(" %99[^\n]", word_grid[i]);
    }

    // Nested loops: outer = row, inner = characters of that row
    for (int i = 0; i < 3; i++) {
        int len = 0, start = 0, j = 0;   // j = column (word) index

        for (int k = 0; ; k++) {
            char ch = word_grid[i][k];

            if (ch != ' ' && ch != '\0') {
                if (len == 0) {
                    start = k;           // word begins
                }
                len++;
            } else {
                if (len > 0) {           // a word just ended
                    if (len > maxLen) {
                        maxLen = len;
                        maxRow = i;
                        maxCol = j;
                        for (int m = 0; m < len; m++) {
                            maxWord[m] = word_grid[i][start + m];
                        }
                        maxWord[len] = '\0';
                    }
                    j++;
                    len = 0;
                }
            }

            if (ch == '\0') {
                break;
            }
        }
    }

    printf("\nLongest word: %s\n", maxWord);
    printf("Length: %d\n", maxLen);
    printf("Row Index (i): %d, Column Index (j): %d\n", maxRow, maxCol);
    return 0;
}
