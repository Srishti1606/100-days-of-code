Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
  #include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;

    // Input: n, followed by n integers in the range 1 to n - 1
    if (scanf("%d", &n) != 1 || n < 2) {
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

    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }

    printf("%d\n", slow);
    free(arr);
    return 0;
}
