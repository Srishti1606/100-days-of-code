Write a program to find the HCF (GCD) of two numbers.
  #include <stdio.h>

int main() {
    int num1, num2, remainder, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1;
    int b = num2;

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    hcf = a;

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}
