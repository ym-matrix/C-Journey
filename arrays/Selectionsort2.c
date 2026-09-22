#include <stdio.h>

// Selection sort program to arrange an array in ascending order
int main()
{
    int i, j, temp, n, min_idx;

    // Read the array size and elements
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter values inside array: ");
    // Find the smallest remaining element and place it at the current position
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        // Swap the smallest element into position
        if (min_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
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