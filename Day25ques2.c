Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows in the pattern

    // Loop for each row
    for (i = 0; i < rows; i++) {
        // Print stars for the current row
        for (j = rows; j > i; j--) {
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
