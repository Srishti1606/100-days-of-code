Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
  #include <stdio.h>

enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main(void) {
    enum Operation choice;
    double a, b;

    printf("Choose an operation (1=ADD, 2=SUBTRACT, 3=MULTIPLY): ");
    if (scanf("%d", (int *)&choice) != 1) {
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        return 1;
    }

    switch (choice) {
        case ADD:
            printf("Result: %.2f\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %.2f\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %.2f\n", a * b);
            break;
        default:
            printf("Invalid operation.\n");
    }

    return 0;
}
