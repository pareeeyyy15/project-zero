// functions
// with arguments and with return value
//  #include <stdio.h>
//  int sum(int a , int b )
//  {
//      return a+b ;
//  }
//  int main(){
//     int a , b , c ;
//     a = 9;
//     b = 87;
//     c = sum(a , b);
//     printf(" The sum is %d\n" , c);
//     return 0;

// }

// with argument and without return value;
#include <stdio.h>
int sum(int a, int b);

void printstar(int n)

{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}

int main()
{
    int a, b, c;
    a = 9;
    b = 87;
    c = sum(a, b);
    printstar(6);
    // printf(" The sum is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}