Reverse an array without taking extra space.
  #include <stdio.h>

int main() {
    int n, arr[100], temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Reverse the array in place */
    for (int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
