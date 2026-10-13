Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.
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
