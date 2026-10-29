#include <stdio.h>
struct student
{
    char name[20];
    int rollno;
    float CGPA;
};
int main()
{
    struct student student[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &student[i].rollno);
        printf("Enter CGPA of student %d: ", i + 1);
        scanf("%f", &student[i].CGPA);
    }

    printf("\nStudent details:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\n", student[i].name);
        printf("Roll Number: %d\n", student[i].rollno);
        printf("CGPA: %.2f\n", student[i].CGPA);
        printf("\n");
    }
}
