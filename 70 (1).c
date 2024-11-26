
#include <stdio.h>

int main() {
    int n, search, count = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Input the element to search for
    printf("Enter the element to count occurrences: ");
    scanf("%d", &search);

    // Count occurrences of the specified element
    for (int i = 0; i < n; i++) {
        if (array[i] == search) {
            count++;  // Increment count if the element matches
        }
    }

    // Output the result
    printf("Element %d occurs %d time(s) in the array.\n", search, count);

    return 0;
}