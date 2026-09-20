#include <stdio.h>

// Linear search program to find an element in an array
int main()
{
    int i, n, element, result;

    // Read array size
    printf("Enter size of array:");
    scanf("%d", &n);
    int arr[n];

    // Read array elements
    printf("Enter values inside array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read the value to search for
    printf("Enter an element to be searched:");
    scanf("%d", &element);

    // Search from the first element to the last
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            result = i;
            break;
        }
    }

    // Display result based on whether the element was found
    if (result == -1)
    {
        printf("The element was not found in the array:");
    }
    else
    {
        printf("The element %d was found at %d", element, result);
    }
    return 0;
}