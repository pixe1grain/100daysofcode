#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter the characters : ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Count = %d", count);

    return 0;
}