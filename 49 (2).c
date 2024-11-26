
#include <stdio.h>

int main() {
    int rows;

    // Input the number of rows for the pyramid
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Print the star pyramid
    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}