#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, j = 0, max = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char word[100];
        j = 0;

        // Extract a word
        while (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j++] = str[i++];
        }
        word[j] = '\0';

        // Check if it is the longest word
        if (j > max) {
            max = j;
            strcpy(longest, word);
        }

        if (str[i] == ' ')
            i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}