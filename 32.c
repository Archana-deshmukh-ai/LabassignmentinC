#include <stdio.h>

int main() {
    int n, num, max, second_max;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the first number
    printf("Enter number 1: ");
    scanf("%d", &num);
    max = num;
    second_max = -1; // Assuming all numbers are non-negative

    // Loop through the remaining numbers
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max) {
            second_max = max;
            max = num;
        } else if (num > second_max && num != max) {
            second_max = num;
        }
    }

    // Display the results
    if (second_max == -1) {
        printf("Second maximum does not exist.\n");
    } else {
        printf("Maximum: %d\n", max);
        printf("Second Maximum: %d\n", second_max);
    }

    return 0;
}