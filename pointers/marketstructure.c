#include <stdio.h>

struct market
{
    char name[20];
    int quantity;
    float price;
};

int main()
{
    struct market product[10];
    int i, n;
    printf("Entr number of products:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name of product: ");
        scanf("%19s", product[i].name);
        printf("Enter quantity of product: ");
        scanf("%d", &product[i].quantity);
        printf("Enter price per product:");
        scanf("%f", &product[i].price);
    }

    {
        printf("\nProduct details:\n");
        for (i = 0; i < n; i++)
        {
            printf("Name: %s\n", product[i].name);
            printf("Quantity: %d\n", product[i].quantity);
            printf("Price: %.2f\n", product[i].price);
            printf("\n");
        }
    }
}