#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int source[n], destination[n];
    int *pSource = source, *pDestination = destination;
    printf("Enter %d elements of the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", pSource + i);
    }
    for (i = 0; i < n; i++) {
        *(pDestination + i) = *(pSource + i);
    }
    printf("Elements of the destination array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(pDestination + i));
    }

    return 0;
}