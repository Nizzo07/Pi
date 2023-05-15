#include<stdio.h>

typedef struct student
{
    char name[50];
    int age;
}student;

void display(student s);

int main()
{
    student s1;

    printf("Enter name: ");
    //read string input from the user untill \n is entered
    //\n is discarded

    scanf("%s", s1.name);

    printf("Enter age: ");
    scanf("%d", &s1.age);

    display(s1);
    return 0;
}

void display(student s)
{
    printf("\nDisplaying information...\n");
    printf("...\n...\n");
    printf("\nName: %s\n", s.name);
    printf("Age: %d\n", s.age);
}
