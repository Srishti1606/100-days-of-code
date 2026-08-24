Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
  #include <stdio.h>

int main() {
    int a, b;
    char operation;

    printf("Enter an expression (example: 10 + 5): ");
    scanf("%d %c %d", &a, &operation, &b);

    switch (operation) {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Cannot divide by zero\n");
            break;

        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Cannot divide by zero\n");
            break;

        default:
            printf("Invalid operation\n");
    }

    return 0;
}
