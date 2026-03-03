#include <stdio.h>

// Function declarations
void printName();
void printCollege();
void printTable();
void printQuote();

int main() {
    int choice;

    do {
        // Menu
        printf("\n--- MENU ---\n");
        printf("1. Print Name and Roll Number\n");
        printf("2. Print College Name\n");
        printf("3. Print Multiplication Table (Custom)\n");
        printf("4. Print Motivational Quote\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch to call functions
        switch(choice) {
            case 1:
                printName();
                break;
            case 2:
                printCollege();
                break;
            case 3:
                printTable();
                break;
            case 4:
                printQuote();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}

// Function definitions

void printName() {
    printf("\nMy Name: Pari\n");
    printf("Roll Number: 12345\n");
}

void printCollege() {
    printf("\nCollege Name: Rajiv Gandhi Proudyogiki Vishwavidyalaya (RGPV)\n");
}

void printTable() {
    int num, i;
    printf("\nEnter a number to print its multiplication table: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

void printQuote() {
    printf("\nMotivational Quote:\n");
    printf("\"Success is the sum of small efforts repeated day in and day out.\"\n");
}
