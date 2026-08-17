Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int num;

    // Prompt user for input
    printf("Enter an integer: ");

    // Validate input
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit with error code
    }

    // Check even or odd using if–else
    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    return 0; // Successful execution
}
