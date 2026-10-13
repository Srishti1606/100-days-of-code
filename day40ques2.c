Multiply two matrices.
  #include <stdio.h>

int main(void) {
    int rowsA, colsA, rowsB, colsB;

    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &rowsA, &colsA);

    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &rowsB, &colsB);

    if (colsA != rowsB) {
        printf("Matrix multiplication is not possible.\n");
        return 1;
    }

    int a[rowsA][colsA];
    int b[rowsB][colsB];
    int product[rowsA][colsB];

    printf("Enter the first matrix elements:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the second matrix elements:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Product matrix:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
