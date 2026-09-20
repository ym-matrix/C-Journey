#include <stdio.h>

// Bubble sort program to sort an array in descending order
int main()
{
    int i, j, n, temp;

    // Read the size of the array
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];

    // Read array elements from the user
    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Perform bubble sort for descending order
    for (i = 0; i < n - 1; i++)
    {
        // Compare adjacent values and swap if left is smaller than right
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}