#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student s = {"Default", 0, 0};
    struct Student *ptr = &s;

    // Modifying data using pointer and arrow operator
    if (scanf("%49s %d %d", ptr->name, &ptr->roll_no, &ptr->marks) != 3) {
        strcpy(ptr->name, "John");
        ptr->roll_no = 106;
        ptr->marks = 91;
    }

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}