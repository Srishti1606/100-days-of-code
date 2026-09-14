Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // Number of rows in the upper half (including the middle row)

    // Upper half of the pattern
    for (i = 1; i <= n; i++) {
        // Print stars: formula = 2*i - 1
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the pattern
    for (i = n - 1; i >= 1; i--) {
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
