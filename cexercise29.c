// call by reference 

#include<stdio.h>

void operation(int *a, int *b)
{
    int add, sub ;
    add = *a + *b;
    sub = *a - *b;
    

    *a = add;
    *b = sub;

}



int main() 
{
    int a , b;


    printf("Enter two numbers :");
    scanf("%d %d" , &a , &b);


    operation(&a , &b);


    printf("After operations :\n");
    printf("a = %d\n" , a);
    printf("b = %d\n" , b);


    return 0;
}