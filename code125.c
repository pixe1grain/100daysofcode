#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("Enter text to append: ");
    getchar(); 
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("File updated successfully with appended text.");
    return 0;
}