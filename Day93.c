Find and print the student with the highest marks.
  #include <stdio.h>

#define STUDENT_COUNT 5

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main(void) {
    struct Student students[STUDENT_COUNT];
    int highest_index = 0;

    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("Enter details for student %d\n", i + 1);

        printf("Name: ");
        scanf(" %99[^\n]", students[i].name);

        printf("Roll number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        if (students[i].marks > students[highest_index].marks) {
            highest_index = i;
        }
    }

    printf("\nStudent with the highest marks:\n");
    printf("Name: %s\n", students[highest_index].name);
    printf("Roll number: %d\n", students[highest_index].roll_no);
    printf("Marks: %.2f\n", students[highest_index].marks);

    return 0;
}
