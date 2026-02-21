#include <stdio.h>
 int main() {
    int num;
    //Ask the user for input 
    printf("Enter the number you want for multipilcation table");
    scanf("%d", &num);

    //print the multiplication table
    printf("\nMultipilcation Table of %d:\n", num);
    for( int i=1; i<= 10; i++) {
        printf("%d x %d = %d\n" , num, i , num * i );

    } 

         return 0 ;
 }