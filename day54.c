Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
Show Sample Test Cases
#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    long long total = 0;

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
        total += arr[i];
    }

    long long leftSum = 0;
    int pivotIndex = -1;

    for (int i = 0; i < n; i++) {
        long long rightSum = total - leftSum - arr[i];

        if (leftSum == rightSum) {
            pivotIndex = i;
            break;  // First match is the leftmost pivot
        }

        leftSum += arr[i];
    }

    printf("%d\n", pivotIndex);
    return 0;
}
