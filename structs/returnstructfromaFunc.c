#include<stdio.h>

typedef struct student
{
    char name[50];
    int age;
}student;

student getInformation();

int main()
{   
    student s;

    s = getInformation();

    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);

    return 0; 
}

student getInformation()
{
    student s1;

    printf("Enter a name: ");
    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%d\n", s1.age);
}


