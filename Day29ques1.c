Find the sum of array elements.
  #include <stdio.h>

int main() {
    int n, arr[100], sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
}
