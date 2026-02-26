// goto statement

 #include <stdio.h>
 int main () 
 {
//     label:
//        printf("we are inside label");
//     printf("hello world");
//     goto label;
//     end :
//         printf("we are at end");
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d" , i);
        for (int j = 0; i < 8; j++)
        {
           printf("enter the number . enter 0 to exit");
           scanf("%d" , &num);
        }
        

    }
    
  return 0 ;

}