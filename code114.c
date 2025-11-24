#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        int freq[256] = {0};
        int len = 0;
        for (int j = i; j < n; j++) {
            if (freq[(unsigned char)s[j]]) break;
            freq[(unsigned char)s[j]] = 1;
            len++;
        }
        if (len > maxLen) maxLen = len;
    }

    printf("%d", maxLen);
    return 0;
}