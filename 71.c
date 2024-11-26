#include <stdio.h>
int main()
{
    int n, num, pivot = 0;
    printf("enter size of array \n");
    scanf("%d", &n);
    int a[n];
    printf("enter elements of array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // sorting elements of array using bubble sort
    int temp, n1 = n;
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n1 - 1; i++)
        {
            if (a[i] > a[i + 1]) // if ith ele is bigger than its next element we need to swap
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
        n1--;
    }
    // Reading  from which position the array to be rotated by
    printf("Enter the position the array to be rotated by: ");
    scanf("%d", &num);
    for (int i = 0; i < n - num; i++)
    {
        int temp = a[n - 1]; // storing last element of array
        for (int j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1]; // sfiting position of each element to right
        }
        a[0] = temp; // allocating last element to first element
    }

    printf("\nafter sorting and rotating new array is\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] < a[i - 1])
        {
            pivot++;
            printf("\n%d is pivoted element", a[i]);
        }
    }
    if (pivot == 0)
        printf("\nThere is no pivoted element....");
    return 0;
}