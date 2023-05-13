#include <stdio.h>
#include <stdlib.h>
// A linked list is a linear data structure that includes a
// series of connected nodes. Here, each node stores the data and the address of the next node.

typedef struct node
{
    int data;
    struct node *next;

} node;

void printLinkedList(struct node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int main()
{
    // inicializa os nodes
    node *head;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;
    node *six = NULL;
    node *middle = NULL;

    // Alocar memoria
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    six = malloc(sizeof(struct node));
    middle = malloc(sizeof(struct node));

    // Dar valor as datas
    one->data = 1;
    two->data = 2;
    three->data = 3;
    six->data = 6;
    middle->data = 05;

    // Conectar os nodes
    one->next = two;
    two->next = middle;
    middle->next = three;
    three->next = six;
    six->next = NULL;

    // Salvar o endereço do primeiro node na head
    head = one;
    printLinkedList(head);

    return 0;
}