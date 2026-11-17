Write a function that accepts a structure as parameter and prints its members.
  #include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

void printStudent(struct Student student) {
    printf("Name: %s\n", student.name);
    printf("Roll number: %d\n", student.roll_no);
    printf("Marks: %.2f\n", student.marks);
}

int main(void) {
    struct Student student;

    printf("Enter name: ");
    scanf(" %99[^\n]", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.roll_no);

    printf("Enter marks: ");
    scanf("%f", &student.marks);

    printf("\nStudent details:\n");
    printStudent(student);

    return 0;
}
