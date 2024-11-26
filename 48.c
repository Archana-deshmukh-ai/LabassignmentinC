// c program to print left half pyramid pattern of star
#include <stdio.h>

int main()
{     int rows;
    scanf("%d",&rows);

    // first loop is for printing the rows
    for (int i = 1; i <= rows; i++) {

        // loop for printing leading whitespaces
        for (int j = 1; j <= 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // loop for printing * character
        for (int k = 1; k <= i; k++) {
            printf("%d ",k);
        }
        printf("\n");
    }
    return 0;
}