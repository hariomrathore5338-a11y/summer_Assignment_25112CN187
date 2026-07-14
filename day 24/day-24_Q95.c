#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int maxLen = 0;

    printf("Enter a sentence: ");
    gets(str);

    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }
    word[j] = '\0';
    if (strlen(word) > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
