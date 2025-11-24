#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    int n;
    struct Student s[100];
    FILE *fp;

    printf("Enter number of students: ");
    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    for(int i = 0; i < n; i++) {
        printf("Enter Name, Roll, Marks for student %d:\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        fprintf(fp, "%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    printf("\nStored Records:\n");

    while(fscanf(fp, "%s %d %f", s[0].name, &s[0].roll, &s[0].marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               s[0].name, s[0].roll, s[0].marks);
    }

    fclose(fp);

    return 0;
}