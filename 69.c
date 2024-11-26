69
#include <stdio.h>

int main() {
    int n, search, found = -1;

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
    printf("Enter the element to search for: ");
    scanf("%d", &search);

    // Perform linear search
    for (int i = 0; i < n; i++) {
        if (array[i] == search) {
            found = i;  // Store the index if found
            break;
        }
    }

    // Output the result
    if (found != -1) {
        printf("Element %d found at index %d.\n", search, found);
    } else {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}