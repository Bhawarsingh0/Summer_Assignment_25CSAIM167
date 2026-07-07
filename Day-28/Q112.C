#include <stdio.h>
#include <string.h>
struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int n = 0, choice, i;
    char search[50];

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Name: ");
            scanf(" %[^\n]", contacts[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", contacts[n].phone);

            n++;
            printf("Contact added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No contacts available.\n");
            } else {
                printf("\n----- Contact List -----\n");
                for (i = 0; i < n; i++) {
                    printf("Name : %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    printf("------------------------\n");
                }
            }
            break;

        case 3: {
            int found = 0;

            printf("Enter Name to Search: ");
            scanf(" %[^\n]", search);

            for (i = 0; i < n; i++) {
                if (strcmp(contacts[i].name, search) == 0) {
                    printf("\nContact Found!\n");
                    printf("Name : %s\n", contacts[i].name);
                    printf("Phone: %s\n", contacts[i].phone);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact not found.\n");

            break;
        }

        case 4:
            printf("Thank you for using the Contact Management System.\n");
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}