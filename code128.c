#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("output.txt", "r");

    if (fp == NULL) {
        printf("Error: output.txt not found!");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\nConsonants: %d", vowels, consonants);

    fclose(fp);
    return 0;
}