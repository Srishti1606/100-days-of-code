Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
    long totalSeconds;
    int hours, minutes, seconds;

    // Prompt user for input
    printf("Enter time in seconds: ");

    // Validate input (must be a non-negative integer)
    if (scanf("%ld", &totalSeconds) != 1 || totalSeconds < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; // Exit with error
    }

    // Convert seconds to hours, minutes, and seconds
    hours = totalSeconds / 3600;          // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // Remaining minutes
    seconds = totalSeconds % 60;          // Remaining seconds

    // Display result in HH:MM:SS format
    printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0; // Successful execution
}
