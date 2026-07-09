#include <stdio.h>
#include <string.h>

#define MAX 50

int roll[MAX];
char name[MAX][50];
float marks[MAX];
int n = 0;

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

int main() {
    int choice;

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

void addStudent() {
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll[n]);

    printf("Enter Name: ");
    scanf("%s", name[n]);

    printf("Enter Marks: ");
    scanf("%f", &marks[n]);

    n++;
    printf("Student Added Successfully!\n");
}

void displayStudents() {
    int i;

    if(n == 0) {
        printf("No Records Found!\n");
        return;
    }

    printf("\nRoll\tName\tMarks\n");
    printf("----------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", roll[i], name[i], marks[i]);
    }
}

void searchStudent() {
    int r, i;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("\nRecord Found\n");
            printf("Roll : %d\n", roll[i]);
            printf("Name : %s\n", name[i]);
            printf("Marks: %.2f\n", marks[i]);
            return;
        }
    }

    printf("Student Not Found!\n");
}

void updateStudent() {
    int r, i;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            printf("Enter New Marks: ");
            scanf("%f", &marks[i]);
            printf("Marks Updated Successfully!\n");
            return;
        }
    }

    printf("Student Not Found!\n");
}

void deleteStudent() {
    int r, i, j;

    printf("Enter Roll Number: ");
    scanf("%d", &r);

    for(i = 0; i < n; i++) {
        if(roll[i] == r) {
            for(j = i; j < n - 1; j++) {
                roll[j] = roll[j + 1];
                strcpy(name[j], name[j + 1]);
                marks[j] = marks[j + 1];
            }
            n--;
            printf("Student Deleted Successfully!\n");
            return;
        }
    }

    printf("Student Not Found!\n");
}