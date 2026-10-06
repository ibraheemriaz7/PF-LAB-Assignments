#include <stdio.h>

int main() {
    char word[100];
    char reversed[100];
    int length = 0;
    int isPalindrome = 1;
    int vowels = 0, consonants = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    printf("\n1. Original Word: %s\n", word);

    while (word[length] != '\0') {
        length++;
    }
    printf("2. Length: %d\n", length);

    for (int i = 0; i < length; i++) {
        reversed[i] = word[length - 1 - i];
    }
    reversed[length] = '\0';
    printf("3. Reversed Word: %s\n", reversed);

    for (int i = 0; i < length; i++) {
        char char1 = word[i];
        char char2 = reversed[i];

        if (char1 >= 'A' && char1 <= 'Z') {
            char1 = char1 + 32;
        }
        if (char2 >= 'A' && char2 <= 'Z') {
            char2 = char2 + 32;
        }

        if (char1 != char2) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("4. Palindrome: Yes\n");
    } else {
        printf("4. Palindrome: No\n");
    }

    for (int i = 0; i < length; i++) {
        char ch = word[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    printf("5. Vowels Count: %d\n", vowels);
    printf("6. Consonants Count: %d\n", consonants);

    return 0;
}