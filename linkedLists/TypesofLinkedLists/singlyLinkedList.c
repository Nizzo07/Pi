#include<stdio.h>
#include<stdlib.h>
/*Listas ligadas têm 3 tipos:
- Singular(a comum);
- Double;
- Triple;*/

//Single Linked List:

typedef struct node
{
    int data;
    struct node *next;
}node;


int main()
{
     node *head;
     node *one = NULL;
     node *two = NULL;
     node *three = NULL;

    one = malloc(sizeof(node));
    two = malloc(sizeof(node));
    three = malloc(sizeof(node));

    one->data = 1;
    two->data = 2;
    three->data = 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;

    return 0;
}
