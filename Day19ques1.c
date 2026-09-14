Write a program to find the LCM of two numbers
#include <stdio.h>

int main() {
    int num1, num2, a, b, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;

    /* Find GCD using Euclidean algorithm */
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    gcd = a;

    /* LCM = (num1 × num2) / GCD */
    lcm = (num1 * num2) / gcd;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
