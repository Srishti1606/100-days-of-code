Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>

int main() {
    int year;

    // Prompt user for input
    printf("Enter a year: ");

    // Validate input
    if (scanf("%d", &year) != 1) {
        printf("Invalid input. Please enter a valid integer year.\n");
        return 1; // Exit with error
    }

    // Handle non-positive years (optional, depending on requirement)
    if (year <= 0) {
        printf("Year must be a positive integer.\n");
        return 1;
    }

    // Leap year check using conditional statements
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
