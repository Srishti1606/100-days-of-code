Perform diagonal traversal of a matrix.
#include <stdio.h>

int main(void) {
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Start diagonals along the top row.
    for (int startCol = 0; startCol < cols; startCol++) {
        int i = 0, j = startCol;

        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    // Start diagonals down the leftmost column (skip the top-left).
    for (int startRow = 1; startRow < rows; startRow++) {
        int i = startRow, j = cols - 1;

        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }

    printf("\n");
    return 0;
}  
  
  
