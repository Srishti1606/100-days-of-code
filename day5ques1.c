Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    double principal, rate, time;
    double simpleInterest, compoundInterest;

    // Prompt user for inputs
    printf("Enter Principal amount: ");
    if (scanf("%lf", &principal) != 1 || principal < 0) {
        printf("Invalid input! Principal must be a positive number.\n");
        return 1;
    }

    printf("Enter Rate of interest (in %%): ");
    if (scanf("%lf", &rate) != 1 || rate < 0) {
        printf("Invalid input! Rate must be a positive number.\n");
        return 1;
    }

    printf("Enter Time (in years): ");
    if (scanf("%lf", &time) != 1 || time < 0) {
        printf("Invalid input! Time must be a positive number.\n");
        return 1;
    }

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100.0;

    // Calculate Compound Interest
    // Formula: CI = P * ( (1 + R/100)^T - 1 )
    compoundInterest = principal * (pow((1 + rate / 100.0), time) - 1);

    // Display results
    printf("\n--- Interest Calculation ---\n");
    printf("Simple Interest  = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
