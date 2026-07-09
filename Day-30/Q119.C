#include <stdio.h>
#include <string.h>

int main() {
    int id[50], age[50], n, i, choice, searchId;
    float salary[50];
    char name[50][50];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee details
    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &id[i]);

        printf("Enter Employee Name: ");
        scanf("%s", name[i]);

        printf("Enter Age: ");
        scanf("%d", &age[i]);

        printf("Enter Salary: ");
        scanf("%f", &salary[i]);
    }

    do {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Employees\n");
        printf("2. Search Employee\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nID\tName\tAge\tSalary\n");
                printf("----------------------------------------\n");
                for(i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t%.2f\n", id[i], name[i], age[i], salary[i]);
                }
                break;

            case 2:
                printf("Enter Employee ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(id[i] == searchId) {
                        printf("\nEmployee Found!\n");
                        printf("ID: %d\n", id[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Age: %d\n", age[i]);
                        printf("Salary: %.2f\n", salary[i]);
                        break;
                    }
                }

                if(i == n)
                    printf("Employee not found.\n");
                break;

            case 3:
                printf("Enter Employee ID: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(id[i] == searchId) {
                        printf("Enter New Salary: ");
                        scanf("%f", &salary[i]);
                        printf("Salary Updated Successfully.\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Employee not found.\n");
                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}