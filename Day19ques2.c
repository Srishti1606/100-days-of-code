Write a program to find the sum of digits of a number.
  #include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = number < 0 ? -number : number;  // Handle negative numbers

    while (number != 0) {
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
