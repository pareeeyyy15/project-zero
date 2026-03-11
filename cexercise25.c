//arrays + pointers 

#include <stdio.h>
int main() 
{
    // int a = 56;
    // int* ptra = &a;
    // printf(" %d\n" , ptra);
    // printf(" %d" , ptra + 1);
    // return 0;
    
    
    char a = 5;
    
    char *ptra = &a;
    printf(" %d\n" , ptra);
    
    printf(" %d" , ptra - 2);
    return 0;
}