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
    printf("Enter an element to be searched:");
    scanf("%d", &element);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            result = i;
            break;
        }
    }
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