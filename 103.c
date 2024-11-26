#include <stdio.h>

// Define a macro to find the biggest of two numbers
#define BIGGEST(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2, max;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Use the macro to find the biggest number
    max = BIGGEST(num1, num2);

    // Display the result
    printf("The biggest number is: %d\n", max);

    return 0;
}