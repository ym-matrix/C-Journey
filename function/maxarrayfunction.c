#include <stdio.h>

// Return the largest value in an array of n elements.
int max(int arr[], int n)
{
    int i, maximum;
    maximum = arr[0]; // Use the first value as the initial maximum.

    // Compare each remaining value with the current maximum.
    for (i = 1; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}

int main()
{
    int n, maximum, i;

    // Read the array size and then its values.
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find and display the largest array value.
    maximum = max(arr, n);
    printf("Maximum value inside array is %d\n", maximum);

    return 0;
}