Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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

    /* Examine each window from left to right. */
    for (int start = 0; start <= n - k; start++) {
        int firstNegative = 0;

        for (int j = start; j < start + k; j++) {
            if (arr[j] < 0) {
                firstNegative = arr[j];
                break;
            }
        }

        if (start > 0) {
            printf(" ");
        }
        printf("%d", firstNegative);
    }

    printf("\n");
    return 0;
}
