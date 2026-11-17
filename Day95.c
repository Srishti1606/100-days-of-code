Return a structure containing top student's details from a function.
  #include <stdio.h>

#define STUDENT_COUNT 5

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

struct Student findTopStudent(struct Student students[], int count) {
    int top_index = 0;

    for (int i = 1; i < count; i++) {
        if (students[i].marks > students[top_index].marks) {
            top_index = i;
        }
    }

    return students[top_index];
}

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

    struct Student top = findTopStudent(students, STUDENT_COUNT);

    printf("\nTop student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll number: %d\n", top.roll_no);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}
  
