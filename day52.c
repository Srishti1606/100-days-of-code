Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
  #include <stdio.h>

int main(void) {
    int n, x;

    printf("Enter the array size: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("Enter x: ");
    if (scanf("%d", &x) != 1) {
        return 1;
    }

    int left = 0, right = n - 1;
    int ceilIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;
            right = mid - 1;  // Look for the first occurrence
        } else {
            left = mid + 1;
        }
    }

    printf("%d\n", ceilIndex);
    return 0;
}
