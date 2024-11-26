#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reduce the number to a single digit by summing its digits repeatedly
    while (num > 9 || num < -9) {
        sum = 0; // Reset sum for each iteration
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum; // Update num to the sum of its digits
    }

    // Output the single-digit result
    printf("The single-digit sum is: %d\n", num);

    return 0;
}