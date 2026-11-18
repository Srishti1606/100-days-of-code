#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main(void) {
    struct Employee e1 = {101, "Amit", 65000.0f};
    struct Employee e2;
    FILE *fp;

    fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Read from binary file:\n");
    printf("ID: %d | Name: %s | Salary: %.2f\n", e2.id, e2.name, e2.salary);

    return 0;
}