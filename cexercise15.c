// without arguments and without return value

#include <stdio.h>

// function declarations
void printName();
void printTable();
void printQuote();

int main()
{
    // calling all functions one y one
    printName();
    printTable();
    printQuote();

    return 0;
}

// function definitions

// function1: prints your name
void printName()
{
    printf(" My name : Pareeey\n");
    printf("Roll number : 241224\n\n");
}

// function 2 : prints a fixed multiplication table

void printTable()
{
    int i;
    printf("multiplication table of 6:\n");
    for (i = 1; i <= 10; i ++)
    {
        printf("6 x %d = %d\n", i, 6 * i);
    }

    printf("\n");
}

// function 3: print a motivational quote
void printQuote()
{

    printf("Motivational quote:\n");
    printf("\"Success is the sum of all small efforts repeated day in and day out.\"\n");
}
