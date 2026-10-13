Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
  #include <stdio.h>

int main(void) {
    int n;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int nums[n];
    int answer[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    /* Store the product of all elements to the left of each index. */
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

    /* Multiply by the product of all elements to the right. */
    int suffixProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffixProduct;
        suffixProduct *= nums[i];
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(",");
        }
        printf("%d", answer[i]);
    }
    printf("\n");

    return 0;
}
