#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if (freq[index] == 2) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("No repeating character");
    return 0;
}