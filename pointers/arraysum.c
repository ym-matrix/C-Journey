#include <stdio.h>
int main()
{
    int *a1, n, i, sum = 0;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];

    a1 = &arr[0];
    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Sum of array elements is:");
    for (i = 0; i < n; i++)
    {
        sum += *(a1 + i);
    }
    printf("%d", sum);

    return 0;
}