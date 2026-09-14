Write a program to print all the prime numbers from 1 to 
#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;       // 0 and 1 are not prime
    if (num == 2) return true;        // 2 is prime
    if (num % 2 == 0) return false;   // Even numbers > 2 are not prime

    // Check divisors from 3 to sqrt(num)
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;

    // Input upper limit
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Prime numbers from 1 to %d are:\n", n);

    // Loop through numbers and print primes
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
