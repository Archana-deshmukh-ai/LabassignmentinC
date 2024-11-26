#include <stdio.h>

int main() {
    int n, num, max, min;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the first number
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = min = num; // Initialize both max and min with the first number

    // Loop through the remaining numbers
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            max = num; // Update max if the current number is greater
        }
        if (num < min) {
            min = num; // Update min if the current number is smaller
        }
    }

    // Display the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}