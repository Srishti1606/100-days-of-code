Count even and odd numbers in an array.
#include <stdio.h>

int main() {
    int n, arr[100], evenCount = 0, oddCount = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("Even elements = %d\n", evenCount);
    printf("Odd elements = %d\n", oddCount);

    return 0;
}
