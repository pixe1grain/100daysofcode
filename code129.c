#include <stdio.h>

int main() {
    FILE *fp;
    int num, sum = 0, count = 0;
    float avg;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: numbers.txt not found!");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    if (count > 0)
        avg = (float)sum / count;
    else
        avg = 0;

    printf("Sum = %d\nAverage = %.2f", sum, avg);

    fclose(fp);
    return 0;
}