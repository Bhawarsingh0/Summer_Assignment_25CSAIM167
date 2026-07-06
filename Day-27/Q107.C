// Salary Management System in C

#include <stdio.h>

struct Employee
{
    int empId;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    while (1)
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. View Salary Records\n");
        printf("3. Search Salary Record\n");
        printf("4. Update Salary Record\n");
        printf("5. Delete Salary Record\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].empId);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basicSalary);

            // Calculate HRA and DA
            emp[n].hra = emp[n].basicSalary * 0.20;
            emp[n].da = emp[n].basicSalary * 0.10;

            // Calculate Gross Salary
            emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

            n++;
            printf("Salary record added successfully.\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("No salary records found.\n");
            }
            else
            {
                printf("\nSalary Records:\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee ID   : %d", emp[i].empId);
                    printf("\nName          : %s", emp[i].name);
                    printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
                    printf("\nHRA (20%%)     : %.2f", emp[i].hra);
                    printf("\nDA (10%%)      : %.2f", emp[i].da);
                    printf("\nGross Salary  : %.2f\n", emp[i].grossSalary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].empId == id)
                {
                    printf("\nEmployee ID   : %d", emp[i].empId);
                    printf("\nName          : %s", emp[i].name);
                    printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
                    printf("\nHRA           : %.2f", emp[i].hra);
                    printf("\nDA            : %.2f", emp[i].da);
                    printf("\nGross Salary  : %.2f\n", emp[i].grossSalary);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Salary record not found.\n");
            break;

        case 4:
            printf("Enter Employee ID to update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].empId == id)
                {
                    printf("Enter New Basic Salary: ");
                    scanf("%f", &emp[i].basicSalary);

                    emp[i].hra = emp[i].basicSalary * 0.20;
                    emp[i].da = emp[i].basicSalary * 0.10;
                    emp[i].grossSalary = emp[i].basicSalary + emp[i].hra + emp[i].da;

                    printf("Salary record updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Salary record not found.\n");
            break;

        case 5:
            printf("Enter Employee ID to delete: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].empId == id)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        emp[j] = emp[j + 1];
                    }
                    n--;
                    printf("Salary record deleted successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Salary record not found.\n");
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