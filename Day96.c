Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[100];
    int employee_id;
    float salary;
    struct Date joining_date;
};

int main(void) {
    struct Employee employee;

    printf("Enter employee name: ");
    scanf(" %99[^\n]", employee.name);

    printf("Enter employee ID: ");
    scanf("%d", &employee.employee_id);

    printf("Enter salary: ");
    scanf("%f", &employee.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d",
          &employee.joining_date.day,
          &employee.joining_date.month,
          &employee.joining_date.year);

    printf("\nEmployee details\n");
    printf("Name: %s\n", employee.name);
    printf("Employee ID: %d\n", employee.employee_id);
    printf("Salary: %.2f\n", employee.salary);
    printf("Joining date: %02d/%02d/%04d\n",
           employee.joining_date.day,
           employee.joining_date.month,
           employee.joining_date.year);

    return 0;
}
