#include <stdio.h>

int main() {
    char str[200];
    int lastSpace = -1;

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    if (str[0] != ' ' && str[0] != '\n')
        if (lastSpace > 0)
            printf("%c.", str[0]);

    for (int i = 1; i < lastSpace; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n')
            printf("%c.", str[i+1]);
    }

    for (int i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
        printf("%c", str[i]);

    return 0;
}