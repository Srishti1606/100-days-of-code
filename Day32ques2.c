Find the digit that occurs the most times in an integer number.
  #include <stdio.h>
#include <stdlib.h>

int main() {
    long long num;
    int freq[10] = {0}; // Array to store frequency of digits 0-9
    int digit, maxFreq = 0, mostFreqDigit = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    // Handle negative numbers
    if (num < 0) {
        num = llabs(num);
    }

    // Special case: if number is 0
    if (num == 0) {
        printf("Most frequent digit: 0 (occurs 1 time)\n");
        return 0;
    }

    // Count frequency of each digit
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find the digit with the highest frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq || (freq[i] == maxFreq && i > mostFreqDigit)) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Most frequent digit: %d (occurs %d times)\n", mostFreqDigit, maxFreq);
    return 0;
}
