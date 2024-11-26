68
#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], product[3][3] = {0};

    // Input the first 3x3 matrix
    printf("Enter the elements of the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input the second 3x3 matrix
    printf("Enter the elements of the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Calculate the product of the two matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print the resulting product matrix
    printf("Product of the two matrices:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}