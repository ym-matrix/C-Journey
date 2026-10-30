#include <stdio.h>

// Structure to store a student's personal and address details.
struct student
{
    char name[20];
    int rollno;

    // Nested structure stores the student's address.
    struct address
    {
        char city[10];
        int pincode;
    } addr;
};

int main(void)
{
    int i, n;

    // Read the number of students.
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Create an array of student structures.
    struct student s[n];

    // Read the details for each student.
    printf("Enter the details of students:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%19s", s[i].name);
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &s[i].rollno);
        printf("Enter the city of student %d: ", i + 1);
        scanf("%9s", s[i].addr.city);
        printf("Enter the pincode of student %d: ", i + 1);
        scanf("%d", &s[i].addr.pincode);
    }

    // Display the details of all students.
    printf("\nDetails of students:\n");
    for (i = 0; i < n; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollno);
        printf("City: %s\n", s[i].addr.city);
        printf("Pincode: %d\n\n", s[i].addr.pincode);
    }
    return 0;
}