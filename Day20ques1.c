Write a program to find the product of odd digits of a number.
  #include <stdio.h>

int main() {
    int number, digit, product = 1;
    int foundOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    number = number < 0 ? -number : number;  // Handle negative numbers

    while (number != 0) {
        digit = number % 10;

        if (digit % 2 != 0) {
            product = product * digit;
            foundOdd = 1;
        }

        number = number / 10;
    }

    if (foundOdd) {
        printf("Product of odd digits = %d\n", product);
    } else {
        printf("No odd digits found.\n");
    }

    return 0;
}
