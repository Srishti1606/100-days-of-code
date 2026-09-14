Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
  #include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double numerator = 2 * i - 1;
        double denominator = 2.0 * i;

        sum += numerator / denominator;
    }

    printf("Sum of the series = %.2lf\n", sum);

    return 0;
}
