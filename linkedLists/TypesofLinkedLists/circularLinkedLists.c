#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    node *next;
    node *prev;

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
    one->prev = three;

    two->next = three;
    two->prev = one;

    three->next = one;
    three->prev = two;

    head = one;
}