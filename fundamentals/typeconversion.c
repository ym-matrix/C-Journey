#include <stdio.h>
int main()
{
    int a = 5;
    float b = 8.0;

    float int_float = (float)a; // converting int to float
    int float_int = (int)b;     // converting float to int

    printf("Value of a is %d\n", a);
    printf("Value of b is %f\n", b);
    printf("Int to float is %f\n", int_float); // print converted value
    printf("Float to int is %d\n", float_int); // print converted value
    return 0;
}