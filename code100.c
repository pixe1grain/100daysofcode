#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = i; str[j] != '\0'; j++) {
            for (int k = i; k <= j; k++)
                printf("%c", str[k]);

            if (!(str[i+1] == '\0' && str[j+1] == '\0'))
                printf(",");
        }
    }

    return 0;
}