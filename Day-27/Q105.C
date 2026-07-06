// Student Record Management System in C

#include <stdio.h>
#include <string.h>

struct Student
{
    int rollNo;
    char name[50];
    int age;
    char course[50];
};

int main()
{
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1)
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. View Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &s[n].rollNo);

            printf("Enter Name: ");
            scanf(" %[^\n]", s[n].name);

            printf("Enter Age: ");
            scanf("%d", &s[n].age);

            printf("Enter Course: ");
            scanf(" %[^\n]", s[n].course);

            n++;
            printf("Student record added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No records found.\n");
            }
            else
            {
                printf("\nStudent Records:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nRoll No : %d\n", s[i].rollNo);
                    printf("Name    : %s\n", s[i].name);
                    printf("Age     : %d\n", s[i].age);
                    printf("Course  : %s\n", s[i].course);
                }
            }
            break;

        case 3:
            printf("Enter Roll Number to search: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    printf("\nStudent Found:\n");
                    printf("Roll No : %d\n", s[i].rollNo);
                    printf("Name    : %s\n", s[i].name);
                    printf("Age     : %d\n", s[i].age);
                    printf("Course  : %s\n", s[i].course);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found.\n");

            break;

        case 4:
            printf("Enter Roll Number to update: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    printf("Enter New Name: ");
                    scanf(" %[^\n]", s[i].name);

                    printf("Enter New Age: ");
                    scanf("%d", &s[i].age);

                    printf("Enter New Course: ");
                    scanf(" %[^\n]", s[i].course);

                    printf("Record updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found.\n");

            break;

        case 5:
            printf("Enter Roll Number to delete: ");
            scanf("%d", &roll);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (s[i].rollNo == roll)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        s[j] = s[j + 1];
                    }
                    n--;
                    printf("Record deleted successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Student not found.\n");

            break;

        case 6:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}