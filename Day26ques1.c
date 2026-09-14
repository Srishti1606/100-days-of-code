Write a program to print the following pattern:
    5
   45
  345
 2345
12345
  #include <stdio.h>

int main() {
    int i, j, spaces, start;

    // Loop for each row
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (spaces = 1; spaces < i; spaces++) {
            printf(" ");
        }

        // Print numbers from i to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n"); // Move to next line
    }

    return 0;
}
