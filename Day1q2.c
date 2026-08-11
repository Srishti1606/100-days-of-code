Write a program to input two numbers and display their sum, difference, product, and quotient.
  #include <stdio.h>

int main()
{
    int a, b;
    int sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = a / b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);

    return 0;
}
