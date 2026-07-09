#include <stdio.h>
#include <string.h>

int main() {
    char book[50][100];
    int quantity[50];
    int n, i, choice;
    char search[100];

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    // Add books
    for(i = 0; i < n; i++) {
        printf("\nEnter Book Name: ");
        gets(book[i]);

        printf("Enter Quantity: ");
        scanf("%d", &quantity[i]);
        getchar();
    }

    do {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display Books\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1:
                printf("\nBook Name\t\tQuantity\n");
                printf("-------------------------------------\n");
                for(i = 0; i < n; i++)
                    printf("%-20s %d\n", book[i], quantity[i]);
                break;

            case 2:
                printf("Enter Book Name: ");
                gets(search);

                for(i = 0; i < n; i++) {
                    if(strcmp(book[i], search) == 0) {
                        printf("Book Found! Quantity = %d\n", quantity[i]);
                        break;
                    }
                }
                if(i == n)
                    printf("Book Not Found!\n");
                break;

            case 3:
                printf("Enter Book Name to Issue: ");
                gets(search);

                for(i = 0; i < n; i++) {
                    if(strcmp(book[i], search) == 0) {
                        if(quantity[i] > 0) {
                            quantity[i]--;
                            printf("Book Issued Successfully.\n");
                        } else {
                            printf("Book Out of Stock.\n");
                        }
                        break;
                    }
                }
                if(i == n)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Enter Book Name to Return: ");
                gets(search);

                for(i = 0; i < n; i++) {
                    if(strcmp(book[i], search) == 0) {
                        quantity[i]++;
                        printf("Book Returned Successfully.\n");
                        break;
                    }
                }
                if(i == n)
                    printf("Book Not Found!\n");
                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}