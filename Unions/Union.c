/*A union is a user-defined type similar to structs in C except for one key difference.
Structures allocate enough space to store all their members, whereas unions can only hold one 
member value at a time.*/

#include<stdio.h>

union car
{
    char name[50];
    int price;
}car1, car2, *car3;





int main()
{
    union car car1, car2, *car3;
    printf("How much for the 1st car?\n");
    scanf("%d", &car1.price);
    printf("DEAL!\n");


    return 0;
}