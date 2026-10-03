#include <stdio.h>
#define pi 3.14

void calculate(double radius, double *area, double *volume)
{
    *area = pi * radius * radius;
    *volume = (4.0 / 3.0) * pi * radius * radius * radius;
}

int main()
{
    double area, volume, radius;

    printf("Enter Radius of sphere: ");
    scanf("%lf", &radius);

    calculate(radius, &area, &volume);

    printf("Area of sphere is %lf\n", area);
    printf("Volume of sphere is %lf\n", volume);

    return 0;
}