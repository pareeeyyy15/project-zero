//structures in c 


#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[56];
};

int main() 
{
    struct Student pari, barbie, guddu;

    pari.id = 1;
    barbie.id = 2;
    guddu.id = 3;
    pari.marks = 999;
    barbie.marks= 999;
    guddu.marks = 999;
    pari.fav_char = 'p';
    barbie.fav_char= 'p';
    guddu.fav_char = 'p';
    strcpy(pari.name, "pari divinely blessed and spoiled magnificient successsful beauty" );
    printf("Pari got %d marks\n", pari.marks);
     printf("Pari's name is %s\n", pari.name);



    return 0;
}


