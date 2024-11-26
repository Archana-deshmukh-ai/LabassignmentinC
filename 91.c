#include <stdio.h>

void calculateSquareAndCube(int *num, int *square, int *cube) {
    *square = (*num) * (*num);    
    *cube = (*num) * (*num) * (*num); 
}

int main() {
    int number, square, cube;
    int *ptr = &number; 

    printf("Enter a number: ");
    scanf("%d", ptr);
    calculateSquareAndCube(ptr, &square, &cube);
    printf("Square of %d: %d\n", number, square);
    printf("Cube of %d: %d\n", number, cube);

    return 0;
}