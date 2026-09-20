#include <stdio.h>

// Bubble sort program to sort an array in ascending order
int main()
{
    int i, j, n, temp;

    // Read the size of the array
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Outer loop for each pass of bubble sort
    for (i = 0; i < n - 1; i++)
    {
        // Compare adjacent elements and swap if needed
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("\nSorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}