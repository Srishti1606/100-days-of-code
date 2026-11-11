Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);  // Avoids overflow from x - y
}

int main(void) {
    int n, k;

    // Input: n, followed by n array elements, then k
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int *arr = malloc((size_t)n * sizeof(*arr));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        free(arr);
        return 1;
    }

    qsort(arr, (size_t)n, sizeof(*arr), compare);

    printf("%d\n", arr[k - 1]);

    free(arr);
    return 0;
}
