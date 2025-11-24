#include <stdio.h>
#include <string.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    char input[20];
    enum Traffic signal;

    printf("Enter traffic signal (RED / YELLOW / GREEN): ");
    scanf("%s", input);

    if(strcmp(input, "RED") == 0)
        signal = RED;
    else if(strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else
        signal = GREEN;

    if(signal == RED)
        printf("Stop");
    else if(signal == YELLOW)
        printf("Wait");
    else
        printf("Go");

    return 0;
}