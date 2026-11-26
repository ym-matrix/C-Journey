#include <stdio.h>

int main()
{
    // Pointer for traversing the array and variables for size, loop index, and sum.
    int *a1, n, i, sum = 0;

    // Read the number of elements in the array.
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];

    // Set the pointer to the address of the first array element.
    a1 = &arr[0];

    // Read array elements from the user.
    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Use pointer arithmetic to access each element and calculate the sum.
    printf("Sum of array elements is:");
    for (i = 0; i < n; i++)
    {
        sum += *(a1 + i);
    }
    printf("%d", sum);

    return 0;
}