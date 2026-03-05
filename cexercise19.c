#include <stdio.h>

int factorial(int number) {
    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter the number you want factorial of:\n");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("The factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
