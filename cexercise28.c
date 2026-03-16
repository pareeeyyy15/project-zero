//call by function and call by value 


#include<stdio.h>
void changeValue(int * address ) 
{
      *address = 3456;
}
int main () 
{
   int a = 56, b = 65;
printf(" The value of a now is %d\n" , a);
changeValue(&a);
printf("The value of a now is %d\n" , a );  

return 0;

}
