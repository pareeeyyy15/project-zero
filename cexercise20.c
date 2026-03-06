#include <stdio.h>

int sum(int number) {
    if (number == 0) {
        return 0;
    } else {
        return number + sum(number - 1);
    }
}

int main() {
    int num;
    printf("Enter the number up to which you want the sum:\n");
    scanf("%d", &num);

    if (num < 0) {
        printf("Sum is not defined for negative numbers.\n");
    } else {
        printf("The sum of first %d natural numbers is %d\n", num, sum(num));
    }

    return 0;
}
