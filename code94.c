#include <stdio.h>

int main() {
    char str[200], longest[200];
    int maxLen = 0, currentLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                int start = i - currentLen;
                int k = 0;
                while (k < currentLen) {
                    longest[k] = str[start + k];
                    k++;
                }
                longest[k] = '\0';
            }
            currentLen = 0;
        }
    }

    printf("%s", longest);

    return 0;
}