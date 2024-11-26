#include <stdio.h>
int main()
{
    int size, i, n;

    // Reading the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Reading the elements of the array
    printf("Enter %d elements in the array\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reading number of positions the array to be rotated by
    printf("Enter number of positions the array to be rotated by: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int temp = arr[size - 1]; // storing last element of array
        for (int j = size - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1]; // sfiting position of each element to right
        }
        arr[0] = temp; // allocating last element to first element
    }

    // printing new array
    printf("After rotation new array is\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}