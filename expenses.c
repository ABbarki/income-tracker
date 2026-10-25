#include <stdio.h>
#include <string.h>

struct Income {
    char source[50];
    int price;
};

int main(void)
{
    int choice;

    do {
        printf("\n===== INCOME & EXPENSE TRACKER =====\n");
        printf("1. Insert Income\n");
        printf("2. Insert Expense\n");
        printf("3. View Income Records\n");
        printf("4. View Expense Records\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input!\n");
            return 1;
        }

        getchar(); // Consume the newline

        switch (choice) {
            case 1:
                printf("Insert Income selected.\n");
                printf("Enter income source: ");
                fgets(income.source, sizeof(income.source), stdin);
                income.source[strcspn(income.source, "\n")] = '\0';
                
                break;

            case 2:
                printf("Insert Expense selected.\n");
                break;

            case 3:
                printf("View Income Records selected.\n");
                break;

            case 4:
                printf("View Expense Records selected.\n");
                break;

            case 5:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select 1-5.\n");
        }

    } while (choice != 5);

    return 0;
}
