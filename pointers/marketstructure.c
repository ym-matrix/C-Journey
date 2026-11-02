#include <stdio.h>

// Structure to store the details of one market product.
struct market
{
    char name[20];
    int quantity;
    float price;
};

int main()
{
    // Array to store details of up to 10 products.
    struct market product[10];
    int i, n;

    // Read the number of products.
    printf("Entr number of products:");
    scanf("%d", &n);

    // Read the name, quantity, and price of each product.
    for (i = 0; i < n; i++)
    {
        printf("Enter name of product: ");
        scanf("%19s", product[i].name);
        printf("Enter quantity of product: ");
        scanf("%d", &product[i].quantity);
        printf("Enter price per product:");
        scanf("%f", &product[i].price);
    }

    // Display the details of all entered products.
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