#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL) {
        printf("Error: input.txt not found!");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, out);
    }

    printf("Text converted to uppercase and written to output.txt");

    fclose(in);
    fclose(out);
    return 0;
}