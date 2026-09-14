Write a program to print the following pattern:
5
45
345
2345
12345
#include <stdio.h>

int main() {
    int n = 5; // Maximum number in the pattern

    // Outer loop for each row
    for (int i = n; i >= 1; i--) {
        // Inner loop to print numbers from i to n
        for (int j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
