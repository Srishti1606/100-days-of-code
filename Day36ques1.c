Read and print a matrix.
  #include <stdio.h>

int main() {
    int rows, cols;

    // Read matrix dimensions
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid input. Please enter positive integers for rows and columns.\n");
        return 1;
    }

    int matrix[rows][cols]; // Variable Length Array (C99+)

    // Read matrix elements
    printf("Enter %d elements of the matrix:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    // Print the matrix
    printf("\nThe matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); // Tab for better alignment
        }
        printf("\n");
    }

    return 0;
}
