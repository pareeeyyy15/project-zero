//arrays 

#include<stdio.h>

int main () {
    int marks [4];
     
    for (int i = 0; i < 4; i++)
    {
       printf("Enter the value of the  %d element of the array\n" , i) ;
       scanf("%d" , &marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
       printf("The value of %d element of the array\n" , i , marks[i]) ;

      
    }

    return 0;

}
    
    





    // marks[0] =34;
    // printf("Marks of student 1 is %d\n" , marks [0]);
    // marks [0] = 222;
    // marks [1] = 333;
    // marks [2] = 444;
    // marks [3] = 555;
    // marks [4] = 666;
    // printf("Marks of student 1 is %d\n" , marks [0]);
    // return 0;



