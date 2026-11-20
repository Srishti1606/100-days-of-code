#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main(void) {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Name, Roll, Marks: \n");
    if (scanf("%49s %d %d", s->name, &s->roll_no, &s->marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s->name, s->roll_no, s->marks);
    }

    free(s);
    return 0;
}