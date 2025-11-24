#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    printf("Details of 5 students (Name, Roll, Marks)\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Name: ");
        fflush(stdin);
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        getchar();
    }

    printf("\n--- Student Details ---\n");
    printf("Name\t\tRoll\tMarks\n");

    for (i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}