#include <stdio.h>

int main() {
    char str[200];
    int start = 0, end = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[end] != '\0') {
        if (str[end] == ' ' || str[end] == '\n') {
            for (int i = end - 1; i >= start; i--)
                printf("%c", i >= start ? str[i] : '\0');
            if (str[end] == ' ')
                printf(" ");
            start = end + 1;
        }
        end++;
    }

    return 0;
}