Store details of 5 students in an array of structures and print all.
#include <stdio.h>

#define STUDENT_COUNT 5

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student students[STUDENT_COUNT];

    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("Enter details for student %d\n", i + 1);

        printf("Name: ");
        scanf(" %99[^\n]", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\nStudent details\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll number: %d\n", students[i].roll_no);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
