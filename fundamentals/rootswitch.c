#include <stdio.h>
#include <math.h> // Include the math library for sqrt function
int main()
{
    int a, b, c;
    float discriminant, root1, root2;
    printf("Enter value of a,b,c:");
    scanf("%d %d %d", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);

    switch ((discriminant > 0) - (discriminant < 0)) // Check the discriminant's sign.
    {
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Real roots of the equation are %f %f:", root1, root2);
        break;
    case -1:
        root1 = -b / (2.0f * a);
        root2 = sqrt(-discriminant) / (2.0f * a);
        printf("Roots are imaginary and root1 and root2 are %f %f:", root1, root2);
        break;
    case 0:
        root1 = -b / (2.0f * a);
        root2 = root1;
        printf("The equation has two equal roots: %f %f", root1, root2);
        break;
    }
    return 0;
}
