#include <stdio.h>

// Function to swap two integer values using pointers
void swap(int *a, int *b)
{
    int temp = *a; // store first value temporarily
    *a = *b;       // assign second value to first pointer
    *b = temp;     // assign saved first value to second pointer
}

int main()
{
    int x = 5, y = 15;

    printf("Variables before swapping\n");
    printf("x=%d,y=%d\n", x, y);

    swap(&x, &y); // pass addresses of x and y

    printf("Variables after swapping\n");
    printf("x=%d,y=%d\n", x, y);

    return 0;
}