#include <stdio.h>
int main()
{
    int i, n, element, result;
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];

    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter an element to find:");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        // condition to check if array element is equal to the searching element
        if (arr[i] == element)
        {
            // result = index value at which the element is found
            result = i;
            break;
        }
    }
    if (result == -1)
    {
        printf("Value not found in array:");
    }
    else
    {
        printf("Value found at index %d", result);
    }
    return 0;
}