#include <stdio.h>

// Selection sort program to arrange an array in descending order
int main()
{
    int i, n, j, temp, maj_idx;

    // Read the array size and elements
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nUnsorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    // Find the largest remaining element and place it at the current position
    for (i = 0; i < n; i++)
    {
        maj_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[maj_idx])
            {
                maj_idx = j;
            }
        }
        // Swap the selected element into position
        if (maj_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[maj_idx];
            arr[maj_idx] = temp;
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