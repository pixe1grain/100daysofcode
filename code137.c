#include <stdio.h>
#include <string.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    char input[20];
    enum Role role;

    printf("Enter role (ADMIN/USER/GUEST): ");
    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else
        role = GUEST;

    if (role == ADMIN)
        printf("Welcome Admin!\n");
    else if (role == USER)
        printf("Welcome User!\n");
    else
        printf("Welcome Guest!\n");

    return 0;
}