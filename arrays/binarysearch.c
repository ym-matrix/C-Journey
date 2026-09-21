#include <stdio.h>
int main()
{
    int n, i, j, temp, element, low, high, mid, found = 0;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sort the array because binary search requires sorted data.
    for (i = 0; i < n - 1; i++)
    {
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

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the number to search:");
    scanf("%d", &element);

    low = 0;
    high = n - 1;

    // Repeatedly check the middle value and discard half the search range.
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            found = 1;
            break;
        }
        else if (arr[mid] < element)
        {
            // The target is larger, so search the right half.
            low = mid + 1;
        }
        else
        {
            // The target is smaller, so search the left half.
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