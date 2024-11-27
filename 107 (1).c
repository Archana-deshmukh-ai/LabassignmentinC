#include <stdio.h>
#include <math.h>

// Function to reverse the last N digits of the number
int FLIP(int number, int N) {
    int divisor = (int)pow(10, N);  // Find the divisor for extracting last N digits
    int lastNDigits = number % divisor;  // Extract last N digits
    int remainingPart = number / divisor;  // Extract the remaining part
    
    // Reverse the last N digits
    int reversed = 0;
    while (lastNDigits > 0) {
        reversed = reversed * 10 + (lastNDigits % 10);
        lastNDigits /= 10;
    }
    
    // Combine the reversed part with the remaining part
    return remainingPart * divisor + reversed;
}

int main() {
    int number, N;
    
    // Input number from the user
    printf("Enter an integer number: ");
    scanf("%d", &number);
    
    // Input the single-digit number N
    printf("Enter a single-digit number N (1-9): ");
    scanf("%d", &N);
    
    
    
    // Call FLIP function and print the result
    int result = FLIP(number, N);
    printf("The result after flipping the last %d digits: %d\n", N, result);
    
    return 0;
}