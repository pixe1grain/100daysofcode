#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0'; i++)
        freq[str1[i] - 'a']++;

    for (i = 0; str2[i] != '\0'; i++)
        freq[str2[i] - 'a']--;

    for (i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}