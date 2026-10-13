Find the sum of main diagonal elements for a square matrix.
 #include <stdio.h>

int main(void) {
    int n;

    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int distinct = 1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) {
            break;
        }
    }

    if (distinct) {
        printf("The main diagonal elements are distinct.\n");
    } else {
        printf("The main diagonal elements are not distinct.\n");
    }

    return 0;
} 
