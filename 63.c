Q63
#include <stdio.h>

int main() {
    int matrix[3][3];
    int max, min;

    // Input the 3x3 matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize max and min
    max = matrix[0][0];
    min = matrix[0][0];

    // Find max and min elements
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    // Print the results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}