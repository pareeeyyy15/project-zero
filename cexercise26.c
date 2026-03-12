//arrays and pointers

#include<stdio.h>

int main () 
 {
//     char a = '3';
//     char* ptra = &a;
//     printf("%d\n" , ptra);
//     ptra--;
//     printf("%d\n" , ptra);
//     printf(" %d" , ptra -2) ;
    int arr[] = {1,2,3,4,5,6,67};
    printf(" Value at position 3 of the array is %d\n" , arr[3]);
    printf(" The address of first element of the array is %d\n" , &arr[0]);
    printf(" The address of second element of the array is %d\n" , &arr[1]);

    //printf("%d" , arr[0]);

    return 0;
}
