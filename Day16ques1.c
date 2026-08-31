Write a program to take a number as input and print its equivalent binary representation.
  #include <stdio.h>

int main() {
    int number, binary[32], i = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    printf("Binary representation: ");
    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    return 0;
}
