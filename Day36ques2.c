Find the sum of all elements in a matrix.
  #include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int i, j;
    long long sum = 0; // Use long long to handle large sums

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid input. Please enter positive integers for rows and columns.\n");
        return 1;
    }

    // Dynamically allocate memory for the matrix
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed.\n");
            // Free already allocated memory
            for (int k = 0; k < i; k++) free(matrix[k]);
            free(matrix);
            return 1;
        }
    }

    // Input matrix elements
    printf("Enter %d elements of the matrix:\n", rows * cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                // Free memory before exiting
                for (int k = 0; k < rows; k++) free(matrix[k]);
                free(matrix);
                return 1;
            }
            sum += matrix[i][j];
        }
    }

    // Output the sum
    printf("Sum of all elements in the matrix: %lld\n", sum);

    // Free allocated memory
    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
