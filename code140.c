#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE };

struct Person {
    enum Gender gender;
};

int main() {
    struct Person p;
    char input[10];

    printf("Enter gender (MALE/FEMALE): ");
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else
        p.gender = FEMALE;

    if (p.gender == MALE)
        printf("Male\n");
    else
        printf("Female\n");

    return 0;
}