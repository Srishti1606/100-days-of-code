Find the second largest element in an array.
#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input. Array must have at least 2 elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers: ", n);

    // Read array elements with validation
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    // Initialize largest and second largest
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            // Update both largest and second largest
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            // Update only second largest
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest element found (all elements may be equal).\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}
