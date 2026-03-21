//strings functions 


#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]= "pari";
    char s2[]= "guddu" ;

     
    printf("The length of s1 is %d\n", strlen(s1));
    printf("The length of s2 is %d\n", strlen(s2));
    printf("tHE REVERSED STRING s1 is: ");
    puts(strrev(s2));
    printf("tHE REVERSED STRING s2 is: ");
    puts(strrev(s2));

    return 0;


}