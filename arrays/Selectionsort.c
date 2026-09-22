#include <stdio.h>
int main()
{
    int i, n, j, temp, min_idx;
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

    for (i = 0; i < n; i++)
    {
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    printf("\nSorted array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}