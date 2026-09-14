Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
#include <stdio.h>

int main() {
    int i;
    int count = 14; // Number of stars to print

    // Validate count (must be positive)
    if (count <= 0) {
        printf("Nothing to print.\n");
        return 0;
    }

    // Loop to print stars with spaces
    for (i = 0; i < count; i++) {
        printf("*");
        if (i < count - 1) {
            printf(" "); // Add space between stars
        }
    }

    printf("\n"); // Move to next line after printing
    return 0;
}
