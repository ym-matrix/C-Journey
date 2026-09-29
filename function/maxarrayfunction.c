#include <stdio.h>

int max(int arr[], int n)
{
    int i, maximum;
    maximum = arr[0];

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
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    maximum = max(arr, n);
    printf("Maximum value inside array is %d\n", maximum);

    return 0;
}