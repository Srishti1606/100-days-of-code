Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>

int main() {
    int num;

    // Prompt user for input
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {  
        // Input validation
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Nested if–else logic
    if (num >= 0) {  // Outer if: number is non-negative
        if (num == 0) {
            printf("The number is ZERO.\n");
        } else {
            printf("The number is POSITIVE.\n");
        }
    } else {  // Outer else: number is negative
        printf("The number is NEGATIVE.\n");
    }

    return 0;
}
