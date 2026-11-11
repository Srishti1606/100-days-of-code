Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    // Input: n, followed by n distinct integers from 0 to n with one missing
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    long long expected_sum = (long long)n * (n + 1) / 2;
    long long actual_sum = 0;

    for (int i = 0; i < n; i++) {
        int value;
        if (scanf("%d", &value) != 1) {
            return 1;
        }
        actual_sum += value;
    }

    printf("%lld\n", expected_sum - actual_sum);
    return 0;
}
