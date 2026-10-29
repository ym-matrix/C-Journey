#include <stdio.h>

// Structure to store the details of one student.
struct student
{
    char name[20];
    int rollno;
    float CGPA;
};

int main()
{
    // Array to store details of five students.
    struct student student[5];
    int i;

    // Read the name, roll number, and CGPA of each student.
    for (i = 0; i < 5; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", student[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &student[i].rollno);
        printf("Enter CGPA of student %d: ", i + 1);
        scanf("%f", &student[i].CGPA);
    }

    // Display all the stored student details.
    printf("\nStudent details:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Name: %s\n", student[i].name);
        printf("Roll Number: %d\n", student[i].rollno);
        printf("CGPA: %.2f\n", student[i].CGPA);
        printf("\n");
    }
}
