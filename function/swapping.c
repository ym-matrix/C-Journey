#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 5, y = 15;
    printf("Variables before swapping\n");
    printf("x=%d,y=%d\n", x, y);

    swap(&x, &y);
    printf("Variables after swapping\n");
    printf("x=%d,y=%d\n", x, y);

    return 0;
}