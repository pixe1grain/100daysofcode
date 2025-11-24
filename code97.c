#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a name: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ' && str[0] != '\n')
        printf("%c.", str[0]);

    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\n')
            printf("%c.", str[i+1]);
    }

    return 0;
}