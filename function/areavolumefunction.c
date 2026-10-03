#include <stdio.h>

// Approximate value of pi used in the sphere calculations.
#define pi 3.14

// Calculates the area and volume of a sphere using the given radius.
void calculate(double radius, double *area, double *volume)
{
    // Surface area of a sphere: 4 * pi * r^2
    *area = pi * radius * radius;

    // Volume of a sphere: (4/3) * pi * r^3
    *volume = (4.0 / 3.0) * pi * radius * radius * radius;
}

int main()
{
    double area, volume, radius;

    // Prompt the user to enter the sphere radius.
    printf("Enter Radius of sphere: ");
    scanf("%lf", &radius);

    // Call the function to compute the results.
    calculate(radius, &area, &volume);

    // Display the computed values.
    printf("Area of sphere is %lf\n", area);
    printf("Volume of sphere is %lf\n", volume);

    return 0;
}