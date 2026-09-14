#include <stdio.h>

int main()
{
    int n, i, oddCount = 0, evenCount = 0;
    printf("Enter number of elements:");
    scanf("%d", &n);

    int arr[n], oddArr[n], evenArr[n];

    printf("Enter %d elements:", n);
    // taking input inside first main array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // condition for odd and even and seperating into two arrays
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[evenCount] = arr[i];
            evenCount++;
        }
        else
        {
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("Even elements: ");
    // printing even array
    for (i = 0; i < evenCount; i++)
    {
        printf("%d ", evenArr[i]);
    }

    printf("\nOdd elements: ");
    // printing odd array
    for (i = 0; i < oddCount; i++)
    {
        printf("%d ", oddArr[i]);
    }
    printf("\n");

    return 0;
}