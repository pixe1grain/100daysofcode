#include <stdio.h>

int main() {
    char date[20];
    char day[3], year[5];

    printf("Enter date : ");
    scanf("%s", date);

    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    printf("%s-Apr-%s", day, year);

    return 0;
}