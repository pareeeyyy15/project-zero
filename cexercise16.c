#include <stdio.h>

// Function declarations
void printName();
void printTable();
void printQuote();

int main()
{
    int choice;

    do
    {
        // Menu
        printf("\n--- MENU ---\n");
        printf("1. Print Name and Roll Number\n");
        printf("2. Print Multiplication Table of 5\n");
        printf("3. Print Motivational Quote\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch to call functions
        switch (choice)
        {
        case 1:
            printName();
            break;
        case 2:
            printTable();
            break;
        case 3:
            printQuote();
            break;
        case 4:
            printf("Exiting program. Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function definitions

void printName()
{
    printf("\nMy Name: Pari\n");
    printf("Roll Number: 12345\n");
}

void printTable()
{
    int i;
    printf("\nMultiplication Table of 5:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("5 x %d = %d\n", i, 5 * i);
    }
}

void printQuote()
{
    printf("\nMotivational Quote:\n");
    printf("\"Success is the sum of small efforts repeated day in and day out.\"\n");
}
