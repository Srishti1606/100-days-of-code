Insert an element in an array at a given position.
  #include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main() {
    int arr[MAX_SIZE];
    int n, pos, element;

    // Step 1: Input array size
    printf("Enter number of elements (max %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Step 2: Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    // Step 3: Input position and element
    printf("Enter position to insert (1 to %d): ", n + 1);
    if (scanf("%d", &pos) != 1 || pos < 1 || pos > n + 1) {
        printf("Invalid position.\n");
        return 1;
    }

    printf("Enter element to insert: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Step 4: Check if array has space
    if (n >= MAX_SIZE) {
        printf("Array is full. Cannot insert new element.\n");
        return 1;
    }

    // Step 5: Shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Step 6: Insert new element
    arr[pos - 1] = element;
    n++;

    // Step 7: Display updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
