Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
  #include <stdio.h>

int main(void) {
    int n, k;

    /* Input: array size, then k, then the array elements. */
    if (scanf("%d %d", &n, &k) != 2 || n <= 0 || k <= 0 || k > n) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    long long windowSum = 0;

    /* Sum the first window. */
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    long long maxSum = windowSum;

    /* Slide the window one element at a time. */
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    printf("%lld\n", maxSum);
    return 0;
}
