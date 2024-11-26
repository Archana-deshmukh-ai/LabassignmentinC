#include <stdio.h>

int findLargest(int *arr, int n) {
    int *ptr = arr; 
    int largest = *ptr; 

    for (int i = 1; i < n; i++) {
        ptr++; 
        if (*ptr > largest) {
            largest = *ptr; 
        }
    }
    return largest;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n); 
    printf("The largest number is: %d\n", largest);

    return 0;
}