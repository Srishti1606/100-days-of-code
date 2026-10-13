Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

int findFirst(const int nums[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            right = mid - 1;  // Search for an earlier occurrence
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int findLast(const int nums[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            result = mid;
            left = mid + 1;  // Search for a later occurrence
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main(void) {
    int n, target;

    printf("Enter the array size: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        return 1;
    }

    int nums[n];

    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) {
            return 1;
        }
    }

    printf("Enter the target: ");
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    int first = findFirst(nums, n, target);
    int last = findLast(nums, n, target);

    if (first == -1) {
        printf("First and last indices: -1, -1\n");
    } else {
        printf("First occurrence: %d at index %d\n", nums[first], first);
        printf("Last occurrence: %d at index %d\n", nums[last], last);
    }

    return 0;
}
