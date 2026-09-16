#include <stdio.h>
int main()
{
    int i, n, element, pos;
    printf("Enter size of array:");
    scanf("%d", &n);
    // declaring a variable of n+1 size
    int arr[n + 1];

    printf("Enter values inside array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter elememnt to add:");
    scanf("%d", &element);

    printf("Enter position:");
    scanf("%d", &pos);

    // printing previous array before modifying
    printf("\nprevious array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    // if pos entered is not in the array
    if (pos > n + 1 || pos < 0)
    {
        printf("Enter valid position");
    }
    else
    {
        for (i = n; i >= pos; i--)
        {
            // moving elements towards right side to make space
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = element;
        n++;
    }

    printf("\n new array:");
    // printing new array after adding values
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}