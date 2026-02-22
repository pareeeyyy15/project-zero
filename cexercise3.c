#include <stdio.h>

// if else statements 
//int main(){
//
  //  int age;
    //printf(" Enter your age\n");


   // scanf("%d" , &age);
   // printf("You have entered %d as your age\n", age);
   // if (age>=18) {
     //   printf(" You can vote!");

   // }
   // else {
     //   printf("You cannot vote!");
   // }
//}        


int main(){

    int age;
    printf(" Enter your age\n");


    scanf("%d" , &age);
    printf("You have entered %d as your age\n", age);
    if (age>=18) {
        printf(" You can vote!");

    }


    else if (age>15)
    {
        printf(" You are between 12 to 18 and you can vote for kids");
    }

    else {
        printf("You cannot vote!");
    }

    return 0;
}        

