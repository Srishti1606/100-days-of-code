Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
  #include <stdio.h>

int main(void) {
    int n, k;

    /* Input: array size, window size, then array elements. */
    if (scanf("%d %d", &n, &k) != 2 || n <= 0 || k <= 0 || k > n) {
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Check each window and find its maximum. */
    for (int start = 0; start <= n - k; start++) {
        int max = arr[start];

        for (int j = start + 1; j < start + k; j++) {
            if (arr[j] > max) {
                max = arr[j];
            }
        }

        if (start > 0) {
            printf(" ");
        }
        printf("%d", max);
    }

    printf("\n");
    return 0;
}
