#include <stdio.h>

// if else statements
int main() {
    int maths , science ;

    //1 means paased , 0 means fail 
    printf("Did the students paas Maths? (1 for yes, 0 for no ): ");
    scanf("%d" ,  &maths);

    printf("Did the styudent paaas Science ? (1for yes, 0 for no): ");
    scanf("%d" , &science);


    if (maths== 1 && science== 1) {
         printf(" Reward: 45 rupees\n");
    } else if (science== 1) {
        printf("Reward: 15 rupees\n");
    } else if (maths == 1 ) {
       printf("Reawrd : 15 rupees\n");
    } else {
        printf(" No reward\n");
    }
       return 0;
    
}