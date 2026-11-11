Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
  #include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m, n;

    // Input: m, then m sorted integers, then n, then n sorted integers
    if (scanf("%d", &m) != 1 || m < 0) {
        return 1;
    }

    int *a = malloc((size_t)m * sizeof(*a));
    if (m > 0 && a == NULL) {
        return 1;
    }

    for (int i = 0; i < m; i++) {
        if (scanf("%d", &a[i]) != 1) {
            free(a);
            return 1;
        }
    }

    if (scanf("%d", &n) != 1 || n < 0) {
        free(a);
        return 1;
    }

    int *b = malloc((size_t)n * sizeof(*b));
    if (n > 0 && b == NULL) {
        free(a);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &b[i]) != 1) {
            free(a);
            free(b);
            return 1;
        }
    }

    int *merged = malloc((size_t)(m + n) * sizeof(*merged));
    if (m + n > 0 && merged == NULL) {
        free(a);
        free(b);
        return 1;
    }

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    for (int x = 0; x < k; x++) {
        if (x > 0) printf(" ");
        printf("%d", merged[x]);
    }
    printf("\n");

    free(a);
    free(b);
    free(merged);
    return 0;
}
