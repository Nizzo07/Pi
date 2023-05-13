#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    node *next;
    node *prev;
}node;

void printList(node *p)
{
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

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
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = NULL;
    three->prev = two;

    head = one;

    printList(head);
}