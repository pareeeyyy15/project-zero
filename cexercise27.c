//printing star pattern 

#include<stdio.h>
int main() 
{
    int c, i , j ,n ;
    printf(" Rows : ");
    scanf(" %d" , &n);

    printf(" 0 = Triangle , 1 = Reverse: ");
    scanf("%d" , &c);

    for (i= 1;i<=n;i++);
    {
        for(j=1 ; j<= ( c==0 ? i : n -i+1); j++)
         printf(" *");
         printf(" \n");
    }

    return 0;
}