Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

typedef struct {
    char name[NAME_LENGTH];
    int roll_number;
    float marks;
} Student;

int main(void) {
    Student students[MAX_STUDENTS];
    int count;

    printf("Enter number of students (1-%d): ", MAX_STUDENTS);
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_STUDENTS) {
        printf("Invalid number of students.\n");
        return 1;
    }

    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        perror("Could not open students.txt for writing");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        if (scanf("%49s %d %f", students[i].name,
                  &students[i].roll_number, &students[i].marks) != 3) {
            fclose(file);
            return 1;
        }

        fprintf(file, "%s %d %.2f\n", students[i].name,
                students[i].roll_number, students[i].marks);
    }

    fclose(file);

    file = fopen("students.txt", "r");
    if (file == NULL) {
        perror("Could not open students.txt for reading");
        return 1;
    }

    printf("\nStudent records:\n");
    Student student;
    while (fscanf(file, "%49s %d %f", student.name,
                  &student.roll_number, &student.marks) == 3) {
        printf("Name: %s, Roll number: %d, Marks: %.2f\n",
               student.name, student.roll_number, student.marks);
    }

    if (ferror(file)) {
        perror("Error reading students.txt");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}
