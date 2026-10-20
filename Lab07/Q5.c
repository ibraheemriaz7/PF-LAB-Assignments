#include <stdio.h>

int main() {
    char sentences[3][100];

    printf("Enter a paragraph with 3 sentences separated by semicolons:\n");

    for (int i = 0; i < 3; i++) {
        sentences[i][0] = '\0';
        // Negated scanset reads up to ';' (or end of line for the last sentence),
        // %*c discards the delimiter
        scanf("%99[^;\n]%*c", sentences[i]);
    }

    // Nested loops: outer = sentence row, inner = characters
    for (int i = 0; i < 3; i++) {
        int vowels = 0;
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            char ch = sentences[i][j];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            }
        }
        printf("Sentence %d:%s\n", i + 1, sentences[i]);
        printf("Vowels: %d\n\n", vowels);
    }
    return 0;
}
