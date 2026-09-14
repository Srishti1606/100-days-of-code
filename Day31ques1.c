search for an element in an array using linear search.
  #include <stdio.h>

int main() {
    int n, arr[100], element, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &element);

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            printf("%d found at position %d.\n", element, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("%d not found in the array.\n", element);
    }

    return 0;
}
