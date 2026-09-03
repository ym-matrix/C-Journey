// first switch case program
#include <stdio.h>
#define pi 3.14 // declaring pi as a constant value
int main()
{
    int choice;
    printf("1. SQUARE"); // display a menu of choices to the user
    printf("2.RECTANGLE");
    printf("3.CIRCLE");
    printf("4.REGULAR POLYGON");
    printf("Enter your choice:");
    scanf("%d", &choice);
    switch (choice) // to perform specific cases acoording to the input choice
    {
    case 1:
    {
        float side, area;
        printf("Enter value of side of square:");
        scanf("%f", &side);
        area = side * side;
        printf("Area of square is %f", area);
        break;
    }

    case 2:
    {
        float area, length, breadth;
        printf("Enter vaue of breadth and lenght of rectangle: ");
        scanf("%f %f", &length, &breadth);
        area = length * breadth;
        printf("Area of rectangle is %f", area);
        break;
    }

    case 3:
    {
        float radius, area;
        printf("Enter value of radius of circle:");
        scanf("%f", &radius);
        area = pi * radius * radius;
        printf("Area of circle is %f", area);
        break;
    }

    case 4:
    {
        float area, side, perimeter, apothem;
        int n;
        printf("Enter number of sides of polygon:");
        scanf("%d", &n);
        printf("Enter va;ue of side of polygon:");
        scanf("%f", &side);
        printf("Enter vakue of apothem of polygon:");
        scanf("%f", &apothem);
        perimeter = n * side;
        area = (perimeter * apothem) / 2;
        printf("Area of polygon is %f", area);
        printf("Perimeter of polygon is %f", perimeter);
        break;
    }

    default:
        printf("Enter valid choice");
    }
    return 0;
}
