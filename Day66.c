Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
  #include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, target;

    // Input: n, followed by n positive integers, then target
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1 -1\n");
        return 0;
    }

    int *nums = malloc((size_t)n * sizeof(*nums));
    if (nums == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            free(nums);
            return 1;
        }
    }

    if (scanf("%d", &target) != 1) {
        free(nums);
        return 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                free(nums);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    free(nums);
    return 0;
}
