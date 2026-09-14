Write a program to swap the first and last digit of a number.
  #include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, digits = 0;
    int temp, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    /* Find number of digits */
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    /* Find first and last digit */
    lastDigit = number % 10;
    firstDigit = number;

    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    /* Calculate 10^(digits - 1) */
    int divisor = 1;
    for (int i = 1; i < digits; i++) {
        divisor *= 10;
    }

    /* Remove first and last digits */
    middle = (number % divisor) / 10;

    /* Form the swapped number */
    swapped = lastDigit * divisor + middle * 10 + firstDigit;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
