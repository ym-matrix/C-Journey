#include <stdio.h>
int main()
{
    int n, i, j, temp, element, low, high, mid, found = 0;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array in descending order before applying binary search.
    for (i = 0; i < n - 1; i++)
    {
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
    printf("\n");
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the number to search:");
    scanf("%d", &element);

    // Binary search checks only the remaining range of possible indexes.
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        // Compare the target with the middle element of the current range.
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            found = 1;
            break;
        }
        else if (arr[mid] > element)
        {
            // In descending order, smaller values are to the right.
            low = mid + 1;
        }
        else
        {
            // Larger values are to the left.
            high = mid - 1;
        }
    }

    if (found)
    {
        printf("Element found at index %d\n", mid);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}