#include <stdio.h>
int main()
{
    int i, n, element, pos;
    printf("Enter size of array:");
    scanf("%d", &n);
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

    printf("\nprevious array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    if (pos > n + 1 || pos < 0)
    {
        printf("Enter valid position");
    }
    else
    {
        for (i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = element;
        n++;
    }

    printf("\n new array:");

    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}