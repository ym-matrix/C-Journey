#include <stdio.h>
int main()
{
    float weight, height, BMI;
    printf("Enter your weight in kg and height in m: ");
    scanf("%f %f", &weight, &height);
    BMI = weight / (height * height); // Calculating BMI value
    printf("%.2f", BMI);

    if (BMI < 18.5)
    {
        printf("\nUnderweight");
    }
    else if (BMI >= 18.5 && BMI < 25.0)
    {
        printf("\nNormal weight");
    }
    else if (BMI >= 25.0 && BMI < 30.0)
    {
        printf("\nOverweight");
    }
    else if (BMI >= 30.0)
    {
        printf("\nObese");
    }
    return 0;
}